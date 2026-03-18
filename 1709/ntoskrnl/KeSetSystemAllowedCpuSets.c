/*
 * XREFs of KeSetSystemAllowedCpuSets @ 0x14011F4EC
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     RtlWriteAcquireTickLock @ 0x14011FBD8 (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x14011FBFC (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KeSetSystemAllowedCpuSets(unsigned int a1, char *a2)
{
  char *v2; // rbx
  __int64 result; // rax
  unsigned int v4; // edx
  int v5; // edi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // esi
  unsigned int v8; // r8d
  signed __int64 v9; // rdx
  signed __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = a2;
  result = KiValidateCpuSetMasks(a2, a1);
  v5 = 0;
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v7 = 20;
    if ( v4 < 0x14 )
      v7 = v4;
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v8 = 0;
    v9 = (char *)qword_140401408 - v2;
    v10 = (char *)KiSystemAllowedCpuSets - v2;
    do
    {
      v11 = *(_QWORD *)&v2[v9];
      if ( v8 < v7 )
        v12 = *(_QWORD *)v2;
      else
        v12 = *(_QWORD *)&v2[v9];
      *(_QWORD *)&v2[v10] = v12;
      if ( (v11 & v12) != v11 )
        v5 = 1;
      ++v8;
      v2 += 8;
    }
    while ( v8 < 0x14 );
    LOBYTE(v9) = CurrentIrql;
    KiRestrictedSystemCpuSetsActive = v5;
    ++KiCpuSetSequence;
    KeCpuSetReportParkedProcessors(0LL, v9);
    return 0LL;
  }
  return result;
}
