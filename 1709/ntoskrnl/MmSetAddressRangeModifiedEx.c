/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x14002F6E0
 * Callers:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcZeroDataInCache @ 0x14011ED48 (CcZeroDataInCache.c)
 *     MmSetAddressRangeModified @ 0x14012B360 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400DC79C (MI_TIGHTER_PERMISSIONS.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r15
  int v4; // edi
  __int64 v5; // r8
  __int64 *v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 SharedVm; // rbx
  __int64 v11; // rcx
  __int64 MultiplexedVm; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 PteShadow; // rbx
  int v16; // r12d
  __int64 v17; // rdi
  __int64 v18; // r15
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v20; // r9
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v26; // rbp
  int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdi
  unsigned int v30; // ebx
  unsigned __int64 v31; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  bool v35; // cc
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  char v38; // al
  char v39; // al
  _DWORD *v40; // rax
  char v42; // [rsp+30h] [rbp-128h]
  KIRQL v43; // [rsp+31h] [rbp-127h]
  unsigned __int64 v44; // [rsp+38h] [rbp-120h] BYREF
  int ProtectionMask; // [rsp+40h] [rbp-118h]
  __int64 v46; // [rsp+48h] [rbp-110h]
  unsigned __int64 v47; // [rsp+50h] [rbp-108h]
  __int64 v48; // [rsp+58h] [rbp-100h]
  int v49; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v50; // [rsp+64h] [rbp-F4h]
  __int64 v51; // [rsp+68h] [rbp-F0h]
  __int64 v52; // [rsp+70h] [rbp-E8h]
  __int64 v53; // [rsp+78h] [rbp-E0h]
  void *retaddr; // [rsp+158h] [rbp+0h]

  v2 = 0;
  v42 = 0;
  ProtectionMask = MiMakeProtectionMask(4LL, a2, a2);
  v51 = 20LL;
  v4 = ProtectionMask;
  v49 = 0;
  v50 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v6 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = (((a1 + v5 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v47 = v7;
  v9 = 0LL;
  SharedVm = MiGetSharedVm(&unk_14038B880);
  v43 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  MultiplexedVm = MiGetMultiplexedVm(v11, v8);
  v14 = 2LL;
  v48 = MultiplexedVm;
  do
  {
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v6, *v6);
    v44 = PteShadow;
    if ( (PteShadow & 1) != 0 )
    {
      v16 = 0;
      v17 = 0LL;
      v18 = MI_GET_PFN_FROM_PTE(&v44, 0xFFFFF6FB7DBED000uLL, v13, v14);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v20);
      MiLockPageAtDpcInline(v18);
      v21 = (*(_BYTE *)(v18 + 34) & 0x10) == 0;
      v22 = *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
      v46 = v22;
      if ( v21 || (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 )
      {
        v23 = MiCaptureDirtyBitToPfn(v18);
        v22 = v46;
        v17 = v23;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( v17 )
        MiReleasePageFileInfo(v22, v17, 0LL);
      v4 = ProtectionMask;
      if ( ProtectionMask == 2 && (PteShadow & 0x800) != 0 )
      {
        v9 ^= (v9 ^ (MI_GET_PAGE_FRAME_FROM_PTE(&v44) << 12)) & 0xFFFFFFFFF000LL;
        MiWriteValidPteNewPage(v6, v9);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(PteShadow, v9) )
          v16 = 1;
        if ( (PteShadow & 0x42) != 0 )
        {
          v2 = 1;
          v42 = 1;
        }
        else
        {
          v2 = v42;
        }
        if ( !v16 )
          goto LABEL_31;
      }
      else
      {
        if ( (PteShadow & 0x42) == 0 )
        {
          v2 = v42;
          goto LABEL_31;
        }
        v44 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
        MiWriteValidPteNewPage(v6, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
        v2 = 1;
        v42 = 1;
      }
      MiInsertTbFlushEntry(&v49, v8, 1LL, 0LL);
LABEL_31:
      v14 = 2LL;
      goto LABEL_32;
    }
    if ( v4 == 2 && (PteShadow & 8) == 0 )
    {
      v24 = PteShadow | 8;
      v44 = v24;
      *v6 = v24;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        MiWritePteShadow(v6, v24);
        goto LABEL_31;
      }
    }
LABEL_32:
    ++v6;
    v8 += 4096LL;
  }
  while ( (unsigned __int64)v6 <= v47 );
  MiFlushTbList(&v49);
  CurrentThread = KeGetCurrentThread();
  v26 = v48;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v27 = HIBYTE(*(_DWORD *)(v48 + 192));
    if ( (v27 & 8) != 0 )
    {
      *(_BYTE *)(v48 + 195) = v27 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(v26, v43) && (*(_BYTE *)(v26 + 192) & 0x40) != 0 )
      {
        v28 = *(_QWORD *)(v26 + 120);
        v29 = *(_QWORD *)(v26 + 152);
        if ( v28 > v29 )
        {
          v30 = 7;
          v31 = *(_QWORD *)(v26 + 136);
          if ( (*(_DWORD *)(v26 + 4) & 0xF) != 0 )
          {
            for ( i = v28 - 1; v31 > i; --v30 )
            {
              v33 = v31 - i;
              if ( v30 )
              {
                v34 = v33;
                v35 = *(_QWORD *)(v26 + 8LL * v30 + 40) <= v33;
                v33 = *(_QWORD *)(v26 + 8LL * v30 + 40);
                if ( !v35 )
                  v33 = v34;
              }
              if ( v33 )
              {
                MiTrimWorkingSet(v26, v33, v43, v30, 16);
                if ( !v30 )
                  break;
              }
              v31 = *(_QWORD *)(v26 + 136);
            }
          }
          else
          {
            for ( ; v31 > v29; --v30 )
            {
              v36 = v31 - v29;
              if ( v30 )
              {
                v37 = v36;
                v35 = *(_QWORD *)(v26 + 8LL * v30 + 40) <= v36;
                v36 = *(_QWORD *)(v26 + 8LL * v30 + 40);
                if ( !v35 )
                  v36 = v37;
              }
              if ( v36 )
              {
                MiTrimWorkingSet(v26, v36, v43, v30, 16);
                if ( !v30 )
                  break;
              }
              v31 = *(_QWORD *)(v26 + 136);
            }
          }
          MiSimpleAging(v26, v43);
        }
      }
    }
    v38 = *(_BYTE *)(v26 + 195);
    if ( (v38 & 4) != 0 )
    {
      *(_BYTE *)(v26 + 195) = v38 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        v26,
        v43,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v26 + 172)) + 5680LL)
                            + 2354LL));
    }
    v39 = *(_BYTE *)(v26 + 195);
    if ( (v39 & 0x10) != 0 )
    {
      *(_BYTE *)(v26 + 195) = v39 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v26, v43, *(_QWORD *)(v26 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  v40 = (_DWORD *)MiGetSharedVm(v26);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
  else
    *v40 = 0;
  __writecr8(v43);
  return v2;
}
