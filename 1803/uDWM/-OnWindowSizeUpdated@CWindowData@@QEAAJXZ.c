/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EF88 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002ED14 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007F6B4 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CTopLevelWindow **this)
{
  int v2; // eax
  unsigned int v3; // edi
  CWindowIconic *v4; // rcx
  CProjectionBorderVisual *v5; // rcx
  __int64 i; // rsi
  __int64 j; // rsi
  CSecondaryWindowRepresentation *v9; // rcx
  CThumbnailVisual *v10; // rcx
  int updated; // eax
  __int128 v12; // [rsp+30h] [rbp-18h]

  v2 = CTopLevelWindow::OnWindowSizeUpdated(this[49]);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1A13u);
  }
  else
  {
    v4 = this[54];
    if ( v4 && (updated = CWindowIconic::UpdateSizeOrMargins(v4, 0), v3 = updated, updated < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1A18u);
    }
    else
    {
      v5 = this[51];
      if ( v5 )
      {
        CProjectionBorderVisual::UpdateRectFromWindow(v5, (struct CWindowData *)this);
        (*(void (__fastcall **)(_QWORD, CTopLevelWindow *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 60)
                                                          + 48LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
          this[5]);
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 116); i = (unsigned int)(i + 1) )
      {
        v9 = (CSecondaryWindowRepresentation *)*((_QWORD *)this[55] + i);
        v12 = *((_OWORD *)v9 + 4);
        if ( (CTopLevelWindow **)v12 == this && ((DWORD2(v12) - 1) & 0xFFFFFFFD) == 0 )
          CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v9);
      }
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 126); j = (unsigned int)(j + 1) )
      {
        v10 = *(CThumbnailVisual **)(*((_QWORD *)this[60] + j) + 88LL);
        if ( v10 )
          CThumbnailVisual::SetDirtyFlags(v10, 4096);
      }
    }
  }
  return v3;
}
