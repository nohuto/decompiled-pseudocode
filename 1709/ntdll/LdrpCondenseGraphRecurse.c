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

void __fastcall LdrpCondenseGraphRecurse(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rsi
  int v4; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rsi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  unsigned int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _DWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = a2;
  ++*a2;
  v3 = (_QWORD *)(a1 + 64);
  v4 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 64) = *a3;
  v7 = *(_QWORD **)(a1 + 40);
  *a3 = a1 + 64;
  if ( v7 )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v7;
      v8 = v7[1];
      if ( *(int *)(v8 + 56) <= 5 )
        break;
LABEL_3:
      if ( v7 == *(_QWORD **)(a1 + 40) )
      {
        v3 = (_QWORD *)(a1 + 64);
        goto LABEL_5;
      }
    }
    v11 = *(_DWORD *)(v8 + 72);
    if ( v11 )
    {
      if ( !*(_QWORD *)(v8 + 64) )
      {
LABEL_16:
        if ( *(_DWORD *)(v8 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_3;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v7[1], a2, a3);
      v11 = *(_DWORD *)(v8 + 32);
      a2 = v14;
    }
    if ( *(_DWORD *)(a1 + 32) > v11 )
      *(_DWORD *)(a1 + 32) = v11;
    goto LABEL_16;
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 72) )
  {
    v9 = (_QWORD *)*a3;
    if ( *a3 )
      *a3 = *v9;
    v10 = 0LL;
    if ( v3 != v9 )
    {
      do
      {
        *v9 = v10;
        v10 = v9;
        v9 = (_QWORD *)*a3;
        if ( *a3 )
          *a3 = *v9;
      }
      while ( v3 != v9 );
      v14 = v10;
      if ( v10 )
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        LdrpMergeNodes(a1, &v14);
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v12 = v14;
        while ( v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          LdrpDestroyNode(v13 - 8);
        }
      }
    }
    *v3 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
}
