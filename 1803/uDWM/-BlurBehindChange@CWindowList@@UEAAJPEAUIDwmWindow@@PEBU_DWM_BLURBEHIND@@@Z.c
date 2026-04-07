/*
 * XREFs of ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x18003E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18006C3A0 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::BlurBehindChange(
        CWindowList *this,
        struct IDwmWindow *a2,
        const struct _DWM_BLURBEHIND *a3)
{
  int SyncedWindowData; // eax
  unsigned int v7; // ebx
  struct CWindowData *v8; // rdx
  DWORD dwFlags; // eax
  CTopLevelWindow *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x113Fu);
  }
  else
  {
    v8 = v13;
    if ( v13 )
    {
      dwFlags = a3->dwFlags;
      if ( (a3->dwFlags & 1) != 0 )
      {
        *((_BYTE *)v13 + 593) = *((_BYTE *)v13 + 593) & 0xFB | (a3->fEnable ? 4 : 0);
        dwFlags = a3->dwFlags;
      }
      if ( (dwFlags & 4) != 0 )
        *((_BYTE *)v8 + 593) = *((_BYTE *)v8 + 593) & 0xF7 | (a3->fTransitionOnMaximized ? 8 : 0);
      v10 = (CTopLevelWindow *)*((_QWORD *)v8 + 49);
      if ( v10 )
        CTopLevelWindow::OnBlurBehindUpdated(v10);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
