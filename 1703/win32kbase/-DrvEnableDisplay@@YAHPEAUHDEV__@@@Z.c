/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C009BB08
 * Callers:
 *     DrvEnableMDEV @ 0x1C005B3E4 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00988E0 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  HSEMAPHORE *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  v3 = 1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[6], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[5]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[5], 11);
  if ( a1[343] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[343])(a1[227], 1LL) )
      ;
  }
  else
  {
    v3 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v13, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()");
  v5 = (struct _ERESOURCE *)a1[5];
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    PsLeavePriorityRegion(v6);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT");
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v7);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v8);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()");
  v9 = (struct _ERESOURCE *)a1[6];
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v11);
  }
  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  return v3;
}
