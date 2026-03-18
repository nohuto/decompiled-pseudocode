/*
 * XREFs of MmMapIoSpaceEx @ 0x1401199B0
 * Callers:
 *     MmMapIoSpace @ 0x14000CBC0 (MmMapIoSpace.c)
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 *     BgpFwLibraryEnable @ 0x14013E9AC (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x140158680 (WmipFirmwareTableHandler.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401EA5DC (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1401F0038 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401F4120 (BgkNotifyDisplayOwnershipLost.c)
 *     InbvPortInitialize @ 0x1402953A8 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x140433310 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x140570DF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405ED510 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x140740C54 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140740D98 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140740E8C (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x140741330 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x1407C43E0 (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r10
  __int64 v5; // r11

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, ProtectionMask, 0LL);
}
