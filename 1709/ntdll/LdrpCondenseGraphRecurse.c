/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x180074AA8
 * Callers:
 *     LdrpCondenseGraph @ 0x180074A7C (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x180074AA8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x180074AA8 (LdrpCondenseGraphRecurse.c)
 *     LdrpDestroyNode @ 0x180074BE8 (LdrpDestroyNode.c)
 *     LdrpMergeNodes @ 0x180074C34 (LdrpMergeNodes.c)
 */

signed __int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, _DWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  int v5; // eax
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  signed __int64 result; // rax
  unsigned __int64 *v11; // rdx
  unsigned int v12; // eax
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  _DWORD *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  ++*a2;
  v4 = (unsigned __int64 *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v8 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v8 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v8;
      v9 = v8[1];
      if ( *(int *)(v9 + 56) <= 5 )
        break;
LABEL_3:
      if ( v8 == *(_QWORD **)(a1 + 40) )
      {
        v4 = (unsigned __int64 *)(a1 + 64);
        goto LABEL_5;
      }
    }
    v12 = *(_DWORD *)(v9 + 72);
    if ( v12 )
    {
      if ( !*(_QWORD *)(v9 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v9 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_3;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v8[1], a2, a3);
      v12 = *(_DWORD *)(v9 + 32);
      a2 = v15;
    }
    if ( *(_DWORD *)(a1 + 32) > v12 )
      *(_DWORD *)(a1 + 32) = v12;
    goto LABEL_16;
  }
LABEL_5:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v11 = (unsigned __int64 *)*a3;
    if ( *a3 )
      *a3 = *v11;
    result = 0LL;
    if ( v4 != v11 )
    {
      do
      {
        *v11 = result;
        result = (signed __int64)v11;
        v11 = (unsigned __int64 *)*a3;
        if ( *a3 )
          *a3 = *v11;
      }
      while ( v4 != v11 );
      v15 = (_DWORD *)result;
      if ( result )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)v11, a3, a4);
        LdrpMergeNodes(a1, &v15);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v13 = v15;
        while ( v13 )
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
          result = LdrpDestroyNode(v14 - 8);
        }
      }
    }
    *v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
