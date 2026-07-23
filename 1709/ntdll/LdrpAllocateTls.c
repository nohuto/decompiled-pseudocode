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
  unsigned int SizeOfBitMap; // r15d
  void **p_ThreadLocalStoragePointer; // rdi
  _DWORD *i; // rcx
  _DWORD *v5; // r14
  int v6; // ecx
  char v7; // al
  int v8; // r8d
  PVOID Heap; // rax
  _QWORD *v10; // rcx
  unsigned int j; // r14d
  PVOID *v13; // r8
  __int64 v14; // [rsp+58h] [rbp-70h]
  size_t Size; // [rsp+60h] [rbp-68h]
  int v16; // [rsp+D0h] [rbp+8h]
  _DWORD *v17; // [rsp+E8h] [rbp+20h]

  v0 = NtCurrentTeb();
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockShared(&LdrpTlsLock);
  SizeOfBitMap = LdrpTlsBitmap.SizeOfBitMap;
  if ( !LdrpTlsBitmap.SizeOfBitMap )
  {
    p_ThreadLocalStoragePointer = &v0->ThreadLocalStoragePointer;
LABEL_14:
    v0->ThreadLocalStoragePointer = p_ThreadLocalStoragePointer;
    _InterlockedIncrement(&LdrpActiveThreadCount);
    RtlReleaseSRWLockShared(&LdrpTlsLock);
    return 0LL;
  }
  p_ThreadLocalStoragePointer = (void **)LdrpGetNewTlsVector(LdrpTlsBitmap.SizeOfBitMap);
  if ( p_ThreadLocalStoragePointer )
  {
    for ( i = LdrpTlsList; i != (_DWORD *)&LdrpTlsList; i = v17 )
    {
      v5 = i;
      v17 = *(_DWORD **)i;
      v6 = (i[13] >> 20) & 0xF;
      Size = *((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2);
      v7 = v6 - 1;
      if ( !v6 )
        v7 = 0;
      v8 = 1 << v7;
      if ( (unsigned int)(1 << v7) < 0x10 )
        v8 = 16;
      v16 = v8 - 1;
      v14 = (unsigned int)(v8 - 1);
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 786432, v14 + *((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2) + 1LL);
      if ( !Heap )
      {
        RtlReleaseSRWLockShared(&LdrpTlsLock);
        for ( j = 0; j < SizeOfBitMap; ++j )
        {
          v13 = (PVOID *)p_ThreadLocalStoragePointer[j];
          if ( v13 )
            RtlFreeHeap(ProcessHeap, 0, *(v13 - 1));
        }
        RtlFreeHeap(ProcessHeap, 0, p_ThreadLocalStoragePointer - 2);
        return 3221225495LL;
      }
      v10 = (_QWORD *)(~v14 & ((unsigned __int64)Heap + (unsigned int)(v16 + 1)));
      *(v10 - 1) = Heap;
      p_ThreadLocalStoragePointer[v5[16]] = v10;
      memmove(v10, *((const void **)v5 + 2), Size);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          874,
          (unsigned int)"LdrpAllocateTls",
          2,
          "TlsVector %p Index %d : %d bytes copied from %p to %p\n",
          p_ThreadLocalStoragePointer,
          v5[16],
          v5[6] - v5[4],
          *((const void **)v5 + 2),
          p_ThreadLocalStoragePointer[v5[16]]);
    }
    goto LABEL_14;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  return 3221225495LL;
}
