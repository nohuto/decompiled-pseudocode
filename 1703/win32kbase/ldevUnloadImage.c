/*
 * XREFs of ldevUnloadImage @ 0x1C005F790
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0057F50 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C005F630 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C005F8A0 (ldevLoadDriver.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0068AD4 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  void (*v8)(void); // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v7 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v7);
    v8 = *(void (**)(void))(a1 + 128);
    if ( v8 )
      v8();
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v9 + 24), 8uLL);
    if ( *(_QWORD *)a1 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD **)(a1 + 8);
    if ( v10 )
      *v10 = *(_QWORD *)a1;
    else
      gpldevDrivers = *(struct _LDEV **)a1;
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 )
    {
      Win32FreePool(*(_QWORD *)(v11 + 8));
      Win32FreePool(*(_QWORD *)(a1 + 16));
    }
    Win32FreePool(a1);
  }
  else
  {
    v4 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v4);
  }
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
