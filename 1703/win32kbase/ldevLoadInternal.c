/*
 * XREFs of ldevLoadInternal @ 0x1C0062730
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0062848 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, _BYTE *), int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  struct _LDEV *v6; // rax
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v4 = PALLOCMEM2(0x390uLL, 1986292807LL, 1);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v4[226] = 0;
    *((_QWORD *)v4 + 112) = v4 + 16;
    if ( a1(196865LL, 16LL, v9) && (unsigned int)ldevFillTable(v5, v9) )
    {
      *(_DWORD *)(v5 + 24) = a2;
      *(_DWORD *)(v5 + 28) = 1;
      v6 = gpldevDrivers;
      if ( gpldevDrivers )
      {
        *((_QWORD *)gpldevDrivers + 1) = v5;
        v6 = gpldevDrivers;
      }
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)v5 = v6;
      gpldevDrivers = (struct _LDEV *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
    }
    else
    {
      Win32FreePool(v5);
      v5 = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v7);
  }
  return v5;
}
