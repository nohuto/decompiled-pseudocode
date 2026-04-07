/*
 * XREFs of ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180033BB4 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientGlassChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  CWindowList *v7; // rcx
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v9);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0xEB6u);
  }
  else
  {
    v6 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 160LL))(a2, (char *)v9 + 268);
      CWindowList::OnClientGlassChange(v7, v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v5;
}
