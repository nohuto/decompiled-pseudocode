/*
 * XREFs of RtlpFindAndCommitPages @ 0x14028B32C
 * Callers:
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpCreateUCREntry @ 0x14028A9AC (RtlpCreateUCREntry.c)
 *     RtlpRemoveUCRBlock @ 0x14028C1C4 (RtlpRemoveUCRBlock.c)
 *     RtlpUpdateHeapRates @ 0x14028C564 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x14029364C (RtlpHeapHandleError.c)
 *     RtlpFindUCREntry @ 0x140293A64 (RtlpFindUCREntry.c)
 */

unsigned __int64 __fastcall RtlpFindAndCommitPages(__int64 a1, ULONG_PTR *a2)
{
  __int64 UCREntry; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  char v7; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v15; // edx
  unsigned __int64 v16; // r9
  ULONG_PTR v17; // rdx
  __int64 v18; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  UCREntry = RtlpFindUCREntry(a1, *a2);
  v5 = UCREntry;
  if ( UCREntry == a1 + 240 )
    return 0LL;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && *(_QWORD *)(UCREntry + 40) < *a2 )
  {
    DbgPrint("(UCRBlock->Size >= *Size)");
    RtlpHeapHandleError();
  }
  v6 = UCREntry - 16;
  v7 = 0;
  v8 = *(_BYTE *)(UCREntry - 16 + 14);
  if ( v8 )
    v9 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v8 << 16) + 0x10000;
  else
    v9 = a1;
  BaseAddress = *(PVOID *)(v5 + 32);
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
  {
    updated = ((__int64 (__fastcall *)(__int64, PVOID *, ULONG_PTR *))(RtlpHeapKey ^ *(_QWORD *)(a1 + 360)))(
                a1,
                &BaseAddress,
                a2);
  }
  else
  {
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 4u);
    updated = RtlpUpdateHeapRates(a1, 2LL);
  }
  if ( updated < 0 )
  {
    ++*(_DWORD *)(a1 + 600);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v15 = *(_DWORD *)(v6 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v6 + 8) = v15;
    v11 = HIWORD(v15);
    LOBYTE(v11) = v15 ^ BYTE1(v15) ^ BYTE2(v15);
    if ( HIBYTE(v15) != (_BYTE)v11 )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  *(_BYTE *)(v6 + 10) = 0;
  *(_BYTE *)(v6 + 15) = 0;
  RtlpRemoveUCRBlock(v11, v5, v12, v13);
  --*(_DWORD *)(v9 + 84);
  *(_DWORD *)(v9 + 80) -= *(_QWORD *)(v5 + 40) >> 12;
  *(_QWORD *)(a1 + 544) += *(_QWORD *)(v5 + 40);
  ++*(_DWORD *)(a1 + 576);
  --*(_DWORD *)(a1 + 572);
  v16 = *(_QWORD *)(v5 + 40);
  if ( v16 >= 0xFF000 )
  {
    *(_QWORD *)(a1 + 552) -= v16;
    v16 = *(_QWORD *)(v5 + 40);
  }
  v17 = *a2;
  if ( v16 > *a2 || v16 + *(_QWORD *)(v5 + 32) == *(_QWORD *)(v9 + 72) )
  {
    RtlpCreateUCREntry(a1, v9, *(_QWORD *)(v5 + 32) + v17 - 48, v16 - v17, v6, (__int64 *)a2);
    *a2 *= 16LL;
  }
  else
  {
    *a2 = v17 + 16LL * *(unsigned __int16 *)(v6 + 8);
  }
  *(_BYTE *)(v6 + 11) = 0;
  v18 = *(_QWORD *)(v9 + 40);
  if ( v18 != v9 )
  {
    if ( ((v6 - v9) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3, v18, v6, v9, 0LL);
    v7 = ((unsigned int)(v6 - v9) >> 16) + 1;
  }
  *(_BYTE *)(v6 + 14) = v7;
  return v6;
}
