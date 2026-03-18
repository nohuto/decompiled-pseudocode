/*
 * XREFs of MiLockWorkingSetShared @ 0x1400A63A0
 * Callers:
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MiMarkSharedImageCfgBits @ 0x1400A5EA0 (MiMarkSharedImageCfgBits.c)
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     MmQueryWorkingSetInformation @ 0x1400A66B4 (MmQueryWorkingSetInformation.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1400F4A18 (MmQuerySystemWorkingSetInformation.c)
 *     MiLeapPrefetch @ 0x14010A194 (MiLeapPrefetch.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x14010C430 (MiLockProtoPage.c)
 *     MiLockProbePacketWorkingSet @ 0x140125258 (MiLockProbePacketWorkingSet.c)
 *     MmQueryCommitReleaseState @ 0x14012B070 (MmQueryCommitReleaseState.c)
 *     MiComparePteProtections @ 0x14017BE48 (MiComparePteProtections.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 *     MiExceptionForMappedVa @ 0x140213B6C (MiExceptionForMappedVa.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021B580 (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall MiLockWorkingSetShared(__int64 a1)
{
  LONG *v1; // rbx
  KIRQL result; // al

  v1 = &dword_140389780;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v1 = (LONG *)(a1 + 200);
  result = ExAcquireSpinLockShared(v1);
  if ( v1[1] )
    _InterlockedExchange(v1 + 1, 0);
  return result;
}
