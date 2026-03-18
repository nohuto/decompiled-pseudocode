/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140080330
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140080DB0 (PnpSetDeviceAffinityThread.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 *     MiInitializePageZeroing @ 0x140158C2C (MiInitializePageZeroing.c)
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 *     KiConfigureSchedulingInformation @ 0x14041093C (KiConfigureSchedulingInformation.c)
 *     ExpWorkerHotAddProcessor @ 0x14041B120 (ExpWorkerHotAddProcessor.c)
 *     ExpQueryNumaProcessorMap @ 0x1404DA698 (ExpQueryNumaProcessorMap.c)
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     ExpCreateSystemThreadForNode @ 0x140567898 (ExpCreateSystemThreadForNode.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405C0ED0 (ExpWorkerThreadBalanceManager.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405DA5C8 (ExAllocatePrivateWorkerPool.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     ExpAllocatePoolForNode @ 0x14071EBE4 (ExpAllocatePoolForNode.c)
 *     ExpWorkerInitialization @ 0x14081E950 (ExpWorkerInitialization.c)
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
