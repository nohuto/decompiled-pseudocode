/*
 * XREFs of ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00C7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     EngLockSurface @ 0x1C002D1A0 (EngLockSurface.c)
 *     EngModifySurface @ 0x1C0066600 (EngModifySurface.c)
 *     EngCreateDeviceSurface @ 0x1C0069B90 (EngCreateDeviceSurface.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C7580 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1C00D99F0 (EngCreateClip.c)
 */

HSURF __fastcall MulEnableSurface(struct DHPDEV__ *a1)
{
  ULONG v2; // r8d
  HSURF DeviceSurface; // rax
  HSURF v4; // rdi
  FLONG v5; // r8d
  HDEV v6; // rdx
  SURFOBJ *v7; // rax
  CLIPOBJ *Clip; // rax
  CLIPOBJ *v9; // rsi
  _QWORD *v10; // rdx
  __int64 v11; // rax
  SIZEL v13; // [rsp+50h] [rbp+8h]

  v2 = *((_DWORD *)a1 + 16);
  v13.cx = *((_DWORD *)a1 + 20) - *((_DWORD *)a1 + 18);
  v13.cy = *((_DWORD *)a1 + 21) - *((_DWORD *)a1 + 19);
  *((_DWORD *)a1 + 17) = 230891;
  DeviceSurface = EngCreateDeviceSurface((DHSURF)a1, v13, v2);
  v4 = DeviceSurface;
  if ( DeviceSurface
    && (v5 = *((_DWORD *)a1 + 17),
        v6 = (HDEV)*((_QWORD *)a1 + 4),
        *((_QWORD *)a1 + 3) = DeviceSurface,
        EngModifySurface(DeviceSurface, v6, v5, 3u, (DHSURF)a1, 0LL, 0, 0LL))
    && (v7 = EngLockSurface(v4), (*((_QWORD *)a1 + 6) = v7) != 0LL)
    && (Clip = EngCreateClip(), (v9 = Clip) != 0LL) )
  {
    Clip->rclBounds = *(RECTL *)(a1 + 18);
    RGNOBJ::vSet((RGNOBJ *)&Clip[2].rclBounds.top, &Clip->rclBounds);
    v10 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 7) = v9;
    while ( v10 )
    {
      v11 = v10[6];
      if ( (*(_DWORD *)(v11 + 1816) & 0x8000000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v11 + 2544) + 144LL) = v4;
      v10 = (_QWORD *)*v10;
    }
    return v4;
  }
  else
  {
    MulDisableSurface(a1);
    return 0LL;
  }
}
