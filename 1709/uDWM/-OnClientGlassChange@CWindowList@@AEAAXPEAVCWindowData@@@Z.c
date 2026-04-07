/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800262A4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029B30 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x180046736 (ceilf_0.c)
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

  if ( *(_QWORD *)((char *)a2 + 268) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 69) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 70) == 0x7FFFFFFF )
  {
    v7 = *(_OWORD *)((char *)a2 + 268);
    v6 = HIDWORD(v7);
    v5 = *(_QWORD *)((char *)a2 + 276);
    v4 = HIDWORD(*(_QWORD *)((char *)a2 + 268));
    v3 = v7;
  }
  else
  {
    v3 = (int)ceilf_0((float)*((int *)a2 + 67) * *((float *)a2 + 43));
    LODWORD(v10) = v3;
    v4 = (int)ceilf_0((float)*((int *)a2 + 68) * *((float *)a2 + 43));
    DWORD1(v10) = v4;
    v5 = (int)ceilf_0((float)*((int *)a2 + 69) * *((float *)a2 + 44));
    DWORD2(v10) = v5;
    v6 = (int)ceilf_0((float)*((int *)a2 + 70) * *((float *)a2 + 44));
    HIDWORD(v10) = v6;
    v7 = v10;
  }
  if ( *((_DWORD *)a2 + 20) != v3
    || *((_DWORD *)a2 + 21) != v4
    || *((_DWORD *)a2 + 22) != v5
    || *((_DWORD *)a2 + 23) != v6 )
  {
    v9 = (CVisual *)*((_QWORD *)a2 + 50);
    *((_OWORD *)a2 + 5) = v7;
    if ( v9 )
      CVisual::SetDirtyFlags(v9, 0x4000);
  }
}
