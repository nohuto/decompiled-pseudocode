/*
 * XREFs of HvlpHvToNtStatus @ 0x1401EA4A4
 * Callers:
 *     HvlpReadPerfRegister @ 0x14017B56C (HvlpReadPerfRegister.c)
 *     HvlpWritePerfRegister @ 0x14017B624 (HvlpWritePerfRegister.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401E6E50 (HvlHvDebuggerPowerHandler.c)
 *     HvlMapDeviceInterrupt @ 0x1401E7330 (HvlMapDeviceInterrupt.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401E79A0 (HvlRetargetDeviceInterrupt.c)
 *     HvlSvmAcknowledgePageRequest @ 0x1401E8060 (HvlSvmAcknowledgePageRequest.c)
 *     HvlSvmAttachPasidSpace @ 0x1401E8100 (HvlSvmAttachPasidSpace.c)
 *     HvlSvmClearPrqStalled @ 0x1401E81E0 (HvlSvmClearPrqStalled.c)
 *     HvlSvmCreatePasidSpace @ 0x1401E8240 (HvlSvmCreatePasidSpace.c)
 *     HvlSvmCreatePrQueue @ 0x1401E82C0 (HvlSvmCreatePrQueue.c)
 *     HvlSvmDeletePrQueue @ 0x1401E83C0 (HvlSvmDeletePrQueue.c)
 *     HvlSvmDetachPasidSpace @ 0x1401E8410 (HvlSvmDetachPasidSpace.c)
 *     HvlSvmDisablePasid @ 0x1401E8490 (HvlSvmDisablePasid.c)
 *     HvlSvmEnablePasid @ 0x1401E84E0 (HvlSvmEnablePasid.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401E8590 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmSetDeviceEnabled @ 0x1401E8860 (HvlSvmSetDeviceEnabled.c)
 *     HvlSvmSetPasidAddressSpace @ 0x1401E8900 (HvlSvmSetPasidAddressSpace.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401E8980 (HvlUnmapDeviceInterrupt.c)
 *     HvlpAttachRootSvmDevice @ 0x1401E8A20 (HvlpAttachRootSvmDevice.c)
 *     HvlpDetachRootSvmDevice @ 0x1401E8ADC (HvlpDetachRootSvmDevice.c)
 *     HvlpAddPhysicalMemory @ 0x140269B10 (HvlpAddPhysicalMemory.c)
 *     HvlNotifyPageHeat @ 0x140269C18 (HvlNotifyPageHeat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpHvToNtStatus(unsigned __int16 a1)
{
  switch ( a1 )
  {
    case 0u:
      return 0LL;
    case 0xBu:
    case 0x1Du:
      return 3221225626LL;
    case 0x59u:
      return 3473497LL;
  }
  return a1 | 0xC0350000;
}
