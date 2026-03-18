/*
 * XREFs of KeSetTagCpuSets @ 0x140202CEC
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14001B1AC (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x14001B1D0 (KiValidateCpuSetMasks.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // r8d
  __int64 v9; // r10
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v8 = 0;
    if ( a1 )
    {
      v9 = KiCpuSetData;
      do
      {
        for ( i = *v3; i; *(_QWORD *)(v9 + 16LL * ((v8 << 6) + (unsigned int)v11) + 8) = a3 )
        {
          _BitScanForward64(&v11, i);
          i &= ~(1LL << v11);
        }
        ++v8;
        ++v3;
      }
      while ( v8 < a1 );
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock(&KiCpuSetLock);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
