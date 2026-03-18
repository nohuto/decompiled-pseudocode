/*
 * XREFs of MmMapIoSpaceEx @ 0x1401243A0
 * Callers:
 *     MmMapIoSpace @ 0x1401234D0 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x140140494 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x140165E80 (WmipFirmwareTableHandler.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401E5790 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EAE7C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1401EEA20 (BgkNotifyDisplayOwnershipLost.c)
 *     InbvPortInitialize @ 0x14026AF34 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x14040BD00 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14055CA4C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405D2774 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x140707068 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407071AC (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407072A0 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x140707744 (WmipParseSysIdTable.c)
 *     VerifierMmMapIoSpace @ 0x140782050 (VerifierMmMapIoSpace.c)
 *     KiVerifyXcpt15 @ 0x1407DC2E0 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
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
