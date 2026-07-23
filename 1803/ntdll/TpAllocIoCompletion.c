/*
 * XREFs of TpAllocIoCompletion @ 0x180057380
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_18005756C @ 0x18005756C (sub_18005756C.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r12
  DWORD Flags; // edi
  PVOID Heap; // rax
  __int64 v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  _DWORD *v14; // r14
  _BYTE *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+8h]

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
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 0x40000) | 8, 0x120uLL);
    v11 = (__int64)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = sub_180024CB8((__int64)Heap, (__int64)Context, (__int64)CallbackEnviron, Flags, (__int64)&off_180110130);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = Callback;
        *(_QWORD *)(v11 + 272) = File;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = sub_1800254A0;
        v14 = (_DWORD *)(v11 + 264);
        v15 = (_BYTE *)(v11 + 268);
        if ( v13 )
        {
          sub_180024854(v13, (_DWORD *)(v11 + 264), (BYTE *)(v11 + 268));
        }
        else
        {
          *v14 = 0;
          *v15 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = off_1801106C0;
        *(_DWORD *)(v11 + 208) = *v14;
        *(_BYTE *)(v11 + 212) = *v15;
        v12 = sub_18005756C(File, v11 + 200, *(_QWORD *)(v11 + 144));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *(_QWORD *)(v11 + 32) = CallbackEnviron->FinalizationCallback;
          if ( *(_QWORD *)(v11 + 16) )
            sub_1800570C8(v11);
        }
        if ( v12 < 0 )
          sub_180024608((_QWORD *)v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    sub_1801086C8(IoReturn, File, Callback);
    return -1073741811;
  }
}
