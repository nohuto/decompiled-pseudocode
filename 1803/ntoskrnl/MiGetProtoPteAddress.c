/*
 * XREFs of MiGetProtoPteAddress @ 0x14001E7D0
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x14001E1D0 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiCheckUserVirtualAddress @ 0x14003E2E0 (MiCheckUserVirtualAddress.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiPteNeedsCommitCharge @ 0x1400A68AC (MiPteNeedsCommitCharge.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiComputeImageVadCommitCharge @ 0x14025061C (MiComputeImageVadCommitCharge.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402520D8 (MiUpdatePrivateDemandZeroView.c)
 *     MiGetLargeVadMappingIndex @ 0x140261B5C (MiGetLargeVadMappingIndex.c)
 *     MiGetClusterPage @ 0x1402698A0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiIsRangeFullyCommitted @ 0x1404D5F64 (MiIsRangeFullyCommitted.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiCommitPagefileBackedSection @ 0x1404D7638 (MiCommitPagefileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140568184 (MmFlushVirtualMemory.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 *     MiCloneLargeFileOnlyVad @ 0x14074E2D4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140756210 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     MiSetVadFlags @ 0x1400E4A50 (MiSetVadFlags.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x140268088 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiGetProtoPteAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rtt
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 SubsectionNode; // rax
  unsigned int SessionId; // eax

  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( ((*(_DWORD *)(a1 + 48) & 7) != 2 || (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) & 0x4000000) == 0)
    && (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 3 >= a2 - v7
    && (a3 & 4) == 0 )
  {
    *a4 = *(_QWORD *)(a1 + 72);
    return *(_QWORD *)(a1 + 80) + 8 * (a2 - v7);
  }
  v8 = 0LL;
  *a4 = 0LL;
  v9 = *(_QWORD **)(a1 + 72);
  v10 = *v9;
  v11 = a2 + ((__int64)(*(_QWORD *)(a1 + 80) - v9[1]) >> 3) - v7;
  if ( !*(_QWORD *)(*v9 + 64LL) )
  {
    if ( (*(_DWORD *)(v10 + 56) & 0x1000) != 0 || *((_DWORD *)v9 + 12) >= 0x40000000u )
    {
      v15 = 0x100000LL;
      if ( *((_DWORD *)v9 + 12) >= 0x40000000u )
        v15 = 0x200000LL;
      v16 = v15 >> 3;
      v18 = v11;
      v17 = v11 / v16;
      v11 %= v16;
      v19 = (unsigned int)(v18 / v16);
      v20 = v19 + 1;
      if ( !v11 )
        v20 = v19;
      if ( v20 > *(unsigned int *)(v10 + 96) )
        return 0LL;
      v9 += 11 * v17;
      if ( v11 >= *((unsigned int *)v9 + 11) )
        return 0LL;
    }
    else if ( v11 >= *((unsigned int *)v9 + 11) )
    {
      return 0LL;
    }
    if ( v9 )
    {
      *a4 = v9;
      v13 = v9[1];
      if ( v13 )
        goto LABEL_14;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x10000000) == 0 )
  {
    v12 = *((unsigned int *)v9 + 11);
    if ( v11 >= v12 )
    {
      do
      {
        v9 = (_QWORD *)v9[2];
        v11 -= v12;
        ++v8;
        if ( !v9 )
          break;
        v12 = *((unsigned int *)v9 + 11);
      }
      while ( v11 >= v12 );
      if ( v8 > 0x10 && (*(_DWORD *)(v10 + 56) & 0x20) == 0 )
        MiSetVadFlags(a1, 2LL, 1LL);
    }
    if ( v9 && v11 < *((_DWORD *)v9 + 11) - (*((_DWORD *)v9 + 13) & 0x3FFFFFFFu) )
      goto LABEL_13;
    return 0LL;
  }
  v21 = ((*((unsigned int *)v9 + 9) | ((unsigned __int64)((_WORD)v9[4] & 0xFFC0) << 26)) + v11) << 12;
  SubsectionNode = MiLocateSubsectionNode(*v9, v21, (a3 & 1) != 0);
  v9 = (_QWORD *)SubsectionNode;
  if ( !SubsectionNode )
    return 0LL;
  v11 = (v21 >> 12)
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
LABEL_13:
  v13 = v9[1];
  *a4 = v9;
LABEL_14:
  if ( (*((_BYTE *)v9 + 34) & 2) != 0 && (*(_DWORD *)(v10 + 56) & 0x4000000) != 0 && (a3 & 2) == 0 )
  {
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    v13 = *(_QWORD *)(MiGetSharedProtos(v10, SessionId, v9) + 72);
  }
  return v13 + 8 * v11;
}
