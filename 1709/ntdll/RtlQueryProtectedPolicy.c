/*
 * XREFs of RtlQueryProtectedPolicy @ 0x180075B20
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x180020260 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180075888 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     bsearch @ 0x1800935E0 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax

  v6 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock, a2, a3, a4);
    v8 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v8 )
    {
      v6 = 0;
      *(_QWORD *)a2 = v8[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v6;
}
