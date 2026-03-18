/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1400D9440
 * Callers:
 *     KiCheckKeepAlive @ 0x140027E18 (KiCheckKeepAlive.c)
 *     PpmParkUnblockIdle @ 0x140045870 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x140063D58 (KxFlushNonGlobalTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     KxFlushSingleTb @ 0x14010DF88 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 *     KxFlushEntireTb @ 0x1401590F4 (KxFlushEntireTb.c)
 *     KeSynchronizeAddressPolicy @ 0x14017BA00 (KeSynchronizeAddressPolicy.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402038C8 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140229858 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x140418140 (PnprQuiesceProcessors.c)
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
