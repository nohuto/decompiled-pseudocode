/*
 * XREFs of ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x180085500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x1800703C8 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 */

__int64 __fastcall CWindowList::SetResizeCompSyncObject(CWindowList *this, struct IDwmWindow *a2, void *a3)
{
  int SyncedWindowData; // eax
  struct CWindowData *v7; // rax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v10);
  if ( SyncedWindowData >= 0 )
  {
    CWindowList::CommitAndCloseResizeCompSyncObject(this);
    v7 = v10;
    *((_QWORD *)this + 72) = a3;
    *((_QWORD *)this + 73) = *((_QWORD *)v7 + 5);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x749u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return 0LL;
}
