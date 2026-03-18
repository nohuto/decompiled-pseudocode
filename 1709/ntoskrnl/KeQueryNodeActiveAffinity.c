/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1400FC870
 * Callers:
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1400FBE04 (PnpSetDeviceAffinityThread.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401370F0 (MiZeroNodePages.c)
 *     PpmParkRegisterParking @ 0x140137E1C (PpmParkRegisterParking.c)
 *     MiZeroBootLargePages @ 0x14015A634 (MiZeroBootLargePages.c)
 *     KiConfigureSchedulingInformation @ 0x14042516C (KiConfigureSchedulingInformation.c)
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 *     ExpQueryNumaProcessorMap @ 0x1405533C0 (ExpQueryNumaProcessorMap.c)
 *     ExpNodeCreateSystemThread @ 0x140554884 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     ExpPartitionStart @ 0x1405DDBA0 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1405DDF98 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x1405DE038 (ExpWorkQueueManagerInitialize.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
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
