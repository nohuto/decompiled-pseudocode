/*
 * XREFs of ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@I@Z @ 0x18007F320
 * Callers:
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E2C0 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180027044 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z @ 0x18007EE5C (-_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJIHH@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow(
        CProjectionBorderManager *this,
        HWND a2,
        unsigned int a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CTopLevelWindow *v9; // rcx
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  struct _MARGINS v12; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CWindowData *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 )
  {
    *(_QWORD *)v11 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v14 = 0LL;
    SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                               a2,
                               &v14);
    v7 = SyncedWindowDataByHwnd;
    if ( SyncedWindowDataByHwnd < 0 )
    {
      v8 = 814LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)SyncedWindowDataByHwnd);
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
      return v7;
    }
    if ( v14 )
    {
      v9 = (CTopLevelWindow *)*((_QWORD *)v14 + 49);
      if ( v9 )
      {
        CTopLevelWindow::GetOutsideMargins(v9, &v12);
        SyncedWindowDataByHwnd = CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
                                   this,
                                   a3,
                                   -v12.cxLeftWidth,
                                   -v12.cyTopHeight);
        v7 = SyncedWindowDataByHwnd;
        if ( SyncedWindowDataByHwnd < 0 )
        {
          v8 = 821LL;
          goto LABEL_8;
        }
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v11);
  }
  return 0LL;
}
