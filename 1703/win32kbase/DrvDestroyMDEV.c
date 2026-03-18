/*
 * XREFs of DrvDestroyMDEV @ 0x1C008DC60
 * Callers:
 *     hdcOpenDCW @ 0x1C0022470 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C007B17C (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 i; // rsi
  PDEV *v5; // rbx
  __int64 v6; // rcx
  PDEV *v7; // rbx
  __int64 v8; // rcx
  PDEV *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 20); i = (unsigned int)(i + 1) )
  {
    v9 = *(PDEV **)(a1 + 40 * i + 32);
    v5 = v9;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*((_DWORD *)v5 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v6);
    }
    PDEVOBJ::vUnreferencePdev(&v9, 0);
  }
  if ( *(_DWORD *)(a1 + 20) > 1u )
  {
    v9 = *(PDEV **)a1;
    v7 = v9;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    --*((_DWORD *)v7 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v8);
    }
    PDEVOBJ::vUnreferencePdev(&v9, 0);
  }
}
