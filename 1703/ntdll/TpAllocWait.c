/*
 * XREFs of TpAllocWait @ 0x180013DF0
 * Callers:
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     RtlRegisterWait @ 0x180012DA0 (RtlRegisterWait.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 * Callees:
 *     sub_18001425C @ 0x18001425C (sub_18001425C.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateWaitCompletionPacket @ 0x1800A6B10 (ZwCreateWaitCompletionPacket.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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
  char *v13; // rsi
  _DWORD *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)CallbackEnviron;
  v5 = (int)Context;
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    sub_1801058B8(WaitReturn, Callback);
    return -1073741811;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 1835008) | 8, 0x1D8uLL);
    if ( !Heap )
      return -1073741801;
    v9 = (HANDLE *)(Heap + 368);
    *((_QWORD *)Heap + 22) = retaddr;
    WaitCompletionPacket = ZwCreateWaitCompletionPacket((PHANDLE)Heap + 46, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (LOBYTE(v10) = 1,
          WaitCompletionPacket = sub_18001425C(
                                   (_DWORD)Heap,
                                   v10,
                                   v5,
                                   v4,
                                   (__int64)off_1801101F0,
                                   (__int64)&off_1801101A0),
          WaitCompletionPacket < 0) )
    {
      if ( *v9 )
        ZwClose(*v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 1835008, Heap);
    }
    else
    {
      v12 = *((_QWORD *)Heap + 18);
      *((_QWORD *)Heap + 56) = sub_180014570;
      v13 = Heap + 460;
      v14 = Heap + 456;
      if ( v12 )
      {
        sub_180017A78(v12, Heap + 456, Heap + 460);
      }
      else
      {
        *v14 = 0;
        *v13 = 0;
      }
      *((_QWORD *)Heap + 53) = 0LL;
      *((_QWORD *)Heap + 55) = Heap + 432;
      *((_QWORD *)Heap + 54) = Heap + 432;
      *((_QWORD *)Heap + 49) = off_1801101B0;
      *((_DWORD *)Heap + 100) = *v14;
      Heap[404] = *v13;
      *((_QWORD *)Heap + 10) = Callback;
      *v7 = (PTP_WAIT)Heap;
    }
    return WaitCompletionPacket;
  }
}
