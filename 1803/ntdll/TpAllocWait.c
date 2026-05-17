/*
 * XREFs of TpAllocWait @ 0x180058B10
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     sub_1800571C0 @ 0x1800571C0 (sub_1800571C0.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180058DCC @ 0x180058DCC (sub_180058DCC.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateWaitCompletionPacket @ 0x18009C310 (ZwCreateWaitCompletionPacket.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpAllocWait(struct _PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // r12d
  _QWORD *p_Length; // r15
  unsigned __int64 Heap; // rbx
  _QWORD *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  _BYTE *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  p_Length = &Ldr->Length;
  if ( !Ldr
    || !a2
    || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0
    || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_1801086C8(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (_QWORD *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = ZwCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = sub_180058DCC(Heap, v10, v5, v4, (__int64)off_180110150, (__int64)off_1801106D0),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          ZwClose(*v9);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 1835008, Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = sub_18002C670;
        v13 = (_DWORD *)(Heap + 456);
        v14 = (_BYTE *)(Heap + 460);
        if ( v12 )
        {
          sub_180024854(v12, (_DWORD *)(Heap + 456), (BYTE *)(Heap + 460));
        }
        else
        {
          *v13 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = off_1801106C0;
        *(_DWORD *)(Heap + 400) = *v13;
        *(_BYTE *)(Heap + 404) = *v14;
        *(_QWORD *)(Heap + 80) = a2;
        *p_Length = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
