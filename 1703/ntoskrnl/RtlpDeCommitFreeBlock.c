/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x14000E878
 * Callers:
 *     RtlpFreeHeap @ 0x14000EDEC (RtlpFreeHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x14000E8DC (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x14000F368 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateUCREntry @ 0x140010744 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x140010840 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x140010918 (RtlpRemoveUCRBlock.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x14023E564 (RtlpUpdateHeapRates.c)
 *     RtlpHeapHandleError @ 0x1402441A4 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x140244814 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x140244978 (RtlpLogHeapDecommit.c)
 */

__int64 __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, _WORD *a2, unsigned __int64 a3)
{
  char v3; // di
  bool v4; // zf
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char v7; // r13
  __int64 result; // rax
  unsigned __int64 v9; // r9
  _WORD *v10; // r14
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  char *v14; // rcx
  char *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *i; // rcx
  _QWORD *v21; // rdx
  _WORD *v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r14
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // r8
  unsigned __int64 v29; // rax
  char *v30; // r14
  ULONG_PTR v31; // r12
  bool v32; // cc
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // r8
  char *v36; // r8
  __int64 v37; // r12
  unsigned __int64 v38; // r9
  ULONG_PTR v39; // r9
  ULONG_PTR v40; // r9
  char *v41; // r15
  ULONG_PTR v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r13
  __int64 v45; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-30h] BYREF
  __int64 v47; // [rsp+48h] [rbp-28h]
  __int64 v48; // [rsp+50h] [rbp-20h]
  _QWORD *v49; // [rsp+58h] [rbp-18h]
  char *v50; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v52; // [rsp+C0h] [rbp+50h] BYREF

  v52 = a3;
  v3 = 0;
  v4 = RtlpHeapKey == *(_QWORD *)(a1 + 360);
  v5 = (unsigned __int64)a2;
  v6 = a1;
  v48 = 0LL;
  v7 = 0;
  if ( !v4 || a3 < *(_QWORD *)(a1 + 176) )
    return RtlpInsertFreeBlock(a1, a2, a3);
  v9 = a3 + *(_QWORD *)(a1 + 192);
  if ( v9 < *(_QWORD *)(a1 + 184) || v9 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
  {
LABEL_88:
    a1 = v6;
    return RtlpInsertFreeBlock(a1, a2, a3);
  }
  v10 = (_WORD *)RtlpCoalesceFreeBlocks(a1, a2, &v52);
  v11 = *(_BYTE *)(v5 + 14);
  if ( v11 )
    v12 = (v5 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v11 << 16) + 0x10000;
  else
    v12 = v6;
  v13 = v52;
  v14 = (char *)&v10[8 * v52];
  v50 = v14;
  if ( v14[15] == 3 )
  {
    v15 = v14 + 16;
    RtlpRemoveUCRBlock(v14, v14 + 16);
    v16 = *((_QWORD *)v15 + 4);
    v17 = *((_QWORD *)v15 + 5);
    --*(_DWORD *)(v12 + 84);
    v48 = v16;
    *(_DWORD *)(v12 + 80) -= *((_QWORD *)v15 + 5) >> 12;
    *(_QWORD *)(v6 + 544) += *((_QWORD *)v15 + 5);
    --*(_DWORD *)(v6 + 572);
    v18 = *((_QWORD *)v15 + 5);
    v47 = v17;
    if ( v18 >= 0xFF000 )
      *(_QWORD *)(v6 + 552) -= v18;
    v14 = v50;
    v19 = *((_QWORD *)v15 + 5) >> 4;
    v7 = 1;
    v13 += v19 + 64;
    v52 = v13;
  }
  else
  {
    v47 = 0LL;
  }
  if ( *(_WORD *)(v6 + 140) == v10[6] )
  {
    BaseAddress = v10;
    for ( i = *(_QWORD **)(v12 + 96); (_QWORD *)(v12 + 96) != i; i = (_QWORD *)*i )
    {
      v21 = i - 2;
      v22 = (_WORD *)(i[2] + i[3]);
      v49 = i - 2;
      if ( v22 == v10 )
        goto LABEL_21;
    }
    v21 = 0LL;
    v49 = 0LL;
LABEL_21:
    if ( RtlpHeapErrorHandlerThreshold >= 1 && !v21 )
    {
      DbgPrint("(UCRBlock != NULL)");
      RtlpHeapHandleError();
    }
    v23 = 8 * v13;
    if ( v7 )
    {
      v24 = (__int64)&v10[v23];
      v50 = (char *)&v10[v23];
    }
    else
    {
      v50 = (char *)&v10[v23];
      v24 = (__int64)&v10[v23 - 16];
    }
    RegionSize = (v24 & 0xFFFFFFFFFFFFF000uLL) - (_QWORD)v10;
    if ( !RegionSize )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 1 )
      {
        if ( v7 )
        {
          DbgPrint("(!TrailingUCR)");
          RtlpHeapHandleError();
        }
      }
      goto LABEL_31;
    }
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) >= 0 )
    {
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        RtlpLogHeapDecommit(v6, BaseAddress, RegionSize, 5LL);
      ++*(_DWORD *)(v6 + 580);
      v26 = v49;
      v27 = v49[5];
      if ( v27 >= 0xFF000 )
        *(_QWORD *)(v6 + 552) -= v27;
      RtlpRemoveUCRBlock(v25, v26);
      v26[5] += RegionSize;
      RtlpInsertUCRBlock(v6, v26);
      *(_DWORD *)(v12 + 80) += RegionSize >> 12;
      v28 = RegionSize;
      *(_QWORD *)(v6 + 544) -= RegionSize;
      v29 = v26[5];
      if ( v29 >= 0xFF000 )
        *(_QWORD *)(v6 + 552) += v29;
      if ( v7 )
        goto LABEL_54;
      v30 = (char *)BaseAddress + v28;
      *(_WORD *)((char *)BaseAddress + v28 + 12) = *(_WORD *)(v6 + 140);
      LODWORD(v28) = RegionSize;
      if ( v50 == (char *)BaseAddress + RegionSize )
      {
        if ( !*(_DWORD *)(v6 + 124) )
          goto LABEL_54;
        v30[11] = v30[8] ^ v30[9] ^ v30[10];
        *((_DWORD *)v30 + 2) ^= *(_DWORD *)(v6 + 136);
      }
      else
      {
        v30[15] = 0;
        v30[10] = 0;
        v31 = (v23 * 2 - RegionSize) >> 4;
        v32 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v30 + 4) = v31;
        if ( !v32 && (unsigned __int16)v31 <= 1u )
        {
          DbgPrint("((LONG)FreeEntry->Size > 1)");
          RtlpHeapHandleError();
        }
        v30[11] = 0;
        v34 = *(_QWORD *)(v12 + 40);
        if ( v34 != v12 )
        {
          if ( (unsigned __int64)&v30[-v12] >> 16 > 0xFC )
            RtlpLogHeapFailure(3, v34, (_DWORD)v30, v12, 0LL);
          v3 = ((unsigned int)((_DWORD)v30 - v12) >> 16) + 1;
        }
        v35 = *((unsigned __int16 *)v30 + 4);
        v30[14] = v3;
        RtlpInsertFreeBlock(v6, v30, v35);
      }
      LODWORD(v28) = RegionSize;
