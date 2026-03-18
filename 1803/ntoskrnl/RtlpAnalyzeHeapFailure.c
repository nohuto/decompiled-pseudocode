/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x140293310
 * Callers:
 *     RtlpAllocateHeap @ 0x1402894E0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140289EB0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14028B32C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14028B55C (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14028C248 (RtlpSetupExtendedBlock.c)
 *     RtlpPopulateListIndex @ 0x140293EC8 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x140786EC0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r8d
  int v5; // r15d
  int v6; // ecx
  unsigned __int8 v7; // al
  char v8; // al
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int16 v13; // di
  unsigned __int16 v14; // bx
  ULONG_PTR v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 124);
  v6 = *(_DWORD *)(a2 + 8);
  if ( (v5 & v6) != 0 )
    goto LABEL_34;
  v4 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0 && HIBYTE(v6) != (BYTE1(v6) ^ (unsigned __int8)(v6 ^ BYTE2(v6))) )
    goto LABEL_34;
  v4 = 1;
  v7 = *(_BYTE *)(a2 + 14);
  if ( v7 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v7) << 16);
    v20 = v3;
  }
  else
  {
    v3 = a1;
    v20 = a1;
  }
  if ( *(_DWORD *)(v3 + 16) != -1114130 )
    goto LABEL_34;
  v8 = *(_BYTE *)(a2 + 15);
  if ( v8 != 4 )
  {
    v4 = 2;
    if ( a2 < *(_QWORD *)(v3 + 48) || a2 >= *(_QWORD *)(v3 + 72) || *(_QWORD *)(v3 + 40) != a1 )
      goto LABEL_34;
  }
  v4 = 3;
  if ( v8 == 3 )
  {
    v9 = a2 + 16;
    v10 = *(_QWORD *)(a2 + 48);
    if ( (v10 & 0xFFF) != 0 )
      goto LABEL_34;
    if ( v10 < *(_QWORD *)(v3 + 48) )
      goto LABEL_34;
    if ( *(_QWORD *)(a2 + 56) + v10 > *(_QWORD *)(v3 + 72) )
      goto LABEL_34;
    v4 = 4;
    v11 = **(_QWORD **)(a2 + 24);
    if ( v11 != *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
      goto LABEL_34;
    if ( v11 != v9 )
      goto LABEL_34;
    v4 = 5;
    v12 = **(_QWORD **)(a2 + 40);
    if ( v12 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v12 != a2 + 32 )
      goto LABEL_34;
    v13 = *(_WORD *)(a1 + 140);
  }
  else
  {
    v4 = 6;
    v13 = *(_WORD *)(a1 + 140);
    if ( (v13 ^ *(_WORD *)(a2 + 16LL * (unsigned __int16)v6 + 12)) != (_WORD)v6 )
      goto LABEL_34;
  }
  v4 = 7;
  v14 = *(_WORD *)(a2 + 12);
  if ( v13 == v14
    || ((v15 = a2 - 16 * (v13 ^ (unsigned __int64)v14), !v5)
      ? (LOWORD(v15) = *(_WORD *)(v15 + 8))
      : ((v16 = *(_DWORD *)(v15 + 8), (v16 & *(_DWORD *)(a1 + 124)) == 0)
       ? (LOWORD(v15) = *(_DWORD *)(v15 + 8))
       : (LODWORD(v15) = v16 ^ *(_DWORD *)(a1 + 136)),
         v13 = *(_WORD *)(a1 + 140),
         v14 = *(_WORD *)(a2 + 12),
         v3 = v20,
         v4 = 7),
        (_WORD)v15 == (v13 ^ v14)) )
  {
    v4 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
    {
      v4 = 9;
    }
  }
LABEL_34:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v4 > 5 )
  {
    if ( v4 <= 7 )
      goto LABEL_48;
    if ( v4 == 8 )
    {
      v18 = 8LL;
      v19 = 13;
      goto LABEL_50;
    }
    if ( v4 == 10 )
      goto LABEL_48;
    v19 = 2;
LABEL_49:
    v18 = v4;
    goto LABEL_50;
  }
  if ( v4 >= 4 )
  {
    v19 = 14;
    goto LABEL_49;
  }
  if ( v4 <= 1 )
  {
LABEL_48:
    v19 = 3;
    goto LABEL_49;
  }
  if ( v4 == 2 )
  {
    v18 = *(_QWORD *)(v3 + 40);
    v19 = 12;
  }
  else
  {
    v18 = 3LL;
    v19 = 0;
  }
LABEL_50:
  RtlpLogHeapFailure(v19, a1, a2, v18, 0LL);
}
