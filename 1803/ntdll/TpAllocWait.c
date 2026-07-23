/*
 * XREFs of TpAllocWait @ 0x180058B10
 * Callers:
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     InitFn @ 0x1800571C0 (InitFn.c)
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

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // esi
  int v5; // r12d
  PTP_WAIT *v7; // r15
  char *Heap; // rbx
  HANDLE *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  char *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    sub_1801086C8(WaitReturn, Callback, Context);
    return -1073741811;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 1835008) | 8, 0x1D8uLL);
    if ( !Heap )
      return -1073741801;
    v9 = (HANDLE *)(Heap + 368);
    *((_QWORD *)Heap + 22) = retaddr;
    WaitCompletionPacket = ZwCreateWaitCompletionPacket((PHANDLE)Heap + 46, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (LOBYTE(v10) = 1,
          WaitCompletionPacket = sub_180058DCC(
                                   (_DWORD)Heap,
                                   v10,
                                   v5,
                                   v4,
                                   (__int64)off_180110150,
                                   (__int64)&off_1801106D0),
          WaitCompletionPacket < 0) )
    {
      if ( *v9 )
        ZwClose(*v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 1835008, Heap);
    }
    else
    {
      v12 = *((_QWORD *)Heap + 18);
      *((_QWORD *)Heap + 56) = sub_18002C670;
      v13 = Heap + 456;
      v14 = Heap + 460;
      if ( v12 )
      {
        sub_180024854(v12, (_DWORD *)Heap + 114, (BYTE *)Heap + 460);
      }
      else
      {
        *v13 = 0;
        *v14 = 0;
      }
      *((_QWORD *)Heap + 53) = 0LL;
      *((_QWORD *)Heap + 55) = Heap + 432;
      *((_QWORD *)Heap + 54) = Heap + 432;
      *((_QWORD *)Heap + 49) = off_1801106C0;
      *((_DWORD *)Heap + 100) = *v13;
      Heap[404] = *v14;
      *((_QWORD *)Heap + 10) = Callback;
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
