/*
 * XREFs of ?GetRootVisualForWindow@CWindowList@@UEAAJ_NPEAUIDwmWindow@@PEAPEAUIDwmChannel@@PEAI@Z @ 0x18007B740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180078608 (-GetCanvasClientTransformRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x180078624 (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 */

__int64 __fastcall CWindowList::GetRootVisualForWindow(
        CWindowList *this,
        char a2,
        struct IDwmWindow *a3,
        struct IDwmChannel **a4,
        unsigned int *a5)
{
  unsigned int *v9; // r14
  int SyncedWindowData; // eax
  unsigned int v11; // ebx
  CTopLevelWindow *v12; // rcx
  unsigned int CanvasClientTransformRootCompositionNodeHandle; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-28h] BYREF
  struct CWindowData *v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = a5;
  v16 = 0LL;
  *a4 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  *v9 = 0;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a3, 1, &v16);
  v11 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( !v16
      || (v12 = (CTopLevelWindow *)*((_QWORD *)v16 + 50)) == 0LL
      || (!a2
        ? (CanvasClientTransformRootCompositionNodeHandle = CTopLevelWindow::GetCanvasClientTransformRootCompositionNodeHandle(v12))
        : (CanvasClientTransformRootCompositionNodeHandle = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(v12)),
          (*v9 = CanvasClientTransformRootCompositionNodeHandle) == 0) )
    {
      v11 = -2147024890;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x11D5u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v11;
}
