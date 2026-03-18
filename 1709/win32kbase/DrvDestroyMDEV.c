/*
 * XREFs of DrvDestroyMDEV @ 0x1C008C00C
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C008BEA8 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 i; // rsi
  PDEV **v5; // rbx
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rcx
  PDEV **v9; // rbx
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rcx
  PDEV **v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
  {
    v13 = *(PDEV ***)(a1 + 40 * i + 32);
    v5 = v13;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*((_DWORD *)v5 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v6);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v8);
    }
    PDEVOBJ::vUnreferencePdev(&v13, 0, v7);
  }
  if ( *(_DWORD *)(a1 + 20) > 1u )
  {
    v13 = *(PDEV ***)a1;
    v9 = v13;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*((_DWORD *)v9 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v10);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v12);
    }
    PDEVOBJ::vUnreferencePdev(&v13, 0, v11);
  }
}
