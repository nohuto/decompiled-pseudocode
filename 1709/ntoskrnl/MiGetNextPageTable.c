/*
 * XREFs of MiGetNextPageTable @ 0x14003FDB0
 * Callers:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     NtGetWriteWatch @ 0x140031CA0 (NtGetWriteWatch.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     NtResetWriteWatch @ 0x14003D7F0 (NtResetWriteWatch.c)
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiIsCfgBitMapPageShared @ 0x1400A6230 (MiIsCfgBitMapPageShared.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400B0398 (MiFlushDirtyBitsToPfn.c)
 *     MiDeletePagablePteRange @ 0x1400B8270 (MiDeletePagablePteRange.c)
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiComputePageCommitment @ 0x140112BF0 (MiComputePageCommitment.c)
 *     MiCloneCaptureVadCommit @ 0x1401207B0 (MiCloneCaptureVadCommit.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     MiCheckCommitReleaseFromVad @ 0x140211C90 (MiCheckCommitReleaseFromVad.c)
 *     MiDeletePteRange @ 0x1402151D4 (MiDeletePteRange.c)
 *     MiDeleteSessionAddressSpace @ 0x140221670 (MiDeleteSessionAddressSpace.c)
 *     MiMoveDirtyBitsToPfns @ 0x140229C98 (MiMoveDirtyBitsToPfns.c)
 *     MiAddLoaderHalIoMappings @ 0x1408293B0 (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageRanges @ 0x14082D2D8 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiDeletePageTableHierarchy @ 0x1400EB190 (MiDeletePageTableHierarchy.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetNextPageTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r10
  int v7; // r15d
  unsigned int v8; // edi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r11
  char *v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // r14
  int v14; // edx
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 PteShadow; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+30h] [rbp-88h]
  _QWORD v30[6]; // [rsp+48h] [rbp-70h] BYREF
  char v31; // [rsp+80h] [rbp-38h] BYREF

  v6 = a3;
  v7 = 0;
  v28 = a4;
  *a6 = 0;
  v8 = 2;
  v9 = a1;
  v10 = 0xFFFFF68000000000uLL;
  v30[4] = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30[5] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = &v31;
  do
  {
    v12 = *((_QWORD *)v11 - 3);
    v11 -= 16;
    *((_QWORD *)v11 - 3) = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)v11 - 2) = ((*(_QWORD *)v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
  v13 = a5;
  v14 = (a5 >> 2) & 1;
LABEL_4:
  v15 = 2LL * v8;
  v16 = v30[v15];
  while ( 1 )
  {
    PteShadow = *(_QWORD *)v16;
    v18 = v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow(v16, *(_QWORD *)v16);
      v14 = (a5 >> 2) & 1;
    }
    if ( !PteShadow )
      goto LABEL_19;
    if ( (PteShadow & 1) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_19;
      MiMakeSystemAddressValid((__int64)((v16 << 25) - (v10 << 25)) >> 16, v6, 0, a4, v14);
      v6 = a3;
      v10 = 0xFFFFF68000000000uLL;
    }
    v19 = *(_QWORD *)v16;
    if ( v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v19) = MiReadPteShadow(v16, *(_QWORD *)v16);
    if ( (v19 & 0x80u) != 0LL )
      break;
    if ( (v13 & 2) == 0
      || qword_1403891E8 == (PVOID)qword_1403891F0
      || (PVOID)MI_GET_PAGE_FRAME_FROM_PTE(v16) != *(&qword_1403891E8 + 3 - v8) )
    {
      if ( (v7 & 1) != 0 )
      {
        v22 = v8 + 1;
        v23 = (__int64)((v16 << 25) - (v10 << 25)) >> 16;
        if ( v8 + 1 < 3 )
        {
          v24 = &v30[2 * v22];
          v25 = 3 - v22;
          do
          {
            *v24 = v23;
            v24 += 2;
            v23 = (__int64)((v23 << 25) - (v10 << 25)) >> 16;
            --v25;
          }
          while ( v25 );
        }
        v7 &= ~1u;
      }
      v14 = (a5 >> 2) & 1;
      ++v8;
      a4 = v28;
      if ( v8 >= 3 )
      {
        if ( (v7 & 2) != 0 )
          return (__int64)((v16 << 25) - (v10 << 25)) >> 16;
        return v9;
      }
      goto LABEL_4;
    }
LABEL_19:
    v16 += 8LL;
    if ( (v13 & 0x10) != 0 && v8 && ((v16 & 0xFFF) == 0 || v16 > v30[v15 + 1]) )
    {
      v20 = (unsigned __int64)*(unsigned int *)(MiGetUsedPtesHandle((__int64)((v16 - 8) << 25) >> 16) + 16) >> 16;
      if ( (v20 & 0x3FF) != 0 )
        goto LABEL_26;
      MiDeletePageTableHierarchy(v20, v18);
    }
    v21 = 0xFFFFF68000000000uLL;
LABEL_26:
    v7 |= 3u;
    if ( (v16 & 0xFFF) == 0 )
    {
      do
      {
        if ( !v8 )
          break;
        --v8;
        v16 = v21 + ((v16 >> 9) & 0x7FFFFFFFF8LL);
      }
      while ( (v16 & 0xFFF) == 0 );
      v13 = a5;
    }
    v15 = 2LL * v8;
    if ( v16 > v30[v15 + 1] )
    {
      if ( a3 )
        MiFlushTbList(a3);
      return 0LL;
    }
    v14 = (a5 >> 2) & 1;
    v6 = a3;
    a4 = v28;
    v10 = 0xFFFFF68000000000uLL;
  }
  *a6 = 3 - v8;
  if ( v8 != 2 )
  {
    v27 = 2 - v8;
    do
    {
      v16 = (__int64)((v16 << 25) - (v10 << 25)) >> 16;
      --v27;
    }
    while ( v27 );
  }
  return (__int64)((v16 << 25) - (v10 << 25)) >> 16;
}
