/*
 * XREFs of RaidUnitCreateDumpData @ 0x1C00671BC
 * Callers:
 *     RaidUnitCreateDumpInfo @ 0x1C00672DC (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0011960 (RaidGetTelemetryLogPageIds.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaidUnitCreateDumpData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rbp
  char *Pool; // rax
  unsigned int v8; // esi
  char *v9; // rdi
  int v10; // ecx
  _BYTE *v11; // r14
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x68uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v8 = 0;
  v9 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x68uLL);
    *(_DWORD *)v9 = 80;
    v9[66] = *(_BYTE *)(a1 + 88);
    v9[67] = *(_BYTE *)(a1 + 89);
    v9[68] = *(_BYTE *)(a1 + 90);
    v10 = *(_DWORD *)(v3 + 4356);
    *a3 = 104;
    v11 = v9 + 80;
    RaidGetTelemetryLogPageIds(v10, (__int64)(v9 + 32), (_WORD *)v9 + 32);
    if ( RaidUnitCheckAndAcquirePoFx(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1488)) >= 0 )
      {
        *v11 = 1;
        v12 = **(_QWORD **)(a1 + 1488);
        *((_QWORD *)v9 + 12) = a1 + 1478;
        *((_QWORD *)v9 + 11) = v12;
        *((_QWORD *)v9 + 1) = a1 + 1479;
        *((_QWORD *)v9 + 2) = StorDumpDiskPowerOn;
        *((_QWORD *)v9 + 3) = v11;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
    }
    *a2 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
