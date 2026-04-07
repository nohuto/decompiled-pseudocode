/*
 * XREFs of ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010FBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::WindowMinimizing(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v7; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v7);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1533u);
  }
  else if ( v7 && (*((_DWORD *)v7 + 25) & 0x20000000) == 0 )
  {
    CWindowData::SnapshotWindow(v7);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v5;
}
