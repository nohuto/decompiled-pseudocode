/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x14007ED60
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140006F84 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 *     MiZeroNodePages @ 0x14016FC80 (MiZeroNodePages.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     MiZeroBootLargePages @ 0x140185ED4 (MiZeroBootLargePages.c)
 *     KiConfigureSchedulingInformation @ 0x14047B818 (KiConfigureSchedulingInformation.c)
 *     ExpNodeCreateSystemThread @ 0x14052B848 (ExpNodeCreateSystemThread.c)
 *     ExProcessorCounterSetCallback @ 0x14052B910 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x14052C2C8 (ExpQueryNumaProcessorMap.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1406470E8 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x14064764C (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1406476EC (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  if ( Affinity )
  {
    Affinity->Mask = 0LL;
    *(_QWORD *)&Affinity->Group = 0LL;
  }
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v3 = KeNodeBlock[NodeNumber];
    if ( Affinity )
    {
      Affinity->Group = *(_WORD *)(v3 + 144);
      Affinity->Mask = *(_QWORD *)(v3 + 136);
    }
    if ( Count )
    {
      v4 = *(_QWORD *)(v3 + 136) - ((*(_QWORD *)(v3 + 136) >> 1) & 0x5555555555555555LL);
      *Count = (0x101010101010101LL
              * (((v4 & 0x3333333333333333LL)
                + ((v4 >> 2) & 0x3333333333333333LL)
                + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    }
  }
}
