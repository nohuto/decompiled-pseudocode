/*
 * XREFs of TpAllocWork @ 0x18000A070
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180036DB4 (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  unsigned int Flags; // edi
  _TP_WORK *Heap; // rax
  _TP_WORK *v10; // rbx
  NTSTATUS v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  _TP_WORK *BaseAddress; // [rsp+88h] [rbp+20h]

  v5 = (int)Context;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn || !Callback || (Flags & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    *WorkReturn = 0LL;
    Heap = (_TP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v11 = TppWorkInitialize(
              (_DWORD)Heap,
              v5,
              (_DWORD)CallbackEnviron,
              Flags,
              (__int64)&TppWorkpCleanupGroupMemberVFuncs,
              (__int64)&TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)v10 + 10) = Callback;
        v11 = 0;
        v13 = 0;
        if ( CallbackEnviron )
          *((_QWORD *)v10 + 4) = CallbackEnviron->FinalizationCallback;
        if ( *((_QWORD *)v10 + 2) )
          TppCleanupGroupAddMember(v10);
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *WorkReturn = v10;
    return v11;
  }
}
