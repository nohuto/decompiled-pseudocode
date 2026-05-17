/*
 * XREFs of RtlpExtendHeap @ 0x1800472B8
 * Callers:
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1800FFB38 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  int HeapProtection; // r15d
  int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // r9
  char v19; // al
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+40h] [rbp-10h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v31 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v31);
  if ( v5 )
  {
    v31 >>= 4;
    v6 = RtlpCoalesceFreeBlocks(a1, v5, &v31, 0);
    RtlpInsertFreeBlock(a1, v6, v31);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v6);
    }
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
    goto LABEL_36;
  v29 = 0LL;
  v8 = a2 + 0x2000;
  v9 = *(_QWORD *)(a1 + 160);
  if ( a2 + 0x2000 > v9 )
    v9 = a2 + 0x2000;
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v10 = *(_QWORD *)(a1 + 376);
  else
    v10 = 0LL;
  if ( !v10 && v9 >= 0x3F4000 )
    *(_DWORD *)(a1 + 120) |= 0x20000000u;
  v11 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  if ( v11 >= 0xFD0000 )
    v11 = 16580608LL;
  v30 = v11;
  HeapProtection = RtlpGetHeapProtection(a1, 1LL);
  v13 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v30, 0x2000, HeapProtection);
  if ( v13 < 0 )
  {
    while ( 1 )
    {
      v14 = v30;
      if ( v30 == v8 )
        break;
      v26 = v30 >> 1;
      if ( v30 >> 1 < v8 )
        v26 = a2 + 0x2000;
      v30 = v26;
      v13 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v30, 0x2000, HeapProtection);
      if ( v13 >= 0 )
      {
        v14 = v30;
        break;
      }
    }
    if ( v13 < 0 )
    {
      ++*(_DWORD *)(a1 + 600);
      goto LABEL_36;
    }
  }
  else
  {
    v14 = v30;
  }
  *(_QWORD *)(a1 + 160) += v14;
  v15 = *(_QWORD *)(a1 + 168);
  if ( a2 + 4096 > v15 )
    v15 = a2 + 4096;
  v28 = (v15 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v17 = ZwAllocateVirtualMemory(-1LL, &v29, 0LL, &v28, 4096, HeapProtection);
  if ( v17 >= 0 )
  {
    v19 = RtlpInitializeHeapSegment(a1, v29, 112LL, v18, 2, v29, v29 + v28, v29 + v30 - 4096);
    v16 = 3221225495LL;
    if ( !v19 )
      v17 = -1073741801;
    if ( v17 >= 0 )
    {
      v20 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v21 = 2147353472LL;
      if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapCommit(a1, v29, v28, 4LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v20 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v29 + 64), v28, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v20);
      }
      v22 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v23 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v23 = 2147353482LL;
      if ( *(_BYTE *)v23 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v22 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v29 + 64), v28, 16 * *(_QWORD *)(a1 + 192), *(unsigned __int8 *)v22);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v24 = (__int64)NtCurrentPeb()->SharedData + 558;
      else
        v24 = 2147353480LL;
      if ( *(_BYTE *)v24 )
        RtlpHeapLogRangeReserve(a1, v29, v30);
      v25 = *(_QWORD *)(v29 + 64);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v25 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v25 + 11) != (*(_BYTE *)(v25 + 8) ^ (unsigned __int8)(*(_BYTE *)(v25 + 9) ^ *(_BYTE *)(v25 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v25);
      }
      return *(_QWORD *)(v29 + 64);
    }
  }
  RtlpSecMemFreeVirtualMemory(v16, &v29, &v30, 0x8000LL);
LABEL_36:
  if ( *(char *)(a1 + 112) < 0 )
  {
    v27 = RtlpCoalesceHeap(a1);
    v4 = (_BYTE *)v27;
    if ( v27 )
    {
      if ( *(unsigned __int16 *)(v27 + 8) >= a2 )
        return v27;
    }
  }
  v6 = 0LL;
  if ( v4 && *(_DWORD *)(a1 + 124) )
  {
    v4[11] = v4[8] ^ v4[9] ^ v4[10];
    *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  return v6;
}
