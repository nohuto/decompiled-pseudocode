/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002C878
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800295C0 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x18004B336 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // edi
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  __int128 v7; // xmm0
  CVisual *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)((char *)a2 + 260) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 67) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 68) == 0x7FFFFFFF )
  {
    v7 = *(_OWORD *)((char *)a2 + 260);
    v6 = HIDWORD(v7);
    v5 = *(_QWORD *)((char *)a2 + 268);
    v4 = HIDWORD(*(_QWORD *)((char *)a2 + 260));
    v3 = v7;
  }
  else
  {
    v3 = (int)ceilf_0((float)*((int *)a2 + 65) * *((float *)a2 + 76));
    LODWORD(v10) = v3;
    v4 = (int)ceilf_0((float)*((int *)a2 + 66) * *((float *)a2 + 76));
    DWORD1(v10) = v4;
    v5 = (int)ceilf_0((float)*((int *)a2 + 67) * *((float *)a2 + 76));
    DWORD2(v10) = v5;
    v6 = (int)ceilf_0((float)*((int *)a2 + 68) * *((float *)a2 + 76));
    HIDWORD(v10) = v6;
    v7 = v10;
  }
  if ( *((_DWORD *)a2 + 20) != v3
    || *((_DWORD *)a2 + 21) != v4
    || *((_DWORD *)a2 + 22) != v5
    || *((_DWORD *)a2 + 23) != v6 )
  {
    v9 = (CVisual *)*((_QWORD *)a2 + 49);
    *((_OWORD *)a2 + 5) = v7;
    if ( v9 )
      CVisual::SetDirtyFlags(v9, 0x4000);
  }
}
