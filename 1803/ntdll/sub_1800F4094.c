/*
 * XREFs of sub_1800F4094 @ 0x1800F4094
 * Callers:
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800F34C8 @ 0x1800F34C8 (sub_1800F34C8.c)
 */

_QWORD *__fastcall sub_1800F4094(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 **v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *result; // rax
  __int64 v14; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v17[1] = v17;
  v5 = 0;
  v17[0] = v17;
  do
  {
    v6 = v5 & 0xF;
    RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18015D7C8 + 8 * v6), a2, a3, a4);
    v7 = *(__int64 **)(qword_18015D720 + 16LL * v5);
    v8 = qword_18015D720 + 16LL * v5;
    if ( v7 != (__int64 *)v8 )
    {
      do
      {
        v9 = *v7;
        if ( v7[2] == a1 )
        {
          if ( *(__int64 **)(v9 + 8) != v7 || (v10 = (__int64 **)v7[1], *v10 != v7) )
            __fastfail(3u);
          *v10 = (__int64 *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          v11 = v17[0];
          if ( *(_QWORD **)(v17[0] + 8LL) != v17 )
            __fastfail(3u);
          *v7 = v17[0];
          v7[1] = (__int64)v17;
          *(_QWORD *)(v11 + 8) = v7;
          v17[0] = v7;
        }
        v7 = (__int64 *)v9;
      }
      while ( v9 != v8 );
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015D7C8 + 8 * v6));
    ++v5;
  }
  while ( v5 < 0x1EEF );
  while ( 1 )
  {
    v12 = v17[0];
    result = v17;
    if ( (_QWORD *)v17[0] == v17 )
      break;
    v14 = *(_QWORD *)v17[0];
    if ( *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0] || (v15 = *(_QWORD **)(v17[0] + 8LL), *v15 != v17[0]) )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *(_QWORD *)(v12 + 32);
    if ( v16 )
    {
      sub_1800F34C8(v16, a2, a3, a4);
      *(_QWORD *)(v12 + 32) = 0LL;
    }
    RtlFreeHeap(qword_18015D7E8, 0, v12);
  }
  return result;
}
