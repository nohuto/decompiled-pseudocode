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

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  PTP_SIMPLE_CALLBACK v5; // r14
  DWORD Flags; // edi
  _QWORD *Heap; // rax
  _QWORD *v8; // rbx
  NTSTATUS v9; // edi
  int v11; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+18h]

  v4 = (int)Context;
  v5 = Callback;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (Callback = (PTP_SIMPLE_CALLBACK)NtCurrentPeb()->Ldr, *((_BYTE *)Callback + 72)) )
  {
    sub_1801058B8(Callback, Context);
    return -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x200000) | 8, 0xF0uLL);
    v8 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22] = retaddr;
      v9 = sub_1800179EC(
             (__int64)Heap,
             v4,
             (int)CallbackEnviron,
             Flags,
             (__int64)off_180110730,
             (__int64)&off_180110750);
      v11 = v9;
      if ( v9 >= 0 )
      {
        v9 = 0;
        v11 = 0;
        v8[10] = v5;
        if ( CallbackEnviron )
          v8[4] = CallbackEnviron->FinalizationCallback;
        if ( v8[2] )
          sub_180013D14((__int64)v8);
      }
    }
    else
    {
      v9 = -1073741801;
      v11 = -1073741801;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v8 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x200000, BaseAddress);
      v8 = 0LL;
      v9 = v11;
    }
    if ( v9 >= 0 )
LABEL_15:
      sub_180016BD8((__int64)v8);
    return v9;
  }
}
