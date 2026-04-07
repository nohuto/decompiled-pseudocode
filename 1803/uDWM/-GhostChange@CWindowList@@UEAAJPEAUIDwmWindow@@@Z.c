/*
 * XREFs of ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180002690
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::GhostChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  struct CWindowData *v7; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v7);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x11FFu);
  else
    *((_BYTE *)v7 + 592) |= 0x40u;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
