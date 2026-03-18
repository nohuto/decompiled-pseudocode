/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x1405B62EC
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1405B3B70 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x1406F9EC0 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x140130618 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x1401313B8 (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x140138518 (PpmPerfCalculateQosClassPolicies.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140138A18 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmEventQosSupport @ 0x1405B6BDC (PpmEventQosSupport.c)
 */

LONG __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rbx
  char v3; // bp
  char v4; // di
  int v5; // r14d
  int *v6; // rdx
  unsigned int v7; // ecx
  char v8; // r8
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // eax
  bool v12; // cl
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = PpmPerfDomainHead;
  v3 = 0;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
  {
    if ( PpmPerfVmQosSupported )
    {
      v4 = 1;
      v14 = 0;
    }
    else
    {
      v4 = 0;
      v14 = 128;
    }
  }
  else
  {
    v14 = 0;
    v4 = 1;
    v5 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( !*(_BYTE *)(v1 + 468) )
      {
        v4 = 0;
        v6 = (int *)(v1 + 448);
        v7 = 0;
        v8 = 1;
        v9 = 2LL;
        do
        {
          v10 = *v6;
          v7 |= *v6++;
          v8 = (v10 & 2) != 0 ? v8 : 0;
          --v9;
        }
        while ( v9 );
        v11 = v7 & 0xFFFFFFFD;
        if ( v8 )
          v11 = v7;
        v5 |= v11;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v14 = v5;
  }
  v12 = PpmPerfUpdateQosDisableReasons(&v14) != 0;
  if ( v4 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v4;
    a1 = 1;
    v12 = 1;
  }
  if ( v12 )
    PpmEventQosSupport(0LL);
  if ( !v3 && !a1 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  PpmPerfSetAllDomainsToUpdate();
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
