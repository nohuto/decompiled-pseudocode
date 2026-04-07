/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003E33C
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18003AE78 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ @ 0x18006FC74 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180083A10 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x1800164CC (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 146)) || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v4 = 2 * (*((_BYTE *)this + 240) & 8 | 0x136LL);
    v5 = *((_QWORD *)this + 90);
    v6 = *(_DWORD *)((char *)this + v4);
    v7 = *(_DWORD *)((char *)this + v4 + 4);
    v8 = *(_DWORD *)((char *)this + v4 + 12);
    if ( v5 && (*(_BYTE *)(v5 + 592) & 8) == 0 )
    {
      a2->cyTopHeight = *(_DWORD *)((char *)this + v4 + 8);
      a2->cxLeftWidth = v6;
      a2->cxRightWidth = v7;
      a2->cyBottomHeight = v8;
    }
    else
    {
      v9 = *((_DWORD *)this + 151) - v6 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      if ( v9 < 0 )
        v9 = 0;
      v10 = *((_DWORD *)this + 152) - v7 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      if ( v10 < 0 )
        v10 = 0;
      v11 = *((_DWORD *)this + 154) - v8 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      a2->cxLeftWidth = v6 + v9;
      if ( v11 < 0 )
        v11 = 0;
      a2->cyTopHeight = *(_DWORD *)((char *)this + v4 + 8);
      a2->cxRightWidth = v7 + v10;
      a2->cyBottomHeight = v8 + v11;
    }
  }
}
