/*
 * XREFs of LdrpAllocateTls @ 0x18001C850
 * Callers:
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     LdrpGetNewTlsVector @ 0x18001CA1C (LdrpGetNewTlsVector.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

__int64 LdrpAllocateTls()
{
  struct _TEB *v0; // r13
  void *ProcessHeap; // r12
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r15d
  __int64 v5; // rdx
  void **p_ThreadLocalStoragePointer; // rdi
  _DWORD *i; // rcx
  _DWORD *v8; // r14
  int v9; // ecx
  char v10; // al
  int v11; // r8d
  __int64 Heap; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  unsigned int j; // r14d
  _QWORD *v17; // r8
  __int64 v18; // [rsp+58h] [rbp-70h]
  size_t Size; // [rsp+60h] [rbp-68h]
  int v20; // [rsp+D0h] [rbp+8h]
  _DWORD *v21; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  v4 = LdrpTlsBitmap;
  if ( !LdrpTlsBitmap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_14:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock, v2, v3);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector((unsigned int)LdrpTlsBitmap);
  if ( p_ThreadLocalStoragePointer )
  {
    for ( i = LdrpTlsList; ; i = v21 )
    {
      v2 = 16LL;
      if ( i == (_DWORD *)&LdrpTlsList )
        break;
      v8 = i;
      v21 = *(_DWORD **)i;
      v9 = (i[13] >> 20) & 0xF;
      Size = *((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2);
      v10 = v9 - 1;
      if ( !v9 )
        v10 = 0;
      v11 = 1 << v10;
      if ( (unsigned int)(1 << v10) < 0x10 )
        v11 = 16;
      v20 = v11 - 1;
      v18 = (unsigned int)(v11 - 1);
      Heap = RtlAllocateHeap(
               ProcessHeap,
               (unsigned int)(NtdllBaseTag + 786432),
               v18 + *((_QWORD *)v8 + 3) - *((_QWORD *)v8 + 2) + 1LL);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock, 0LL, v13);
        for ( j = 0; j < v4; ++j )
        {
          v17 = p_ThreadLocalStoragePointer[j];
          if ( v17 )
            RtlFreeHeap(ProcessHeap, 0LL, *(v17 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0LL, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v14 = (_QWORD *)(~v18 & (Heap + (unsigned int)(v20 + 1)));
      *(v14 - 1) = Heap;
      p_ThreadLocalStoragePointer[v8[16]] = v14;
      memmove(v14, *((const void **)v8 + 2), Size);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          v8[16],
          v8[6] - v8[4],
          *((const void **)v8 + 2),
          p_ThreadLocalStoragePointer[v8[16]]);
    }
    goto LABEL_14;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock, v5, v3);
  return 3221225495LL;
}
