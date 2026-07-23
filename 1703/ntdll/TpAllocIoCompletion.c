/*
 * XREFs of TpAllocIoCompletion @ 0x180010340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     sub_180013D14 @ 0x180013D14 (sub_180013D14.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
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
  DWORD Flags; // edi
  char *Heap; // rax
  char *v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  char *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char *BaseAddress; // [rsp+70h] [rbp+8h]

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
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = sub_180017B34((_DWORD)Heap, v5, (_DWORD)CallbackEnviron, Flags, (__int64)&off_180110210);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *((_QWORD *)v11 + 10) = Callback;
        *((_QWORD *)v11 + 34) = File;
        *((_DWORD *)v11 + 70) = 0;
        v13 = *((_QWORD *)v11 + 18);
        *((_QWORD *)v11 + 32) = sub_180016810;
        v14 = v11 + 268;
        v15 = v11 + 264;
        if ( v13 )
        {
          sub_180017A78(v13, v11 + 264, v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *((_QWORD *)v11 + 29) = 0LL;
        *((_QWORD *)v11 + 31) = v11 + 240;
        *((_QWORD *)v11 + 30) = v11 + 240;
        *((_QWORD *)v11 + 25) = off_1801101B0;
        *((_DWORD *)v11 + 52) = *v15;
        v11[212] = *v14;
        v12 = sub_1800102BC(File, (__int64)(v11 + 200), *((_QWORD *)v11 + 18));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *((_QWORD *)v11 + 4) = CallbackEnviron->FinalizationCallback;
          if ( *((_QWORD *)v11 + 2) )
            sub_180013D14(v11);
        }
        if ( v12 < 0 )
          sub_1800186FC(v11);
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 0x40000, BaseAddress);
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
    sub_1801058B8(IoReturn, File);
    return -1073741811;
  }
}
