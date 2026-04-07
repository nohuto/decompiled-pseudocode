/*
 * XREFs of ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18000DA30 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McTemplateU0pq @ 0x180079638 (McTemplateU0pq.c)
 */

__int64 __fastcall CWindowList::WindowTransitionChange(
        CWindowList *a1,
        struct IDwmWindow *a2,
        unsigned int a3,
        const RECT *a4,
        RECT *a5,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int SyncedWindowData; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  struct CWindowData *v15; // rbx
  struct CWindowData *v17; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-10h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(a1, a2, 1, &v17);
  v14 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1293u);
  }
  else
  {
    v15 = v17;
    if ( v17 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pq(v13, &UdwmTransitionTarget_Info, *((_QWORD *)v17 + 5), a3);
      CAnimationScheduler::OnWindowTransitionTargetChanged(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28),
        (__int64)v15,
        a3,
        a4,
        a5,
        a6,
        a7,
        a8);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v14;
}
