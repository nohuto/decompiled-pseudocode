/*
 * XREFs of PipAddRequestToEdge @ 0x1406BE7C0
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x1401FDAF0 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateNewDependencyEdge @ 0x1401FDB90 (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1406BEE64 (PipMergeDependencyEdgeList.c)
 * Callees:
 *     PipMergeDependencyTypes @ 0x1401FDEC4 (PipMergeDependencyTypes.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1404DF8A0 (RtlDuplicateUnicodeString.c)
 *     PipFreeBindingRequestEntry @ 0x1406BEDC0 (PipFreeBindingRequestEntry.c)
 */

_QWORD *__fastcall PipAddRequestToEdge(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rdi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r12
  int v10; // edx
  _QWORD *PoolWithTag; // rax
  int v12; // eax
  UNICODE_STRING *v13; // rax
  _QWORD *v14; // rax

  v2 = (_QWORD *)(a1 + 56);
  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  if ( v4 == (_QWORD *)(a1 + 56) )
  {
LABEL_12:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x53706E50u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return v3;
    *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)a2 + 4);
    v12 = *(_DWORD *)a2;
    *((_DWORD *)v3 + 4) = *(_DWORD *)a2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v13 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53706E50u);
        v3[3] = v13;
        if ( RtlDuplicateUnicodeString(0, a2[1], v13) < 0 )
        {
          PipFreeBindingRequestEntry(v3);
          return 0LL;
        }
      }
    }
    else
    {
      v3[3] = a2[1];
    }
    v14 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v14 != v2 )
      __fastfail(3u);
    *v3 = v2;
    v3[1] = v14;
    *v14 = v3;
    v2[1] = v3;
  }
  else
  {
    while ( !v5 )
    {
      v8 = v4;
      v9 = (unsigned __int64)v4;
      v4 = (_QWORD *)*v4;
      v10 = *((_DWORD *)v8 + 4);
      if ( v10 == *(_DWORD *)a2 )
      {
        if ( v10 )
        {
          if ( v10 == 1 )
            v5 = v9 & -(__int64)(RtlEqualUnicodeString((PCUNICODE_STRING)v8[3], a2[1], 0) != 0);
        }
        else if ( (PCUNICODE_STRING)v8[3] == a2[1] )
        {
          v5 = (__int64)v8;
        }
      }
      if ( v4 == v2 )
      {
        if ( !v5 )
          goto LABEL_12;
        break;
      }
    }
    *(_DWORD *)(v5 + 32) |= *((_DWORD *)a2 + 4);
  }
  if ( v5 )
    v3 = (_QWORD *)v5;
  if ( v3 )
    PipMergeDependencyTypes(a1, *((_DWORD *)a2 + 4));
  return v3;
}
