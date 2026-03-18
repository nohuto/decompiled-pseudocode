/*
 * XREFs of PpmReapplyPerfPolicy @ 0x14063F630
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x140518648 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14076A578 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x14076A860 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14017F420 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x14017FB78 (PpmParkApplyPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x140612240 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1407612EC (PpmPerfResizeHistoryAll.c)
 */

void __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _BYTE *v6; // r9
  int v7; // eax
  char v8; // si
  char v9; // di

  v1 = a1;
  if ( (*a1 & 0x3000) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x1000) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v1 & 0x1000) != 0 || v2 )
      *(_DWORD *)v1 |= 0x400Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  v7 = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy(v4, v3, v5, v6);
    v7 = *(_DWORD *)v1;
  }
  if ( (v7 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v7 = *(_DWORD *)v1;
  }
  if ( (v7 & 8) != 0 )
  {
    PpmCheckReInit();
    v7 = *(_DWORD *)v1;
  }
  v8 = 0;
  v9 = 1;
  if ( (v7 & 2) != 0 )
  {
    v9 = 0;
    v8 = 1;
    PpmPerfUpdateDomainPolicy(0);
    v7 = *(_DWORD *)v1;
  }
  if ( (v7 & 4) != 0 )
  {
    if ( v8 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v7 = *(_DWORD *)v1;
    }
    v9 = 0;
    if ( (v7 & 0x4000) != 0 )
    {
      PpmCheckInitProcessors(1);
      return;
    }
    PpmCheckApplyParkConstraints();
  }
  if ( v9 )
    PpmReleaseLock(&PpmPerfPolicyLock);
}
