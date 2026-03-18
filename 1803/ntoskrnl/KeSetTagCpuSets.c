/*
 * XREFs of KeSetTagCpuSets @ 0x140246DA8
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400A9968 (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x1400A998C (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; *(_QWORD *)(KiCpuSetData + 16LL * ((i << 6) + (unsigned int)v10) + 8) = a3 )
      {
        _BitScanForward64(&v10, j);
        j &= ~(1LL << v10);
      }
      ++i;
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock(&KiCpuSetLock);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
