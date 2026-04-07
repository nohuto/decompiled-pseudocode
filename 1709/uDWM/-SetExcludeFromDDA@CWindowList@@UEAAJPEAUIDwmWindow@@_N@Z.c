/*
 * XREFs of ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BCB0
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EFF0 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::SetExcludeFromDDA(CWindowList *this, struct IDwmWindow *a2, unsigned __int8 a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  CTopLevelWindow *v8; // rcx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x7AEu);
  }
  else if ( v12 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)v12 + 50);
    if ( v8 )
    {
      v9 = CTopLevelWindow::SetExcludeFromDDA(v8, a3);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x7B2u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
