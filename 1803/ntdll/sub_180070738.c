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

signed __int64 __fastcall sub_180070738(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  _QWORD **v9; // rcx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // r8
  _QWORD **v14; // rcx
  _QWORD *i; // rdx
  int v16; // eax
  _QWORD *v19; // rcx
  _QWORD **v20; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v7 = *(_QWORD *)(a2 + 152);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 != -1 )
    *(_DWORD *)(v7 + 24) = v8 + 1;
  *(_DWORD *)(v6 + 24) = 0;
  v9 = *(_QWORD ***)(v6 + 48);
  if ( v9 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      *(_QWORD *)(v6 + 48) = 0LL;
    else
      *v9 = (_QWORD *)*v10;
    sub_18001F5FC(a2);
    v11 = v10[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
    if ( (unsigned __int8)sub_180070974(v11, v7) )
    {
      v14 = *(_QWORD ***)(v11 + 40);
      for ( i = *v14; i != v13; i = (_QWORD *)*i )
        v14 = (_QWORD **)i;
      *v14 = (_QWORD *)*v13;
      if ( *(_QWORD **)(v11 + 40) == v13 )
      {
        v20 = 0LL;
        if ( v14 != v13 )
          v20 = v14;
        *(_QWORD *)(v11 + 40) = v20;
      }
      v16 = *(_DWORD *)(v7 + 24);
      if ( v16 != -1 )
        *(_DWORD *)(v7 + 24) = v16 - 1;
      RtlFreeHeap(qword_18015C288, 0, (unsigned __int64)v13);
      v13 = 0LL;
    }
    else
    {
      v13[1] = v7;
      v19 = *(_QWORD **)(v7 + 48);
      if ( v19 )
      {
        *v10 = *v19;
        *v19 = v10;
      }
      else
      {
        *v10 = v10;
      }
      *(_QWORD *)(v7 + 48) = v10;
    }
    if ( v12 && (*(int *)(v7 + 56) >= 2 || !v13) && (*(_DWORD *)(v12 + 100))-- == 1 )
    {
      *(_DWORD *)(v11 + 56) = 4;
      sub_1800709B0(v12);
    }
  }
  return RtlReleaseSRWLockExclusive(&qword_18015D070);
}
