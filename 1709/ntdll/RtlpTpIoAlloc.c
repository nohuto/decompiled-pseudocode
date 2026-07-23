/*
 * XREFs of RtlpTpIoAlloc @ 0x1800901F4
 * Callers:
 *     RtlpTpIoLookup @ 0x1800900AC (RtlpTpIoLookup.c)
 * Callees:
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x18001359C (TpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpTpIoAlloc(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  NTSTATUS v8; // ebx
  char *v9; // rsi
  _DWORD *v10; // r14
  volatile signed __int32 *v11; // rcx
  unsigned __int32 v13; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_7;
  }
  v8 = TppPoolpReferenceGlobalPool(
         (volatile signed __int32 **)&TppPoolpGlobalPool,
         (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock,
         &v14);
  v13 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = RtlpTpIoCallback;
    v9 = Heap + 76;
    v10 = Heap + 72;
    if ( v14 )
    {
      TppGetCurrentThreadNumaNode((__int64)v14, (_DWORD *)Heap + 18, (unsigned __int8 *)Heap + 76);
    }
    else
    {
      *v10 = 0;
      *v9 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = TppDirectTaskVFuncs;
    *((_DWORD *)Heap + 4) = *v10;
    Heap[20] = *v9;
    v11 = v14;
    *((_QWORD *)Heap + 10) = v14;
    v8 = TpBindFileToDirect(a3, (__int64)(Heap + 8), (__int64)v11);
    v13 = v8;
    if ( v8 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v8 = 0;
LABEL_7:
      v13 = v8;
    }
  }
  if ( v8 < 0 )
  {
    if ( v14 )
      TpDereferenceGlobalPool((PVOID)v14, v6);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v13;
    }
  }
  return (unsigned int)v8;
}
