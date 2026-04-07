/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18006C6A0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x18004B336 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  float v3; // xmm6_4
  int v4; // esi
  int v5; // ebp
  int v6; // r14d
  int v7; // ecx
  bool v8; // al
  CVisual *v9; // rcx
  CWindowIconic *v10; // rcx
  __int64 i; // rbx
  CThumbnailVisual *v12; // rcx
  __int64 v13; // rax
  __int64 j; // rbx
  CThumbnailVisual *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h]

  v3 = *((float *)a2 + 76);
  LODWORD(v16) = (int)ceilf_0((float)*((int *)a2 + 61) * v3);
  v4 = (int)ceilf_0((float)*((int *)a2 + 62) * v3);
  DWORD1(v16) = v4;
  v5 = (int)ceilf_0((float)*((int *)a2 + 63) * v3);
  DWORD2(v16) = v5;
  v6 = (int)ceilf_0((float)*((int *)a2 + 64) * v3);
  HIDWORD(v16) = v6;
  v7 = (int)ceilf_0((float)*((int *)a2 + 69) * v3);
  v8 = *((_QWORD *)a2 + 8) != __PAIR64__(v4, v16) || *((_DWORD *)a2 + 18) != v5 || *((_DWORD *)a2 + 19) != v6;
  if ( v8 || *((_DWORD *)a2 + 24) != v7 )
  {
    *((_DWORD *)a2 + 24) = v7;
    v9 = (CVisual *)*((_QWORD *)a2 + 49);
    *((_OWORD *)a2 + 4) = v16;
    if ( v9 )
      CVisual::SetDirtyFlags(v9, 0x2000);
    v10 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( v10 )
      CWindowIconic::UpdateSizeOrMargins(v10, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v12 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 64) + 8 * i) + 88LL);
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 46);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 77) )
            CThumbnailVisual::SetDirtyFlags(v12, 0x4000);
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 126); j = (unsigned int)(j + 1) )
    {
      v15 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 60) + 8 * j) + 88LL);
      if ( v15 )
        CThumbnailVisual::SetDirtyFlags(v15, 4096);
    }
    if ( *((_QWORD *)a2 + 51) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 60) + 56LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
        *((_QWORD *)a2 + 5));
  }
}
