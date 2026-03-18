/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14005B700
 * Callers:
 *     KxFlushNonGlobalTb @ 0x14005B3D0 (KxFlushNonGlobalTb.c)
 *     PpmParkUnblockIdle @ 0x14008F760 (PpmParkUnblockIdle.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x1400CA228 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1400D3028 (KeFlushProcessWriteBuffers.c)
 *     KiCheckKeepAlive @ 0x14011C7A8 (KiCheckKeepAlive.c)
 *     KxFlushEntireTb @ 0x140143A74 (KxFlushEntireTb.c)
 *     PpmPerfApplyProcessorStates @ 0x14014D300 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x14017B194 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140209BCC (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x14023C714 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
