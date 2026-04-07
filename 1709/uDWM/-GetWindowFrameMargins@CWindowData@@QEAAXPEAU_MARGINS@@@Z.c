/*
 * XREFs of ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006558C
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800783B0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180079078 (-RoundToNearestInt@@YAHN@Z.c)
 */

void __fastcall CWindowData::GetWindowFrameMargins(CWindowData *this, struct _MARGINS *a2)
{
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  CDesktopManager *v6; // rbx
  int v7; // edi
  int v8; // eax

  if ( (*((_BYTE *)this + 102) & 0xC0) == 0xC0 )
  {
    v3 = *((unsigned int *)this + 83);
    v4 = *((_BYTE *)this + 104) >= 0;
    v5 = 51LL;
    if ( v4 )
      v5 = 4LL;
    a2->cyTopHeight = GetSystemMetricsForDpi(v5, v3);
  }
  v6 = CDesktopManager::s_pDesktopManagerInstance;
  v7 = RoundToNearestInt(*((double *)CDesktopManager::s_pDesktopManagerInstance + 55));
  v8 = RoundToNearestInt(*((double *)v6 + 56));
  a2->cyTopHeight += v7;
  a2->cxLeftWidth = v8;
  a2->cxRightWidth = v8;
  a2->cyBottomHeight = v7;
}
