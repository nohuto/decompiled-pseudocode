/*
 * XREFs of PpmReapplyPerfPolicy @ 0x1405B5D08
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404DEB98 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14070664C (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140706950 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x140137E00 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x140138AB4 (PpmParkApplyPolicy.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmUpdateProcessorPolicy @ 0x1405B5DF8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1406F9E60 (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(LONG *a1)
{
  LONG *v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE *v6; // r9
  char v7; // si
  char v8; // di
  LONG result; // eax

  v1 = a1;
  if ( (*a1 & 0x3000) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x1000) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*v1 & 0x1000) != 0 || v2 )
      *v1 |= 0x400Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  if ( (*v1 & 4) != 0 )
    PpmParkApplyPolicy(v4, v3, v5, v6);
  if ( (*v1 & 0x10) != 0 )
    PpmPerfResizeHistoryAll();
  if ( (*v1 & 8) != 0 )
    PpmCheckReInit();
  v7 = 0;
  v8 = 1;
  if ( (*v1 & 2) != 0 )
  {
    v8 = 0;
    v7 = 1;
    PpmPerfUpdateDomainPolicy(0LL);
  }
  result = *v1;
  if ( (*v1 & 4) != 0 )
  {
    if ( v7 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v8 = 0;
    if ( (*v1 & 0x4000) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints();
  }
  if ( v8 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
