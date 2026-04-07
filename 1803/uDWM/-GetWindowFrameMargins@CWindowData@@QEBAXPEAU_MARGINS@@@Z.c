/*
 * XREFs of ?GetWindowFrameMargins@CWindowData@@QEBAXPEAU_MARGINS@@@Z @ 0x18006C08C
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x1800817C0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?RoundToNearestInt@@YAHN@Z @ 0x180082440 (-RoundToNearestInt@@YAHN@Z.c)
 */

void __fastcall CWindowData::GetWindowFrameMargins(CWindowData *this, struct _MARGINS *a2)
{
  __int64 v3; // rdx
  bool v4; // zf
  __int64 v5; // rcx
  int SystemMetricsForDpi; // edi
  int v7; // eax

  if ( (*((_BYTE *)this + 102) & 0xC0) == 0xC0 )
  {
    v3 = *((unsigned int *)this + 81);
    v4 = *((_BYTE *)this + 104) >= 0;
    v5 = 51LL;
    if ( v4 )
      v5 = 4LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v5, v3);
    a2->cyTopHeight = SystemMetricsForDpi;
  }
  else
  {
    SystemMetricsForDpi = a2->cyTopHeight;
  }
  v7 = RoundToNearestInt(*((double *)CDesktopManager::s_pDesktopManagerInstance + 55));
  a2->cyBottomHeight = v7;
  a2->cxLeftWidth = v7;
  a2->cxRightWidth = v7;
  a2->cyTopHeight = SystemMetricsForDpi + v7;
}
