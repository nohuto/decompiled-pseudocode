/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140120AD0
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x1400457F0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x140045820 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140045870 (PpmParkUnblockIdle.c)
 *     KiForwardTick @ 0x1400F2D20 (KiForwardTick.c)
 *     KeFlushProcessWriteBuffers @ 0x140120444 (KeFlushProcessWriteBuffers.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 *     KeSynchronizeAddressPolicy @ 0x14017BA00 (KeSynchronizeAddressPolicy.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 *     PpmIdleInitializeConcurrency @ 0x1405BFF64 (PpmIdleInitializeConcurrency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  unsigned __int16 v1; // ax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
