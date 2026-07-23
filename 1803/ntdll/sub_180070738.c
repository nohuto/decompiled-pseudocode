/*
 * XREFs of sub_180070738 @ 0x180070738
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_1800429E8 @ 0x1800429E8 (sub_1800429E8.c)
 *     sub_180070650 @ 0x180070650 (sub_180070650.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070974 @ 0x180070974 (sub_180070974.c)
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 */

void __fastcall sub_180070738(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // r8
  _QWORD **v12; // rcx
  _QWORD *i; // rdx
  int v14; // eax
  _QWORD *v16; // rcx
  _QWORD **v17; // rax

  RtlAcquireSRWLockExclusive(&stru_18015D070);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  v7 = *(_QWORD ***)(v4 + 48);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(v4 + 48) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    sub_18001F5FC((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( (unsigned __int8)sub_180070974(v9, v5) )
    {
      v12 = *(_QWORD ***)(v9 + 40);
      for ( i = *v12; i != v11; i = (_QWORD *)*i )
        v12 = (_QWORD **)i;
      *v12 = (_QWORD *)*v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        v17 = 0LL;
        if ( v12 != v11 )
          v17 = v12;
        *(_QWORD *)(v9 + 40) = v17;
      }
      v14 = *(_DWORD *)(v5 + 24);
      if ( v14 != -1 )
        *(_DWORD *)(v5 + 24) = v14 - 1;
      RtlFreeHeap(HeapHandle, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v16 = *(_QWORD **)(v5 + 48);
      if ( v16 )
      {
        *v8 = *v16;
        *v16 = v8;
      }
      else
      {
        *v8 = v8;
      }
      *(_QWORD *)(v5 + 48) = v8;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 100))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      sub_1800709B0(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D070);
}
