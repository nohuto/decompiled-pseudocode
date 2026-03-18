/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140612240
 * Callers:
 *     PpmPerfReApplyStates @ 0x1405EA8BC (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeInitializeAffinityEx @ 0x140034450 (KeInitializeAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x140038E58 (PopExecuteOnTargetProcessors.c)
 *     KeOrAffinityEx @ 0x1400D3780 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x1401A6A48 (PpmUpdateTargetProcessorPolicy.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

signed int __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rbp
  int v4; // eax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  signed int result; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rdi
  unsigned int i; // esi
  __int64 v12; // rdx
  _DWORD v13[4]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int16 v14[88]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = a2;
  v3 = &PpmCurrentProfile[336 * dword_1403AAA2C];
  LOWORD(v13[0]) = PpmAllowedActions & *a1;
  if ( a2 )
  {
LABEL_8:
    v4 = v13[0];
    goto LABEL_9;
  }
  v4 = v13[0];
  if ( (v13[0] & 0x800) != 0 )
  {
    if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
    {
      v5 = __readmsr(0xDB0u);
      if ( *((_BYTE *)v3 + 117) )
        v6 = v5 | 1;
      else
        v6 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0xDB0u, v6);
    }
    goto LABEL_8;
  }
LABEL_9:
  result = v4 & 0xFFFFF7FF;
  v13[0] = result;
  if ( (_WORD)result )
  {
    v8 = (unsigned int)(10000 * *((_DWORD *)v3 + 15));
    if ( v8 <= KeMaximumIncrement )
      LODWORD(v9) = 0;
    else
      v9 = (v8 - KeMaximumIncrement) / 0x2710;
    PpmPerfTimeWindow = v9;
    if ( !PpmPerfControlStartPolicyUpdate || (result = PpmPerfControlStartPolicyUpdate(), result >= 0) )
    {
      if ( v2 )
      {
        v10 = *(__int64 **)v2;
      }
      else
      {
        v2 = PpmPerfDomainHead;
        v10 = &PpmPerfDomainHead;
      }
      KeInitializeAffinityEx(v14);
      while ( (__int64 *)v2 != v10 )
      {
        KeOrAffinityEx((unsigned __int16 *)(v2 + 24), v14, v14);
        for ( i = 0; i < *(_DWORD *)(v2 + 200); ++i )
        {
          v12 = *(_QWORD *)(v2 + 208) + 136LL * i;
          if ( *(_BYTE *)(v12 + 16) )
            PpmUpdateTargetProcessorPolicy(v2, *(_QWORD *)(v12 + 8), v13, (__int64)(v3 + 5), 0LL);
        }
        v2 = *(_QWORD *)v2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v13,
        (__int64)(v3 + 5));
      result = (int)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        return PpmPerfControlCompletePolicyUpdate();
    }
  }
  return result;
}
