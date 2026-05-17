/*
 * XREFs of TpSimpleTryPost @ 0x18007DF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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
    sub_1801058B8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x200000) | 8u, 240LL);
    v9 = (_QWORD *)Heap;
    v14 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v10 = sub_1800179EC(Heap, v5, a3, v7, (__int64)off_180110730, (__int64)off_180110750);
      v12 = v10;
      if ( v10 >= 0 )
      {
        v10 = 0;
        v12 = 0;
        v9[10] = v6;
        if ( a3 )
          v9[4] = *(_QWORD *)(a3 + 48);
        if ( v9[2] )
          sub_180013D14(v9);
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x200000, v14);
      v9 = 0LL;
      v10 = v12;
    }
    if ( v10 >= 0 )
LABEL_15:
      sub_180016BD8((__int64)v9);
    return (unsigned int)v10;
  }
}
