/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x14047B0A4
 * Callers:
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x1408A6094 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400A9968 (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x14016E244 (RtlWriteReleaseTickLock.c)
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
    v8 = &PsInitialSystemProcess[2].ThreadSeed[12];
    if ( (HIDWORD(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]) & 0x80u) != 0 )
      v8 = *(unsigned int **)v8;
    *(_QWORD *)&v8[2 * v5] |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
