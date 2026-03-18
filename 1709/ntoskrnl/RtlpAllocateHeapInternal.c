/*
 * XREFs of RtlpAllocateHeapInternal @ 0x14010DBDC
 * Callers:
 *     RtlAllocateHeap @ 0x14010DB70 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1402515C4 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x14010D190 (RtlFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlpAllocateHeapRaiseException @ 0x140253E60 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x14025410C (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapAllocateEvent @ 0x14025BB18 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpVsContextAllocate @ 0x14025CCEC (RtlpHpVsContextAllocate.c)
 */

char *__fastcall RtlpAllocateHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned __int64 v4; // rsi
  int v6; // r15d
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  int v10; // r14d
  __int64 v11; // r12
  char *Heap; // rbx
  int v13; // r9d
  int v15; // eax
  unsigned __int64 v16; // rcx
  char *v17; // rbp
  __int64 v18; // rax
  int v19; // eax
  char *v20; // rdx
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+20h]

  LOWORD(v22) = a4;
  v4 = a2;
  if ( HeapHandle[4] == -857879331 )
  {
    if ( a2 <= 0x20000 )
      return (char *)RtlpHpVsContextAllocate((ULONG_PTR)(HeapHandle + 16), (unsigned int)a2);
    else
      return 0LL;
  }
  v6 = HeapHandle[29] | a3;
  v7 = 0;
  v8 = 0LL;
  v22 = 0;
  v21 = 0LL;
  v9 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = 5;
    goto LABEL_16;
  }
  v10 = HeapHandle[36];
  if ( !v10 )
    goto LABEL_4;
  if ( (v6 & 0x3C000102) == 0 )
  {
    if ( (_WORD)v10 == 1 )
    {
      v15 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned __int64 *))RtlpInterceptorRoutines)(
              HeapHandle,
              0LL,
              1LL,
              &v21);
      v8 = v21;
    }
    else
    {
      v15 = -1073741823;
    }
    if ( v15 >= 0 )
    {
      v16 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 += v16 + 16;
      v21 = v16 + 16;
      goto LABEL_4;
    }
LABEL_16:
    Heap = 0LL;
LABEL_17:
    if ( (v6 & 4) != 0 )
    {
      if ( !v9 )
        v9 = v4;
      RtlpAllocateHeapRaiseException(v9);
    }
    goto LABEL_9;
  }
  v10 = 0;
LABEL_4:
  v11 = 1LL;
  if ( v4 )
    v11 = v4;
  v9 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = (char *)RtlpAllocateHeap((_DWORD)HeapHandle, v6 | 2u, v4, v9);
  if ( !Heap )
    goto LABEL_11;
  if ( v10 )
  {
    v4 -= v21;
    v17 = Heap;
    v18 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v6, (_DWORD)Heap, v13, v21, v10);
    Heap = (char *)v18;
    v19 = (_WORD)v10 == 1
        ? ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, char *))RtlpInterceptorRoutines)(
            HeapHandle,
            v18,
            2LL,
            v17)
        : -1073741823;
    if ( v19 < 0 )
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
      Heap = 0LL;
LABEL_11:
      v7 = v22;
      goto LABEL_17;
    }
  }
  v7 = v22;
LABEL_9:
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v7 != 5 )
  {
    if ( !Heap )
      goto LABEL_38;
    v20 = Heap - 16;
    _m_prefetchw(Heap - 16);
    if ( *(Heap - 1) == 5 )
      v20 -= 16 * (unsigned __int8)v20[14];
    if ( (((unsigned __int8)v20[10] ^ (unsigned __int8)(*((_BYTE *)HeapHandle + 138) & (HeapHandle[31] >> 17))) & 8) == 0 )
LABEL_38:
      RtlpLogHeapAllocateEvent(HeapHandle, Heap, v4, v7);
  }
  return Heap;
}
