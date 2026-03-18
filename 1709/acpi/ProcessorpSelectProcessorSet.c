/*
 * XREFs of ProcessorpSelectProcessorSet @ 0x1C008B4BC
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0088400 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorSet(__int16 a1, char a2, char a3, KAFFINITY *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 **v13; // rdx
  KAFFINITY GroupAffinity; // rdx
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rdx
  int v18; // ecx
  ULONGLONG v19; // rdx
  ULONGLONG v20; // rcx

  if ( *(_BYTE *)a5 )
  {
    v6 = *(_QWORD *)(a5 + 16);
  }
  else
  {
    if ( a2 )
    {
      v6 = ProcessorGroupListHead;
      v17 = *(_QWORD *)ProcessorGroupListHead;
      if ( *(__int64 **)(ProcessorGroupListHead + 8) != &ProcessorGroupListHead
        || *(_QWORD *)(v17 + 8) != ProcessorGroupListHead )
      {
        __fastfail(3u);
      }
      ProcessorGroupListHead = *(_QWORD *)ProcessorGroupListHead;
      *(_QWORD *)(v17 + 8) = &ProcessorGroupListHead;
      v9 = (__int64 *)qword_1C00785A8;
      if ( *(__int64 **)qword_1C00785A8 != &ProcessorGroupListHead )
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
      v9 = (__int64 *)qword_1C00785A8;
      if ( *(__int64 **)qword_1C00785A8 != &ProcessorGroupListHead )
        __fastfail(3u);
    }
    *(_QWORD *)v6 = &ProcessorGroupListHead;
    *(_QWORD *)(v6 + 8) = v9;
    *v9 = v6;
    qword_1C00785A8 = v6;
  }
  if ( *(_DWORD *)(v6 + 36) != 1 && (unsigned __int16)(a1 - 1) > 2u )
  {
    if ( a1 != 6 )
      return 3221225485LL;
    goto LABEL_29;
  }
  if ( a1 == 6 )
  {
LABEL_29:
    if ( a3 )
    {
      GroupAffinity = KeQueryGroupAffinity(*(_WORD *)(v6 + 32));
      goto LABEL_18;
    }
  }
  v10 = (__int64 *)(v6 + 16);
  v11 = *(__int64 **)(v6 + 16);
  if ( v11[1] != v6 + 16 || (v12 = *v11, *(__int64 **)(*v11 + 8) != v11) )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  v13 = *(__int64 ***)(v6 + 24);
  if ( *v13 != v10 )
    __fastfail(3u);
  *v11 = (__int64)v10;
  v11[1] = (__int64)v13;
  *v13 = v11;
  *(_QWORD *)(v6 + 24) = v11;
  if ( *(_DWORD *)(v6 + 36) == 1 || a1 == 2 )
  {
    v18 = *((_DWORD *)v11 + 8);
    v19 = v11[3];
    *(_DWORD *)(a5 + 8) = v18;
    v20 = v19 & ~(2 * (1LL << v18) - 1);
    if ( !v20 )
      v20 = v19;
    *((_DWORD *)v11 + 8) = RtlFindLeastSignificantBit(v20);
    GroupAffinity = 1LL << *(_DWORD *)(a5 + 8);
  }
  else
  {
    GroupAffinity = v11[3];
    *(_DWORD *)(a5 + 8) = *((_DWORD *)v11 + 4);
  }
  v15 = *(_DWORD *)(a5 + 8);
  if ( !*(_BYTE *)a5 )
  {
    *(_DWORD *)(a5 + 4) = v15;
    *(_BYTE *)a5 = 1;
    *(_QWORD *)(a5 + 16) = v6;
LABEL_18:
    a4[1] = 0LL;
    *((_WORD *)a4 + 4) = *(_WORD *)(v6 + 32);
    result = 0LL;
    *a4 = GroupAffinity;
    return result;
  }
  if ( *(_DWORD *)(a5 + 4) != v15 )
    goto LABEL_18;
  return 3221226021LL;
}
