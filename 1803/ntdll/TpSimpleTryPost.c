/*
 * XREFs of TpSimpleTryPost @ 0x1800562E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpSimpleTryPost(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  struct _PEB_LDR_DATA *v6; // r14
  int v7; // edi
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  int v12; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v14; // [rsp+70h] [rbp+18h]

  v5 = a2;
  v6 = Ldr;
  if ( a3 )
    v7 = *(_DWORD *)(a3 + 56);
  else
    v7 = 0;
  if ( !Ldr || (v7 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x200000) | 8u, 240LL);
    v9 = (_QWORD *)Heap;
    v14 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v10 = sub_1800247C8(Heap, v5, a3, v7, (__int64)off_180110630, (__int64)off_180110650);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v10 = 0;
        v12 = 0;
        v9[10] = v6;
        if ( a3 )
          v9[4] = *(_QWORD *)(a3 + 48);
        if ( v9[2] )
          sub_1800570C8(v9);
      }
    }
    else
    {
      v10 = -1073741801;
      v12 = -1073741801;
    }
    if ( v10 >= 0 )
      goto LABEL_15;
    if ( v9 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, v14);
      v9 = 0LL;
      v10 = v12;
    }
    if ( v10 >= 0 )
LABEL_15:
      sub_180026040((__int64)v9);
    return (unsigned int)v10;
  }
}
