/*
 * XREFs of TpAllocIoCompletion @ 0x18000A960
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupAddMember @ 0x18000A1B0 (TppCleanupGroupAddMember.c)
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     TppCleanupGroupMemberDestroy @ 0x180035EC8 (TppCleanupGroupMemberDestroy.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r15d
  PTP_IO *v8; // r13
  unsigned int Flags; // edi
  PVOID Heap; // rax
  __int64 v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+8h]

  v5 = (int)Context;
  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = (__int64)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (_DWORD)Heap,
              v5,
              (_DWORD)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = Callback;
        *(_QWORD *)(v11 + 272) = File;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_BYTE *)(v11 + 268);
        v15 = (_DWORD *)(v11 + 264);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, v11 + 264, v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v15;
        *(_BYTE *)(v11 + 212) = *v14;
        v12 = TpBindFileToDirect(File, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *(_QWORD *)(v11 + 32) = CallbackEnviron->FinalizationCallback;
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_23;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_23:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn, File);
    return -1073741811;
  }
}
