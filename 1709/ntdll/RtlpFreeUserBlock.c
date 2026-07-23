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

int __fastcall RtlpFreeUserBlock(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  _DWORD *SharedData; // rax
  __int64 v13; // rdi
  PSLIST_ENTRY v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rcx
  PSLIST_ENTRY v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 v22; // [rsp+50h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)a2;
  v8 = (volatile signed __int32 *)(a1 + 48 * (a2[16] - 5LL));
  if ( *(_WORD *)(v5 + 384) && (*(_BYTE *)(v5 + 112) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 352));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v5 + 352));
  }
  v9 = *(unsigned __int16 *)v8;
  if ( v9 <= *((_DWORD *)v8 + 5) || v9 <= *((_DWORD *)v8 + 4) >> *((_DWORD *)v8 + 6) )
  {
    v10 = 1LL << a2[16];
    if ( v10 > 0xF0000 )
      v10 = 983040LL;
    v11 = v10 + *((unsigned __int16 *)a2 + 9);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), v11);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentFreeCached(*(_QWORD *)(a1 + 24), a2, v11, 16LL * *(unsigned __int16 *)(v6 + 36));
    LODWORD(v14) = RtlpInterlockedPushEntrySList(v8, a2, v11, a4);
    ++*((_WORD *)v8 + 15);
  }
  else
  {
    v15 = 1LL << a2[16];
    if ( v15 > 0xF0000 )
      v15 = 983040LL;
    v22 = v15 + *((unsigned __int16 *)a2 + 9);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), a2);
    LODWORD(v14) = RtlGetCurrentServiceSessionId();
    v16 = 2147353472LL;
    if ( (_DWORD)v14 )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      v17 = (__int64)&v14[9].Next[34].Next + 6;
    }
    else
    {
      v17 = 2147353472LL;
    }
    if ( *(_BYTE *)v17 )
    {
      v14 = (PSLIST_ENTRY)NtCurrentPeb();
      if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
        LODWORD(v14) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), a2, v22, 16LL * *(unsigned __int16 *)(v6 + 36));
    }
    _InterlockedDecrement(v8 + 4);
    if ( v9 )
    {
      v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)v8);
      v18 = v14;
      if ( v14 )
      {
        v19 = 1LL << LOBYTE(v14[1].Next);
        if ( v19 > 0xF0000 )
          v19 = 983040LL;
        v20 = v19 + WORD1(v14[1].Next);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -(__int64)v20);
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v14);
        LODWORD(v14) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v14 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          v16 = (__int64)&v14[9].Next[34].Next + 6;
        }
        if ( *(_BYTE *)v16 )
        {
          v14 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v14[55].Next + 1) & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
            LODWORD(v14) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v18, v20, 0LL);
          }
        }
        _InterlockedDecrement(v8 + 4);
      }
    }
  }
  return (int)v14;
}
