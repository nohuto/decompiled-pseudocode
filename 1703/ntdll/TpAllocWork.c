/*
 * XREFs of TpAllocWork @ 0x1800147E0
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 * Callees:
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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

  v5 = a3;
  v7 = Ldr;
  if ( a4 )
    v8 = *(_DWORD *)(a4 + 56);
  else
    v8 = 0;
  if ( !Ldr || !a2 || (v8 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801058B8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    *(_QWORD *)&v7->Length = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x200000) | 8u, 240LL);
    v10 = (_QWORD *)Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v11 = sub_1800179EC(Heap, v5, a4, v8, (__int64)off_1801101D0, (__int64)off_180110250);
      v13 = v11;
      if ( v11 >= 0 )
      {
        v10[10] = a2;
        v11 = 0;
        v13 = 0;
        if ( a4 )
          v10[4] = *(_QWORD *)(a4 + 48);
        if ( v10[2] )
          sub_180013D14(v10);
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 0x200000));
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *(_QWORD *)&v7->Length = v10;
    return (unsigned int)v11;
  }
}
