/*
 * XREFs of ProcessorpSelectProcessorSet @ 0x1C008F620
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C008ED20 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorSet(__int16 a1, char a2, char a3, KAFFINITY *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax
  KAFFINITY GroupAffinity; // rdx
  __int64 *v13; // rax
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 **v16; // rdx
  int v17; // ecx
  int v18; // ecx
  ULONGLONG v19; // rdx

  if ( *(_BYTE *)a5 )
  {
    v6 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    if ( a2 )
    {
      v6 = ProcessorGroupListHead;
      v10 = *(_QWORD *)ProcessorGroupListHead;
      if ( *(__int64 **)(ProcessorGroupListHead + 8) != &ProcessorGroupListHead
        || *(_QWORD *)(v10 + 8) != ProcessorGroupListHead )
      {
        __fastfail(3u);
      }
      ProcessorGroupListHead = *(_QWORD *)ProcessorGroupListHead;
      *(_QWORD *)(v10 + 8) = &ProcessorGroupListHead;
      v9 = (__int64 *)qword_1C0066568;
      if ( *(__int64 **)qword_1C0066568 != &ProcessorGroupListHead )
        __fastfail(3u);
    }
    else
    {
      v6 = *(_QWORD *)ProcessorGroupByNumber;
      v7 = **(_QWORD **)ProcessorGroupByNumber;
      if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)ProcessorGroupByNumber || (v8 = *(_QWORD **)(v6 + 8), *v8 != v6) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = (__int64 *)qword_1C0066568;
      if ( *(__int64 **)qword_1C0066568 != &ProcessorGroupListHead )
        __fastfail(3u);
    }
    *(_QWORD *)v6 = &ProcessorGroupListHead;
    *(_QWORD *)(v6 + 8) = v9;
    *v9 = v6;
    qword_1C0066568 = v6;
  }
  if ( *(_DWORD *)(v6 + 36) == 1 || (unsigned __int16)(a1 - 1) <= 2u )
  {
    if ( a1 != 6 )
      goto LABEL_22;
  }
  else if ( a1 != 6 )
  {
    return 3221225485LL;
  }
  if ( a3 )
  {
    GroupAffinity = KeQueryGroupAffinity(*(_WORD *)(v6 + 32));
LABEL_21:
    a4[1] = 0LL;
    *((_WORD *)a4 + 4) = *(_WORD *)(v6 + 32);
    result = 0LL;
    *a4 = GroupAffinity;
    return result;
  }
LABEL_22:
  v13 = (__int64 *)(v6 + 16);
  v14 = *(__int64 **)(v6 + 16);
  if ( v14[1] != v6 + 16 || (v15 = *v14, *(__int64 **)(*v14 + 8) != v14) )
    __fastfail(3u);
  *v13 = v15;
  *(_QWORD *)(v15 + 8) = v13;
  v16 = *(__int64 ***)(v6 + 24);
  if ( *v16 != v13 )
    __fastfail(3u);
  *v14 = (__int64)v13;
  v14[1] = (__int64)v16;
  *v16 = v14;
  *(_QWORD *)(v6 + 24) = v14;
  if ( *(_DWORD *)(v6 + 36) == 1 || a1 == 2 )
  {
    v18 = *((_DWORD *)v14 + 8);
    v19 = v14[3];
    *(_DWORD *)(a5 + 8) = v18;
    if ( (v19 & ~(2 * (1LL << v18) - 1)) != 0 )
      v19 &= ~(2 * (1LL << v18) - 1);
    *((_DWORD *)v14 + 8) = RtlFindLeastSignificantBit(v19);
    v17 = *(_DWORD *)(a5 + 8);
    GroupAffinity = 1LL << v17;
  }
  else
  {
    v17 = *((_DWORD *)v14 + 4);
    GroupAffinity = v14[3];
    *(_DWORD *)(a5 + 8) = v17;
  }
  if ( !*(_BYTE *)a5 )
  {
    *(_DWORD *)(a5 + 4) = v17;
    *(_BYTE *)a5 = 1;
    *(_QWORD *)(a5 + 16) = v6;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a5 + 4) != v17 )
    goto LABEL_21;
  return 3221226021LL;
}
