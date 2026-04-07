/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800196FC
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x18000F368 (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019C60 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800384CC (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180065800 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180035770 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  bool HasRenderedBorder; // al
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r11d
  int v9; // esi
  int v10; // ebp
  int v11; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // eax

  HasRenderedBorder = CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 146));
  v5 = 0;
  if ( HasRenderedBorder || (*((_DWORD *)this + 146) & 0x200000) != 0 )
  {
    v6 = *((_BYTE *)this + 240) & 8 | 0x136LL;
    v7 = *((_QWORD *)this + 90);
    v8 = *(_DWORD *)((char *)this + 2 * v6);
    v9 = *(_DWORD *)((char *)this + 2 * v6 + 4);
    v10 = *(_DWORD *)((char *)this + 2 * v6 + 12);
    if ( v7 && (*(_BYTE *)(v7 + 592) & 8) == 0 )
    {
      a2->cyTopHeight = *(_DWORD *)((char *)this + 2 * v6 + 8);
      a2->cxLeftWidth = v8;
      a2->cxRightWidth = v9;
      a2->cyBottomHeight = v10;
    }
    else
    {
      v11 = *((_DWORD *)this + 152) - v9 - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
      v12 = *((_DWORD *)this + 154) - v10 - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
      v13 = 0;
      if ( *((_DWORD *)this + 151) - v8 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
        v13 = *((_DWORD *)this + 151) - v8 - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
      a2->cxLeftWidth = v8 + v13;
      a2->cyTopHeight = *(_DWORD *)((char *)this + 2 * v6 + 8);
      v14 = 0;
      if ( v11 >= 0 )
        v14 = v11;
      a2->cxRightWidth = v9 + v14;
      if ( v12 >= 0 )
        v5 = v12;
      a2->cyBottomHeight = v10 + v5;
    }
  }
}
