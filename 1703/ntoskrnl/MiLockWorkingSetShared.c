/*
 * XREFs of MiLockWorkingSetShared @ 0x1400A7E80
 * Callers:
 *     MiLockProbePacketWorkingSet @ 0x14002A578 (MiLockProbePacketWorkingSet.c)
 *     MmQuerySystemWorkingSetInformation @ 0x140031018 (MmQuerySystemWorkingSetInformation.c)
 *     MmQueryCommitReleaseState @ 0x1400366C0 (MmQueryCommitReleaseState.c)
 *     MiGetWorkingSetInfoEx @ 0x140039718 (MiGetWorkingSetInfoEx.c)
 *     MiLeapPrefetch @ 0x14003A5C0 (MiLeapPrefetch.c)
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiLockProtoPage @ 0x140078790 (MiLockProtoPage.c)
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MmQueryWorkingSetInformation @ 0x1400851A0 (MmQueryWorkingSetInformation.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiQueryAddressSpan @ 0x1400D1790 (MiQueryAddressSpan.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiComparePteProtections @ 0x14017C710 (MiComparePteProtections.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiExceptionForMappedVa @ 0x14020CBC0 (MiExceptionForMappedVa.c)
 *     MmRemoveSystemCacheFromDump @ 0x14021359C (MmRemoveSystemCacheFromDump.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockWorkingSetShared(__int64 a1)
{
  LONG *v1; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v3; // ett
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 192) & 7) == 2 )
    v1 = &dword_14036D4C0;
  else
    v1 = (LONG *)(a1 + 200);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v1, CurrentIrql);
  }
  else
  {
    _m_prefetchw(v1);
    v3 = *v1 & 0x7FFFFFFF;
    if ( v3 != _InterlockedCompareExchange(v1, v3 + 1, v3) )
      ExpWaitForSpinLockSharedAndAcquire(v1, CurrentIrql);
  }
  result = CurrentIrql;
  if ( v1[1] )
    _InterlockedExchange(v1 + 1, 0);
  return result;
}
