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

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  PTP_WORK *v7; // r14
  DWORD Flags; // edi
  _TP_WORK *Heap; // rax
  _TP_WORK *v10; // rbx
  NTSTATUS v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  _TP_WORK *BaseAddress; // [rsp+88h] [rbp+20h]

  v5 = (int)Context;
  v7 = WorkReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn
    || !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (WorkReturn = (PTP_WORK *)NtCurrentPeb()->Ldr, *((_BYTE *)WorkReturn + 72)) )
  {
    sub_1801086C8(WorkReturn, Callback, Context);
    return -1073741811;
  }
  else
  {
    *v7 = 0LL;
    Heap = (_TP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x200000) | 8, 0xF0uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v11 = sub_1800247C8(
              (__int64)Heap,
              v5,
              (int)CallbackEnviron,
              Flags,
              (__int64)&off_180110190,
              (__int64)&off_1801106A0);
      v13 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)v10 + 10) = Callback;
        v11 = 0;
        v13 = 0;
        if ( CallbackEnviron )
          *((_QWORD *)v10 + 4) = CallbackEnviron->FinalizationCallback;
        if ( *((_QWORD *)v10 + 2) )
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x200000, BaseAddress);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *v7 = v10;
    return v11;
  }
}
