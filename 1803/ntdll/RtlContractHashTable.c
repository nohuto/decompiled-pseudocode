/*
 * XREFs of RtlContractHashTable @ 0x180081350
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_1800745EC @ 0x1800745EC (sub_1800745EC.c)
 */

char __fastcall RtlContractHashTable(__int64 a1)
{
  int v1; // edx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *j; // r8
  _QWORD *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // r8
  _QWORD *v16; // rsi
  __int64 v17; // rbx

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 128 || *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 )
  {
    v5 = v4 - 1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) >>= 1;
    v5 = *(_DWORD *)(a1 + 16);
  }
  *(_DWORD *)(a1 + 12) = v5;
  sub_1800745EC(a1, v1 - 1);
  v7 = (_QWORD *)sub_1800745EC(a1, *(_DWORD *)(a1 + 12));
  --*(_DWORD *)(a1 + 8);
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*v7 != v7 )
    --*(_DWORD *)(a1 + 24);
  for ( i = v7; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v6 = v10;
    *(_QWORD *)(v10 + 8) = v6;
    for ( j = (_QWORD *)*i; j != v7; j = (_QWORD *)*j )
    {
      if ( j[2] >= v9[2] )
        break;
      i = j;
    }
    v12 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v9 = v12;
    v9[1] = i;
    v12[1] = v9;
  }
  v13 = *(_DWORD *)(a1 + 8) + 128;
  _BitScanReverse(&v14, v13);
  v15 = v14 - 7;
  if ( 1 << v14 == v13 )
  {
    v16 = *(_QWORD **)(a1 + 32);
    v17 = (unsigned int)v15;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16[v15]);
    v16[v17] = 0LL;
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v16;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v16);
    }
  }
  return 1;
}
