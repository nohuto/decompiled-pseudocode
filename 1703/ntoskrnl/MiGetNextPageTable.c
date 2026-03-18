/*
 * XREFs of MiGetNextPageTable @ 0x1400D2560
 * Callers:
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiCloneReserveVadCommit @ 0x140003268 (MiCloneReserveVadCommit.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiIsCfgBitMapPageShared @ 0x1400637A0 (MiIsCfgBitMapPageShared.c)
 *     MiFlushDirtyBitsToPfn @ 0x140071DE8 (MiFlushDirtyBitsToPfn.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400D10C0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     NtGetWriteWatch @ 0x140101A00 (NtGetWriteWatch.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     MiDeletePteRange @ 0x14013BCF4 (MiDeletePteRange.c)
 *     MiDeleteSessionAddressSpace @ 0x14013E414 (MiDeleteSessionAddressSpace.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiAddLoaderHalIoMappings @ 0x14080384C (MiAddLoaderHalIoMappings.c)
 *     MiMarkLargePageRanges @ 0x1408141A8 (MiMarkLargePageRanges.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetNextPageTable(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  int v7; // esi
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int8 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD v23[6]; // [rsp+40h] [rbp-78h] BYREF
  char v24; // [rsp+78h] [rbp-40h] BYREF

  v7 = 0;
  *a6 = 0;
  v8 = 2;
  v9 = a1;
  v23[4] = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23[5] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = &v24;
  do
  {
    v11 = *((_QWORD *)v10 - 3);
    v10 -= 16;
    *((_QWORD *)v10 - 3) = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)v10 - 2) = ((*(_QWORD *)v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v8;
  }
  while ( v8 );
LABEL_3:
  v12 = v23[2 * v8];
  while ( 1 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v12);
    if ( !v13 )
      goto LABEL_12;
    if ( (v13 & 1) == 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
      MiMakeSystemAddressValid((__int64)((v12 << 25) - (v15 << 25)) >> 16, a3, 0, v14, (a5 & 4) != 0);
      v15 = 0xFFFFF68000000000uLL;
    }
    if ( *(char *)v12 < 0 )
      break;
    if ( (a5 & 2) == 0
      || qword_14036CF28 == (PVOID)qword_14036CF30
      || (PVOID)(((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12) >> 12) & 0xFFFFFFFFFLL) != *(&qword_14036CF28 + 3 - v8) )
    {
      if ( (v7 & 1) != 0 )
      {
        v18 = v8 + 1;
        v19 = (__int64)((v12 << 25) - (v15 << 25)) >> 16;
        if ( v8 + 1 < 3 )
        {
          v20 = &v23[2 * v18];
          v21 = 3 - v18;
          do
          {
            *v20 = v19;
            v20 += 2;
            v19 = (__int64)((v19 << 25) - (v15 << 25)) >> 16;
            --v21;
          }
          while ( v21 );
        }
        v7 &= ~1u;
      }
      if ( ++v8 >= 3 )
      {
        if ( (v7 & 2) != 0 )
          return (__int64)((v12 << 25) - (v15 << 25)) >> 16;
        return v9;
      }
      goto LABEL_3;
    }
LABEL_12:
    v12 += 8LL;
    for ( v7 |= 3u; (v12 & 0xFFF) == 0; v12 = v15 + (v16 & (v12 >> 9)) )
    {
      if ( !v8 )
        break;
      --v8;
    }
    if ( v12 > v23[2 * v8 + 1] )
    {
      if ( a3 )
        MiFlushTbList(a3);
      return 0LL;
    }
  }
  *a6 = 3 - v8;
  if ( v8 != 2 )
  {
    v22 = 2 - v8;
    do
    {
      v12 = (__int64)((v12 << 25) - (v15 << 25)) >> 16;
      --v22;
    }
    while ( v22 );
  }
  return (__int64)((v12 << 25) - (v15 << 25)) >> 16;
}
