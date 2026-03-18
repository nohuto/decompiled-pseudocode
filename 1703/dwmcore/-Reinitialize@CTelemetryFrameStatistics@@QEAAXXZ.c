/*
 * XREFs of ?Reinitialize@CTelemetryFrameStatistics@@QEAAXXZ @ 0x1800BC450
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall CTelemetryFrameStatistics::Reinitialize(CTelemetryFrameStatistics *this)
{
  __int128 v2; // xmm1
  LARGE_INTEGER v3; // rax
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  memset_0(v4, 0, sizeof(v4));
  v2 = v4[1];
  *((_OWORD *)this + 2) = v4[0];
  *((_OWORD *)this + 3) = v2;
  QueryPerformanceCounter(&PerformanceCount);
  v3 = PerformanceCount;
  *((_QWORD *)this + 1) = 0LL;
  *(LARGE_INTEGER *)this = v3;
}
