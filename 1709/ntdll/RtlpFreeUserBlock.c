/*
 * XREFs of RtlpFreeUserBlock @ 0x180015054
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpFreeUserBlockToHeap @ 0x180015220 (RtlpFreeUserBlockToHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180101A7C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180101B24 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x180101BCC (RtlpLogHeapSubSegmentFreeCached.c)
 */

PSLIST_ENTRY __fastcall RtlpFreeUserBlock(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  volatile signed __int32 *v6; // rbx
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  _DWORD *SharedData; // rax
  __int64 v11; // rdi
  PSLIST_ENTRY result; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rcx
  PSLIST_ENTRY v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *a2;
  v6 = (volatile signed __int32 *)(a1 + 48 * (*((unsigned __int8 *)a2 + 16) - 5LL));
  if ( *(_WORD *)(v3 + 384) && (*(_BYTE *)(v3 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(v3 + 352));
    RtlLeaveCriticalSection(*(_QWORD *)(v3 + 352));
  }
  v7 = *(unsigned __int16 *)v6;
  if ( v7 <= *((_DWORD *)v6 + 5) || v7 <= *((_DWORD *)v6 + 4) >> *((_DWORD *)v6 + 6) )
  {
    v8 = 1LL << *((_BYTE *)a2 + 16);
    if ( v8 > 0xF0000 )
      v8 = 983040LL;
    v9 = v8 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v9);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v11 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v9, 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    result = (PSLIST_ENTRY)RtlpInterlockedPushEntrySList(v6, a2);
    ++*((_WORD *)v6 + 15);
  }
  else
  {
    v13 = 1LL << *((_BYTE *)a2 + 16);
    if ( v13 > 0xF0000 )
      v13 = 983040LL;
    v23 = v13 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), a2);
    result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v15, v14);
    v16 = 2147353472LL;
    if ( (_DWORD)result )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      v17 = (__int64)&result[9].Next[34].Next + 6;
    }
    else
    {
      v17 = 2147353472LL;
    }
    if ( *(_BYTE *)v17 )
    {
      result = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
        result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(
                                 *(_QWORD *)(a1 + 24),
                                 a2,
                                 v23,
                                 16LL * *(unsigned __int16 *)(v4 + 36));
    }
    _InterlockedDecrement(v6 + 4);
    if ( v7 )
    {
      result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v6);
      v18 = result;
      if ( result )
      {
        v19 = 1LL << LOBYTE(result[1].Next);
        if ( v19 > 0xF0000 )
          v19 = 983040LL;
        v20 = v19 + WORD1(result[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v20);
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), result);
        result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId(v22, v21);
        if ( (_DWORD)result )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          v16 = (__int64)&result[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v16 )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
            result = (PSLIST_ENTRY)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
          }
        }
        _InterlockedDecrement(v6 + 4);
      }
    }
  }
  return result;
}