LABEL_54:
      result = DWORD2(PerfGlobalGroupMask);
      if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        return RtlpLogHeapContractEvent(v6, (_DWORD)BaseAddress, v28, 16 * (unsigned int)*(_QWORD *)(v6 + 192), v7, v47);
      return result;
    }
LABEL_44:
    RtlpUpdateHeapRates(v6, 3LL);
    if ( v7 )
    {
      RtlpCreateUCREntry(v33, v12, v48 - 48, v47, (__int64)v10, (__int64)&v52);
      v13 = v52;
    }
    goto LABEL_31;
  }
  v36 = (char *)(((unsigned __int64)v10 + 4159) & 0xFFFFFFFFFFFFF000uLL);
  BaseAddress = v36;
  if ( v36 == (char *)(v10 + 40) )
  {
    v36 += 4096;
    BaseAddress = v36;
  }
  v37 = 8 * v13;
  if ( v7 )
    v38 = (unsigned __int64)&v10[v37];
  else
    v38 = (unsigned __int64)&v10[v37 - 16];
  v39 = v38 & 0xFFFFFFFFFFFFF000uLL;
  RegionSize = v39;
  if ( v39 < (unsigned __int64)v36 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 && v7 )
    {
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError();
    }
    goto LABEL_31;
  }
  v40 = v39 - (_QWORD)v36;
  RegionSize = v40;
  if ( v14[15] != 3 && (!v40 || v40 < *(_QWORD *)(v6 + 176)) )
  {
LABEL_31:
    a3 = v13;
    a2 = v10;
    goto LABEL_88;
  }
  if ( v40 )
  {
    ++*(_DWORD *)(v6 + 580);
    if ( ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u) < 0 )
      goto LABEL_44;
    if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
      RtlpLogHeapDecommit(v6, BaseAddress, RegionSize, 6LL);
    v40 = RegionSize;
    v36 = (char *)BaseAddress;
  }
  if ( !v7 )
  {
    v41 = &v36[v40];
    *(_WORD *)&v36[v40 + 12] = *(_WORD *)(v6 + 140);
    LODWORD(v40) = RegionSize;
    LODWORD(v36) = (_DWORD)BaseAddress;
    if ( &v10[v37] == (_WORD *)((char *)BaseAddress + RegionSize) )
    {
      if ( !*(_DWORD *)(v6 + 124) )
        goto LABEL_83;
      v41[11] = v41[8] ^ v41[9] ^ v41[10];
      *((_DWORD *)v41 + 2) ^= *(_DWORD *)(v6 + 136);
    }
    else
    {
      v41[15] = 0;
      v41[10] = 0;
      v42 = ((unsigned __int64)v10 + v37 * 2 - RegionSize - (_QWORD)BaseAddress) >> 4;
      v32 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v41 + 4) = v42;
      if ( !v32 && (unsigned __int16)v42 <= 1u )
      {
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError();
      }
      v41[11] = 0;
      v43 = *(_QWORD *)(v12 + 40);
      if ( v43 == v12 )
      {
        LOBYTE(v44) = 0;
      }
      else
      {
        v44 = ((unsigned __int64)&v41[-v12] >> 16) + 1;
        if ( (unsigned __int64)&v41[-v12] >> 16 > 0xFC )
          RtlpLogHeapFailure(3, v43, (_DWORD)v41, v12, 0LL);
      }
      v45 = *((unsigned __int16 *)v41 + 4);
      v41[14] = v44;
      RtlpInsertFreeBlock(v6, v41, v45);
    }
    LODWORD(v40) = RegionSize;
    LODWORD(v36) = (_DWORD)BaseAddress;
  }
LABEL_83:
  RtlpCreateUCREntry(v6, v12, (_DWORD)v36 - 48, v40, (__int64)v10, (__int64)&v50);
  RtlpInsertFreeBlock(v6, v10, v50);
  result = DWORD2(PerfGlobalGroupMask);
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
    return RtlpLogHeapContractEvent(
             v6,
             (_DWORD)BaseAddress,
             RegionSize,
             16 * (unsigned int)*(_QWORD *)(v6 + 192),
             0,
             0LL);
  return result;
}
