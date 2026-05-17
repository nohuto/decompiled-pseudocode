/*
 * XREFs of TpAllocJobNotification @ 0x1800565C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 *     ZwSetInformationJobObject @ 0x18009DC90 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocJobNotification(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *p_Length; // r14
  void *Heap; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  _BYTE *v15; // rbp
  __int64 v16; // r15
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  p_Length = &Ldr->Length;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3407872, 296LL);
  v11 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  *(_QWORD *)(v11 + 248) = retaddr;
  v12 = sub_180024CB8(v11 + 72, a4, a5, v5, (__int64)off_180110660);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = *(_QWORD *)(v11 + 216);
  *(_QWORD *)(v11 + 152) = a3;
  v14 = (_DWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 272) = a2;
  v15 = (_BYTE *)(v11 + 68);
  *(_QWORD *)(v11 + 56) = sub_180054B20;
  if ( v13 )
  {
    sub_180024854(v13, (_DWORD *)(v11 + 64), (BYTE *)(v11 + 68));
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  v18[0] = v11;
  *(_QWORD *)v11 = off_1801106C0;
  *(_DWORD *)(v11 + 8) = *v14;
  *(_BYTE *)(v11 + 12) = *v15;
  v16 = *(_QWORD *)(v11 + 216);
  v18[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v18, 16LL);
  if ( v12 < 0 )
  {
    sub_180024608((_QWORD *)(v11 + 72));
    goto LABEL_21;
  }
  sub_180058E68(v16, 1LL);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 288) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    sub_1800570C8(v11 + 72);
  *p_Length = v11;
  return 0LL;
}
