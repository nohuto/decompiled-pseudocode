/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x180042340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006FDBC (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rdx
  CTopLevelWindow *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x1009u);
  }
  else
  {
    v8 = v12;
    if ( v12 )
    {
      if ( (a3->dwFlags & 1) != 0 )
        *((_BYTE *)v12 + 593) = *((_BYTE *)v12 + 593) & 0xFB | (a3->fEnable ? 4 : 0);
      if ( (a3->dwFlags & 4) != 0 )
        *((_BYTE *)v8 + 593) = *((_BYTE *)v8 + 593) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
      v9 = (CTopLevelWindow *)*((_QWORD *)v8 + 50);
      if ( v9 )
        CTopLevelWindow::OnBlurBehindUpdated(v9);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
