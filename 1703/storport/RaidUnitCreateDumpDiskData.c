/*
 * XREFs of RaidUnitCreateDumpDiskData @ 0x1C003D184
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0018A34 (RaidGetTelemetryLogPageIds.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidUnitCreateDumpDiskData(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 (__fastcall **a4)(__int64 a1),
        _QWORD *a5)
{
  __int64 v5; // r13
  unsigned int v6; // edi
  __int64 v9; // r9
  char *Pool; // rax
  char *v13; // rsi
  int v14; // ecx
  _BYTE *v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rcx

  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  *a4 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  *a5 = 0LL;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x50uLL, 0x44436152u, v9);
  v13 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x50uLL);
    *(_DWORD *)v13 = 56;
    v13[4] = *(_BYTE *)(a1 + 88);
    v13[5] = *(_BYTE *)(a1 + 89);
    v13[6] = *(_BYTE *)(a1 + 90);
    v14 = *(_DWORD *)(v5 + 4356);
    *a3 = 80;
    v15 = v13 + 56;
    RaidGetTelemetryLogPageIds(v14, (__int64)(v13 + 8), (_WORD *)v13 + 20);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1456)) >= 0 )
      {
        *v15 = 1;
        v16 = *(__int64 **)(a1 + 1456);
        *a5 = v15;
        v17 = *v16;
        *((_QWORD *)v13 + 9) = a1 + 1446;
        *a4 = StorDumpDiskPowerOn;
        *((_QWORD *)v13 + 8) = v17;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    }
    *a2 = v13;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
