/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x140034E10
 * Callers:
 *     KxFlushEntireTb @ 0x140034BE0 (KxFlushEntireTb.c)
 *     PpmParkUnblockIdle @ 0x140036A30 (PpmParkUnblockIdle.c)
 *     KxFlushMultipleTb @ 0x140037C30 (KxFlushMultipleTb.c)
 *     KxFlushNonGlobalTb @ 0x1400394C0 (KxFlushNonGlobalTb.c)
 *     KxFlushSingleTb @ 0x14003B08C (KxFlushSingleTb.c)
 *     KeSynchronizeAddressPolicy @ 0x1400A3DEC (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x1400A3F28 (KeFlushProcessWriteBuffers.c)
 *     KiCheckKeepAlive @ 0x1400BB894 (KiCheckKeepAlive.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorStates @ 0x14016B790 (PpmPerfApplyProcessorStates.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140247800 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140273CF8 (PpmUnlockProcessors.c)
 *     PnprQuiesceProcessors @ 0x140483D08 (PnprQuiesceProcessors.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407AB754 (EtwpGetMicroarchitecturalPmcAffinity.c)
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
