/*
 * XREFs of ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180038210
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x1800382A8 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x18003EAC0 (-UpdateTabletMode@CDesktopManager@@QEAAJH@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003ED94 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180089BE8 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180089E0C (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 */

void __fastcall CDesktopManager::HandleThreadMessage(int a1, HWND a2, unsigned int a3)
{
  HWND LastActivePopup; // rbx
  HWND Ancestor; // rax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+48h] [rbp+20h] BYREF

  LastActivePopup = a2;
  if ( a1 != 1027 )
  {
    switch ( a1 )
    {
      case 1029:
        v5 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::ActivateLivePreview((struct LivePreviewRequest *)LastActivePopup);
        break;
      case 1031:
        CContactManager::HandleFlickFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
          a2 != 0LL,
          a3);
        return;
      case 1032:
        CContactManager::HandleKeystateFeedbackMessage(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
          a2 != 0LL,
          a3);
        return;
      case 1033:
        v5 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance);
        break;
      case 1025:
        v5 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        CDesktopManager::UpdateTabletMode(CDesktopManager::s_pDesktopManagerInstance, (int)LastActivePopup);
        break;
      default:
        return;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
    return;
  }
  if ( !IsWindowEnabled(a2) )
  {
    Ancestor = GetAncestor(LastActivePopup, 3u);
    LastActivePopup = GetLastActivePopup(Ancestor);
  }
  SwitchToThisWindow(LastActivePopup, 1);
}
