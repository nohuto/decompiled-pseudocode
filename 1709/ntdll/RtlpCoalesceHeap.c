/*
 * XREFs of RtlpCoalesceHeap @ 0x180090494
 * Callers:
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x180090370 (RtlCompactHeap.c)
 * Callees:
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(unsigned __int64 a1)
{
  __int64 *v1; // rbp
  unsigned __int64 v2; // rdi
  __int64 *v3; // r14
  __int64 v5; // rsi
  int v6; // r12d
  __int64 *v7; // r10
  bool v8; // zf
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 i; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 336);
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = (int)v3;
    v7 = v3;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v3 - 2);
        v7 = v3;
      }
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v22 = v9;
    if ( !v8 )
    {
      v14 = *(__int64 **)(v5 + 24);
      v15 = *(_QWORD *)(v5 + 16);
      v16 = *v14;
      v17 = *(_QWORD *)(v15 + 8);
      if ( *v14 != v17 || v16 != v5 + 16 )
      {
        RtlpLogHeapFailure(12, a1, v6, v17, v16, 0LL);
        goto LABEL_31;
      }
      *(_QWORD *)(a1 + 192) -= v9;
      v18 = *(_QWORD *)(a1 + 312);
      if ( v18 )
      {
        for ( i = *(unsigned int *)(v18 + 8); ; i = *(unsigned int *)(v20 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v21 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_26;
          }
          v20 = *(_QWORD *)v18;
          if ( !*(_QWORD *)v18 )
            break;
          v18 = *(_QWORD *)v18;
        }
        v21 = *(_DWORD *)(v18 + 8) - 1;
LABEL_26:
        RtlpHeapRemoveListEntry(a1, v18, 1, v7, v21, *(unsigned __int16 *)(v5 + 8));
      }
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock((PVOID)a1, v5);
      v11 = *(unsigned __int16 *)(v5 + 8);
      v12 = v5;
LABEL_30:
      RtlpDeCommitFreeBlock(a1, v12, v11, 1);
LABEL_31:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v10 = RtlpCoalesceFreeBlocks(a1, v5, &v22, 1);
    v11 = v22;
    v12 = v10;
    if ( v22 != v9 )
    {
      if ( v10 != v5 && (*(_WORD *)(v10 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v10 + 12)) )
      {
        RtlpInsertFreeBlock(a1, v10, v22);
        goto LABEL_31;
      }
      goto LABEL_30;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v10 + 8) )
      v2 = v10;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v2);
    }
  }
  return v2;
}
