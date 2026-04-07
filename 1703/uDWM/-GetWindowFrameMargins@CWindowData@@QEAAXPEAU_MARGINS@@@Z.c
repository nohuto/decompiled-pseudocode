/*
 * XREFs of ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006E1A4
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800802B4 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x18008110C (-RoundToNearestInt@@YAHN@Z.c)
 */

void __fastcall CWindowData::GetWindowFrameMargins(CWindowData *this, struct _MARGINS *a2)
{
  unsigned int v3; // edx
  CDesktopManager *v4; // rbx
  int v5; // edi
  int v6; // eax

  if ( (*((_BYTE *)this + 102) & 0xC0) == 0xC0 )
  {
    v3 = 51;
    if ( *((char *)this + 104) >= 0 )
      v3 = 4;
    a2->cyTopHeight = CWindowData::GetSystemMetrics(this, v3);
  }
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = RoundToNearestInt(*((double *)CDesktopManager::s_pDesktopManagerInstance + 49));
  v6 = RoundToNearestInt(*((double *)v4 + 50));
  a2->cyTopHeight += v5;
  a2->cxLeftWidth = v6;
  a2->cxRightWidth = v6;
  a2->cyBottomHeight = v5;
}
