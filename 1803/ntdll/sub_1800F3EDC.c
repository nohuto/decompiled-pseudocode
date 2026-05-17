/*
 * XREFs of sub_1800F3EDC @ 0x1800F3EDC
 * Callers:
 *     sub_1800F39A0 @ 0x1800F39A0 (sub_1800F39A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800F38FC @ 0x1800F38FC (sub_1800F38FC.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 */

signed __int64 __fastcall sub_1800F3EDC(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax

  result = RtlAllocateHeap(qword_18015D7E8, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)sub_1800F38FC(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = sub_1800F41DC();
    v5[4] = v7;
    if ( v7 )
    {
      v11 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_18015D7C8 + 8 * v11), v8, v9, v10);
      v12 = qword_18015D720 + 16 * v6;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      *v5 = v13;
      v5[1] = v12;
      *(_QWORD *)(v13 + 8) = v5;
      *(_QWORD *)v12 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_18015D7C8 + 8 * v11));
    }
    else
    {
      return RtlFreeHeap(qword_18015D7E8, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
