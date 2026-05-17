/*
 * XREFs of sub_1800F3FB0 @ 0x1800F3FB0
 * Callers:
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800F34C8 @ 0x1800F34C8 (sub_1800F34C8.c)
 *     sub_1800F38FC @ 0x1800F38FC (sub_1800F38FC.c)
 */

signed __int64 __fastcall sub_1800F3FB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *i; // rcx
  signed __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx

  v4 = 0LL;
  v5 = 0;
  v6 = sub_1800F38FC(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18015D7C8 + 8 * v7), v9, v10, v11);
  v12 = 2 * v8;
  for ( i = *(_QWORD **)(qword_18015D720 + 8 * v12); i != (_QWORD *)(qword_18015D720 + 8 * v12); i = (_QWORD *)*i )
  {
    v4 = (unsigned __int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v19 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v20 = (_QWORD *)i[1], (_QWORD *)*v20 != i) )
        __fastfail(3u);
      *v20 = v19;
      v5 = 1;
      v19[1] = v20;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015D7C8 + 8 * v7));
  if ( v5 )
  {
    v18 = *(_QWORD *)(v4 + 32);
    if ( v18 )
    {
      sub_1800F34C8(v18, v15, v16, v17);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_18015D7E8, 0, v4);
  }
  return result;
}
