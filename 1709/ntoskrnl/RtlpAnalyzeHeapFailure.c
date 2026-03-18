/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x14025B284
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x14010D830 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x14010E9A0 (RtlpFindAndCommitPages.c)
 *     RtlpPopulateListIndex @ 0x14014EF48 (RtlpPopulateListIndex.c)
 *     RtlpSetupExtendedBlock @ 0x14025410C (RtlpSetupExtendedBlock.c)
 *     RtlZeroHeap @ 0x1407235F0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x140253ED0 (RtlpHeapExceptionFilter.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // edi
  unsigned __int8 v7; // al
  char v8; // al
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD **v12; // rdx
  _QWORD **v13; // rax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  ULONG_PTR v16; // rax
  int v17; // ecx
  __int16 v18; // dx
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 124);
  if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v5 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v5 = 1;
  v7 = *(_BYTE *)(a2 + 14);
  if ( v7 )
  {
    v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v7) << 16);
    v22 = v4;
  }
  else
  {
    v4 = a1;
    v22 = a1;
  }
  if ( *(_DWORD *)(v4 + 16) != -1114130 )
    goto LABEL_33;
  v8 = *(_BYTE *)(a2 + 15);
  if ( v8 != 4 )
  {
    v5 = 2;
    if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
      goto LABEL_33;
  }
  v5 = 3;
  if ( v8 == 3 )
  {
    v9 = a2 + 16;
    v10 = *(_QWORD *)(v9 + 32);
    if ( (v10 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v10 < *(_QWORD *)(v4 + 48) )
      goto LABEL_33;
    if ( *(_QWORD *)(v9 + 40) + v10 > *(_QWORD *)(v4 + 72) )
      goto LABEL_33;
    v5 = 4;
    v11 = **(_QWORD **)(v9 + 8);
    if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      goto LABEL_33;
    if ( v11 != v9 )
      goto LABEL_33;
    v5 = 5;
    v12 = (_QWORD **)(v9 + 16);
    v13 = (_QWORD **)*v12[1];
    if ( v13 != (_QWORD **)(*v12)[1] || v13 != v12 )
      goto LABEL_33;
  }
  else
  {
    v5 = 6;
    if ( (*(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12) ^ *(_WORD *)(a1 + 140)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v5 = 7;
  v14 = *(_WORD *)(a1 + 140);
  v15 = *(_WORD *)(a2 + 12);
  if ( v14 == v15 )
    goto LABEL_29;
  v16 = a2 - 16 * (v14 ^ (unsigned __int64)v15);
  if ( v6 )
  {
    v17 = *(_DWORD *)(v16 + 8);
    LOWORD(v23) = v17;
    if ( (v17 & *(_DWORD *)(a1 + 124)) != 0 )
      v23 = v17 ^ *(_DWORD *)(a1 + 136);
    v18 = v23;
    v4 = v22;
    v5 = 7;
  }
  else
  {
    v18 = *(_WORD *)(v16 + 8);
  }
  if ( v18 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
  {
LABEL_29:
    v5 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v19 = **(_QWORD **)(a2 + 24), v19 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v19 == a2 + 16 )
    {
      v5 = 9;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v5 > 5 )
  {
    if ( v5 <= 7 )
      goto LABEL_47;
    if ( v5 == 8 )
    {
      v20 = 8LL;
      v21 = 12;
      goto LABEL_49;
    }
    if ( v5 == 10 )
      goto LABEL_47;
    v21 = 2;
LABEL_48:
    v20 = v5;
    goto LABEL_49;
  }
  if ( v5 >= 4 )
  {
    v21 = 13;
    goto LABEL_48;
  }
  if ( v5 <= 1 )
  {
LABEL_47:
    v21 = 3;
    goto LABEL_48;
  }
  if ( v5 == 2 )
  {
    v20 = *(_QWORD *)(v4 + 40);
    v21 = 11;
  }
  else
  {
    v20 = 3LL;
    v21 = 0;
  }
LABEL_49:
  RtlpLogHeapFailure(v21, a1, a2, v20, 0LL);
}
