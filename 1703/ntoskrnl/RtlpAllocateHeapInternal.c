/*
 * XREFs of RtlpAllocateHeapInternal @ 0x14000F72C
 * Callers:
 *     RtlAllocateHeap @ 0x14000F6C0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x14023BD44 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x14000ECC0 (RtlFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlpAllocateHeapRaiseException @ 0x14023E048 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x14023E200 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapAllocateEvent @ 0x140244720 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpVsContextAllocate @ 0x140245810 (RtlpHpVsContextAllocate.c)
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
  char *v16; // rbp
  __int64 v17; // rax
  int v18; // eax
  char *v19; // rdx
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h]

  LOWORD(v21) = a4;
  v4 = a2;
  if ( HeapHandle[4] == -857879331 )
  {
    if ( a2 <= 0x20000 )
      return (char *)RtlpHpVsContextAllocate((ULONG_PTR)(HeapHandle + 26), (unsigned int)a2);
    else
      return 0LL;
  }
  v6 = HeapHandle[29] | a3;
  v7 = 0;
  v8 = 0LL;
  v21 = 0;
  v20 = 0LL;
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
      v15 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned __int64 *))CLFS_LSN_NULL_EXT)(
              HeapHandle,
              0LL,
              1LL,
              &v20);
      v8 = v20;
    }
    else
    {
      v15 = -1073741823;
    }
    if ( v15 >= 0 )
    {
      v20 = ((v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      v4 += v20;
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
    v4 -= v20;
    v16 = Heap;
    v17 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v6, (_DWORD)Heap, v13, v20, v10);
    Heap = (char *)v17;
    v18 = (_WORD)v10 == 1
        ? ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, char *))CLFS_LSN_NULL_EXT)(HeapHandle, v17, 2LL, v16)
        : -1073741823;
    if ( v18 < 0 )
    {
      RtlFreeHeap(HeapHandle, 0, Heap);
      Heap = 0LL;
LABEL_11:
      v7 = v21;
      goto LABEL_17;
    }
  }
  v7 = v21;
LABEL_9:
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v7 != 5 )
  {
    if ( !Heap )
      goto LABEL_38;
    v19 = Heap - 16;
    _m_prefetchw(Heap - 16);
    if ( *(Heap - 1) == 5 )
      v19 -= 16 * (unsigned __int8)v19[14];
    if ( (((unsigned __int8)v19[10] ^ (unsigned __int8)(*((_BYTE *)HeapHandle + 138) & (HeapHandle[31] >> 17))) & 8) == 0 )
LABEL_38:
      RtlpLogHeapAllocateEvent(HeapHandle, Heap, v4, v7);
  }
  return Heap;
}
