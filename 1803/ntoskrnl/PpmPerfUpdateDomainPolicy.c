/*
 * XREFs of PpmPerfUpdateDomainPolicy @ 0x14061034C
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 *     PopPerfBoostPowerRequest @ 0x1406102F0 (PopPerfBoostPowerRequest.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PpmUpdatePerfStates @ 0x140761350 (PpmUpdatePerfStates.c)
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x14014CB34 (PpmCheckCustomRun.c)
 *     PpmPerfSetAllDomainsToUpdate @ 0x14014CE8C (PpmPerfSetAllDomainsToUpdate.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140163880 (PpmPerfUpdateQosDisableReasons.c)
 *     PpmPerfCalculateQosClassPolicies @ 0x14016A69C (PpmPerfCalculateQosClassPolicies.c)
 *     PpmEventQosSupport @ 0x14061049C (PpmEventQosSupport.c)
 */

void __fastcall PpmPerfUpdateDomainPolicy(char a1)
{
  __int64 v1; // rdi
  char v3; // r14
  char v4; // si
  int v5; // r15d
  int *v6; // r8
  unsigned int v7; // edx
  char v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  bool v13; // cl
  int v14; // eax
  int v15; // [rsp+58h] [rbp+10h] BYREF

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
    v15 = v14;
  }
  else
  {
    v15 = 0;
    v4 = 1;
    v5 = 0;
    do
    {
      if ( PpmPerfCalculateQosClassPolicies(v1) )
        v3 = 1;
      if ( !*(_BYTE *)(v1 + 516) )
      {
        v4 = 0;
        v6 = (int *)(v1 + 488);
        v7 = 0;
        v8 = 1;
        v9 = 3LL;
        do
        {
          v10 = *v6;
          v11 = *v6++;
          v7 |= v10;
          v8 = (v11 & 2) != 0 ? v8 : 0;
          --v9;
        }
        while ( v9 );
        v12 = v7 & 0xFFFFFFFD;
        if ( v8 )
          v12 = v7;
        v5 |= v12;
      }
      v1 = *(_QWORD *)v1;
    }
    while ( (__int64 *)v1 != &PpmPerfDomainHead );
    v15 = v5;
  }
  v13 = PpmPerfUpdateQosDisableReasons(&v15) != 0;
  if ( v4 != PpmPerfQosEnabled )
  {
    PpmPerfQosEnabled = v4;
    a1 = 1;
    v13 = 1;
  }
  if ( v13 )
    PpmEventQosSupport(0LL);
  if ( v3 || a1 )
  {
    PpmPerfSetAllDomainsToUpdate();
    PpmCheckCustomRun((a1 != 0) + 1);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
}
