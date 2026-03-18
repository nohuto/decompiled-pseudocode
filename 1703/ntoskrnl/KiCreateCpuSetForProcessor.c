/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x140411A90
 * Callers:
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x140809F24 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14001B1AC (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x140149278 (RtlWriteReleaseTickLock.c)
 */

__int64 __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int *v8; // rdx
  __int64 result; // rax

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v3 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v3];
    v5 = (unsigned int)v3;
    v6 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    v8 = &PsInitialSystemProcess[2].ThreadSeed[6];
    if ( (PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0] & 0x20000000000LL) != 0 )
      v8 = *(unsigned int **)v8;
    *(_QWORD *)&v8[2 * v5] |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
