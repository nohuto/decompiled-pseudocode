/*
 * XREFs of ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A940
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::WindowMinimizing(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  __int64 v5; // rdx
  bool v6; // r8
  unsigned int v7; // ebx
  CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x164Fu);
  }
  else if ( v9 && (*((_DWORD *)v9 + 25) & 0x20000000) == 0 )
  {
    CWindowData::SnapshotWindow(v9, v5, v6);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v7;
}
