/*
 * XREFs of ?RemoveSwapchainTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180085000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::RemoveSwapchainTargetFromWindow(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  CBaseObject *v7; // rcx
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData >= 0 )
  {
    if ( v9 && (v6 = *((_QWORD *)v9 + 50)) != 0 )
    {
      v7 = *(CBaseObject **)(v6 + 776);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)(v6 + 776) = 0LL;
      }
      *(_DWORD *)(v6 + 768) = 0;
      *(_BYTE *)(v6 + 772) = 0;
    }
    else
    {
      v5 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0x11E5u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, SyncedWindowData, 0x11E2u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
