/*
 * XREFs of MmMapIoSpaceEx @ 0x14013A010
 * Callers:
 *     MmMapIoSpace @ 0x140139FD0 (MmMapIoSpace.c)
 *     BgpFwLibraryEnable @ 0x1401658A8 (BgpFwLibraryEnable.c)
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     WmipFirmwareTableHandler @ 0x1401842C0 (WmipFirmwareTableHandler.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14022768C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14022D040 (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x140231650 (BgkNotifyDisplayOwnershipLost.c)
 *     InbvPortInitialize @ 0x1402CAA98 (InbvPortInitialize.c)
 *     PopGetHwConfigurationSignature @ 0x140477654 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x14058A404 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140651BE4 (ExpGetSystemPlatformBinary.c)
 *     WmipFindSMBiosStructure @ 0x1407A2D14 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A2E58 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A2F4C (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1407A33F0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1407CAFD4 (WheapClearPoison.c)
 *     VerifierMmMapIoSpace @ 0x140831900 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140831A10 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
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
