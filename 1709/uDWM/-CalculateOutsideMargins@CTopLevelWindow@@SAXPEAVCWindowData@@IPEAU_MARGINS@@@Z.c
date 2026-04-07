/*
 * XREFs of ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800783B0
 * Callers:
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800384CC (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180035770 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006558C (-GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CTopLevelWindow::CalculateOutsideMargins(struct CWindowData *this, char a2, struct _MARGINS *a3)
{
  int cxLeftWidth; // eax
  int v6; // ecx
  int v7; // ecx
  int cxRightWidth; // eax
  int v9; // ecx
  int v10; // ecx
  int cyTopHeight; // eax
  int v12; // ecx
  int v13; // ecx
  int cyBottomHeight; // eax
  int v15; // ecx
  struct _MARGINS v16; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&a3->cxLeftWidth = 0LL;
  *(_QWORD *)&a3->cyTopHeight = 0LL;
  if ( CTopLevelWindow::HasRenderedBorder(a2)
    && *((_DWORD *)this + 16) >= CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth
    && *((_DWORD *)this + 17) >= dword_1800BEE9C
    && *((_DWORD *)this + 18) >= dword_1800BEEA0
    && *((_DWORD *)this + 19) >= dword_1800BEEA4
    && (*((_DWORD *)this + 26) & 0x800000) == 0
    && (int)GetSystemMetricsForDpi(92LL, *((unsigned int *)this + 83)) > 0 )
  {
    *(_QWORD *)&v16.cxLeftWidth = 0LL;
    *(_QWORD *)&v16.cyTopHeight = 0LL;
    CWindowData::GetWindowFrameMargins(this, &v16);
    cxLeftWidth = v16.cxLeftWidth;
    v6 = *((_DWORD *)this + 16);
    if ( v6 > v16.cxLeftWidth )
      cxLeftWidth = *((_DWORD *)this + 16);
    v7 = v6 - cxLeftWidth;
    cxRightWidth = v16.cxRightWidth;
    a3->cxLeftWidth = v7;
    v9 = *((_DWORD *)this + 17);
    if ( v9 > cxRightWidth )
      cxRightWidth = *((_DWORD *)this + 17);
    v10 = v9 - cxRightWidth;
    cyTopHeight = v16.cyTopHeight;
    a3->cxRightWidth = v10;
    v12 = *((_DWORD *)this + 18);
    if ( v12 > cyTopHeight )
      cyTopHeight = *((_DWORD *)this + 18);
    v13 = v12 - cyTopHeight;
    cyBottomHeight = v16.cyBottomHeight;
    a3->cyTopHeight = v13;
    v15 = *((_DWORD *)this + 19);
    if ( v15 > cyBottomHeight )
      cyBottomHeight = *((_DWORD *)this + 19);
    a3->cyBottomHeight = v15 - cyBottomHeight;
  }
}
