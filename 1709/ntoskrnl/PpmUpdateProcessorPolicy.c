/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x1405B5DF8
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmPerfReApplyStates @ 0x1406F9D48 (PpmPerfReApplyStates.c)
 * Callees:
 *     KeInitializeAffinityEx @ 0x140090170 (KeInitializeAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400FC680 (KeOrAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x14017CC18 (PpmUpdateTargetProcessorPolicy.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rdi
  unsigned int i; // esi
  unsigned __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v12[22]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = a2;
  LOWORD(v3) = PpmAllowedActions & *a1;
  v4 = PpmCurrentProfile + 2688LL * dword_1403661AC;
  LOWORD(v11[0]) = v3;
  if ( !a2 && (v11[0] & 0x800) != 0 )
  {
    LOWORD(v3) = 0;
    if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
    {
      v5 = __readmsr(0xDB0u);
      if ( *(_BYTE *)(v4 + 117) )
        v3 = v5 | 1;
      else
        v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0xDB0u, v3);
    }
  }
  v11[0] &= ~0x800u;
  if ( LOWORD(v11[0]) )
  {
    v6 = (unsigned int)(10000 * *(_DWORD *)(v4 + 60));
    PpmPerfTimeWindow = v6 <= KeMaximumIncrement ? 0 : (v6 - KeMaximumIncrement) / 0x2710;
    if ( !PpmPerfControlStartPolicyUpdate || (LODWORD(v3) = PpmPerfControlStartPolicyUpdate(), (v3 & 0x80000000) == 0LL) )
    {
      if ( v2 )
      {
        v7 = *(__int64 **)v2;
      }
      else
      {
        v2 = PpmPerfDomainHead;
        v7 = &PpmPerfDomainHead;
      }
      KeInitializeAffinityEx(v12);
      while ( (__int64 *)v2 != v7 )
      {
        KeOrAffinityEx((unsigned __int16 *)(v2 + 24), v12, v12);
        for ( i = 0; i < *(_DWORD *)(v2 + 200); ++i )
        {
          v9 = *(_QWORD *)(v2 + 208) + ((unsigned __int64)i << 7);
          if ( *(_BYTE *)(v9 + 16) )
            PpmUpdateTargetProcessorPolicy(v2, *(_QWORD *)(v9 + 8), v11, v4 + 40, 0LL);
        }
        v2 = *(_QWORD *)v2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v11,
        v4 + 40);
      LOWORD(v3) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(v3) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return v3;
}
