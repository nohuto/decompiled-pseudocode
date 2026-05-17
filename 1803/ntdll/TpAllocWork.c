/*
 * XREFs of TpAllocWork @ 0x180056F90
 * Callers:
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     sub_1800F7614 @ 0x1800F7614 (sub_1800F7614.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocWork(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  struct _PEB_LDR_DATA *v7; // r14
  int v8; // edi
  __int64 Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v15; // [rsp+88h] [rbp+20h]

  v5 = a3;
  v7 = Ldr;
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !Ldr || !a2 || (v8 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    *(_QWORD *)&v7->Length = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x200000) | 8u, 240LL);
    v10 = (_QWORD *)Heap;
    v15 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v11 = sub_1800247C8(Heap, v5, a4, v8, (__int64)off_180110190, (__int64)off_1801106A0);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        v13 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          sub_1800570C8(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, v15);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *(_QWORD *)&v7->Length = v10;
    return (unsigned int)v11;
  }
}
