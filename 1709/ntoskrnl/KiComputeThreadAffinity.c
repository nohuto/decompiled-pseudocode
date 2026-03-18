/*
 * XREFs of KiComputeThreadAffinity @ 0x1400AAF70
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiSetAffinityThread @ 0x1400ABE08 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSets @ 0x140153F78 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140019804 (KeSelectIdealProcessor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14008C810 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400A88E8 (KiUpdateNodeAffinitizedFlag.c)
 *     RtlBeginReadTickLock @ 0x1400AB028 (RtlBeginReadTickLock.c)
 *     KiComputeCpuSetAffinity @ 0x1400AB03C (KiComputeCpuSetAffinity.c)
 *     KeSelectNodeForAffinity @ 0x140128DE0 (KeSelectNodeForAffinity.c)
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
          v11 = KeSelectNodeForAffinity(&v12);
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
