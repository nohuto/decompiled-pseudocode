/*
 * XREFs of ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007B820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180065940 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

__int64 __fastcall CWindowList::GetWindowBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  CTopLevelWindow *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-30h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_QWORD *)&v11.left = 0LL;
  *(_QWORD *)&a3->left = 0LL;
  *(_QWORD *)&a3->right = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, (struct CWindowData **)&v11);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( *(_QWORD *)&v11.left )
    {
      v8 = *(CTopLevelWindow **)(*(_QWORD *)&v11.left + 400LL);
      if ( v8 )
        *a3 = *CTopLevelWindow::GetActualWindowRect(v8, &v11, 0, 1, 1);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x12E0u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v7;
}
