/*
 * XREFs of KiComputeThreadAffinity @ 0x1401329B0
 * Callers:
 *     KiSetSystemAffinityThread @ 0x14003AA28 (KiSetSystemAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140040610 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x14006B868 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1400CCDDC (KeSelectNodeForAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     RtlBeginReadTickLock @ 0x140132B60 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x140132B74 (KiComputeCpuSetAffinity.c)
 */

__int64 __fastcall KiComputeThreadAffinity(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 TickLock; // rsi
  __int64 v7; // rax
  __int64 v9; // r8
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    TickLock = RtlBeginReadTickLock(&KiCpuSetSequence);
  }
  else
  {
    v3 = (__int64 *)(a1 + 576);
    do
    {
      v4 = RtlBeginReadTickLock(&KiCpuSetSequence);
      v5 = *(_QWORD *)(a1 + 552);
      TickLock = v4;
      if ( ((v5 - 1) & v5) != 0 )
      {
        v7 = v5 & KiComputeCpuSetAffinity(a1);
        if ( v7 )
          v5 = v7;
      }
      if ( *v3 != v5 )
      {
        v9 = *(unsigned int *)(a1 + 196);
        *v3 = v5;
        if ( !KiPrcbInGroupAffinity(KiProcessorBlock[v9], (__int64)v3) )
        {
          v12 = v5;
          v13 = 0LL;
          LOWORD(v13) = *(_WORD *)(a1 + 584);
          v11 = KeSelectNodeForAffinity((__int64)&v12);
          v10 = KeSelectIdealProcessor(v11, (__int64)&v12, 0LL);
        }
        *(_DWORD *)(a1 + 588) = v10;
        KiUpdateSharedReadyQueueAffinityThread(KiProcessorBlock[v10], a1);
        KiUpdateNodeAffinitizedFlag(a1);
        v1 = 1;
      }
    }
    while ( KiCpuSetSequence != TickLock );
  }
  *(_QWORD *)(a1 + 568) = TickLock;
  return v1;
}
