/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1405C019C
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140148550 (PpmPerfClearBootOverrides.c)
 *     PpmSetProfilePolicySetting @ 0x1404C13FC (PpmSetProfilePolicySetting.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405BF3A0 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1405CD9A8 (PpmEnableProfile.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405D5CC8 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1406C92D0 (PpmUpdatePerfStates.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406CEFD0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1406CF2D0 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmDisableProfile @ 0x1406D5B18 (PpmDisableProfile.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14015FC60 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401603FC (PpmPerfCalculateMinMaxStates.c)
 *     PpmParkApplyPolicy @ 0x1401604C8 (PpmParkApplyPolicy.c)
 *     PpmPerfUpdateDomains @ 0x140581950 (PpmPerfUpdateDomains.c)
 *     PpmUpdateProcessorPolicy @ 0x14058358C (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1405C0E1C (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _BYTE *v5; // r9
  char v6; // si
  char v7; // di
  LONG result; // eax
  __int64 *i; // r11
  __int64 **v10; // r11
  PVOID v11; // rcx

  PpmUpdateProcessorPolicy(a1, 0LL);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v11 = ExPageLockHandle;
    *(_DWORD *)a1 |= 0xEu;
    MiLockPagableImageSection((ULONG_PTR)v11, 1uLL);
    PopInitializeHeteroProcessors();
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    for ( i = (__int64 *)PpmPerfDomainHead; i != &PpmPerfDomainHead; i = *v10 )
      PpmPerfCalculateMinMaxStates((__int64)i);
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
    PpmParkApplyPolicy(v3, v2, v4, v5);
  if ( (*(_DWORD *)a1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*(_DWORD *)a1 & 8) != 0 )
    PpmCheckReInit();
  v6 = 0;
  v7 = 1;
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v7 = 0;
    v6 = 1;
    PpmPerfUpdateDomains(v3);
  }
  result = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    if ( v6 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v7 = 0;
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints();
  }
  if ( v7 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
