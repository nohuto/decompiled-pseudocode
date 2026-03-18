/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140101470
 * Callers:
 *     MmSetAddressRangeModified @ 0x140037900 (MmSetAddressRangeModified.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcZeroDataInCache @ 0x1401178EC (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14006C6F4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1)
{
  unsigned __int8 v2; // r12
  int v3; // ebp
  __int64 v4; // r8
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdi
  char *AnyMultiplexedVm; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  _KPROCESS *v13; // rdx
  int v14; // r12d
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbp
  bool v19; // zf
  struct _KEVENT *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // rsi
  char v25; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  unsigned int v29; // ebx
  unsigned __int64 v30; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  bool v34; // cc
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  char v37; // al
  char v38; // al
  char v39; // al
  LONG *v40; // rax
  char v42; // [rsp+30h] [rbp-128h]
  unsigned __int8 v43; // [rsp+31h] [rbp-127h]
  KIRQL v44; // [rsp+32h] [rbp-126h]
  __int64 v45; // [rsp+38h] [rbp-120h] BYREF
  int ProtectionMask; // [rsp+40h] [rbp-118h]
  struct _KEVENT *v47; // [rsp+48h] [rbp-110h]
  __int64 v48; // [rsp+50h] [rbp-108h]
  int v49; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v50; // [rsp+64h] [rbp-F4h]
  __int64 v51; // [rsp+68h] [rbp-F0h]
  __int64 v52; // [rsp+70h] [rbp-E8h]
  __int64 v53; // [rsp+78h] [rbp-E0h]
  void *retaddr; // [rsp+158h] [rbp+0h]

  v2 = 0;
  v42 = 0;
  ProtectionMask = MiMakeProtectionMask(4u);
  v51 = 20LL;
  v49 = 0;
  v3 = ProtectionMask;
  v50 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = (((a1 + v4 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v45 = v6;
  v8 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v44 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v45;
  v48 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(MiSystemCacheVaControlArea(v7) + 60) & 0x3FF)) + 5888LL;
  do
  {
    v12 = MI_READ_PTE_LOCK_FREE(v5);
    v45 = v12;
    v13 = (_KPROCESS *)v12;
    if ( (v12 & 1) != 0 )
    {
      v14 = 0;
      v15 = 0LL;
      v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v45);
      v18 = v17 + 48 * v16;
      v43 = MiLockPageInline(v18);
      v19 = (*(_BYTE *)(v18 + 34) & 0x10) == 0;
      v20 = *(struct _KEVENT **)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL));
      v47 = v20;
      if ( v19 || (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 )
      {
        v21 = MiCaptureDirtyBitToPfn(v18);
        v20 = v47;
        v15 = v21;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v43);
      if ( v15 )
        MiReleasePageFileInfo(v20, v15, 0);
      v3 = ProtectionMask;
      if ( ProtectionMask == 2 && (v45 & 0x800) != 0 )
      {
        v8 ^= (v8 ^ (MI_GET_PAGE_FRAME_FROM_PTE(&v45) << 12)) & 0xFFFFFFFFF000LL;
        MiWriteValidPteNewProtection((__int64)v5);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 || MI_TIGHTER_PERMISSIONS(v22, v8) )
          v14 = 1;
        if ( (v22 & 0x42) != 0 )
          v42 = 1;
        v19 = v14 == 0;
        v2 = v42;
        if ( !v19 )
          goto LABEL_20;
      }
      else
      {
        if ( (v45 & 0x42) != 0 )
        {
          v45 &= 0xFFFFFFFFFFFFFFBDuLL;
          MiWriteValidPteNewProtection((__int64)v5);
          v2 = 1;
          v42 = 1;
LABEL_20:
          MiInsertTbFlushEntry((__int64)&v49, v7, 1LL, 0);
          goto LABEL_26;
        }
        v2 = v42;
      }
    }
    else if ( v3 == 2 && (v12 & 8) == 0 )
    {
      v45 = v12 | 8;
      *v5 = v12 | 8;
      if ( (unsigned int)MiPteInShadowRange(v5) )
        MiWritePteShadow(v23);
    }
LABEL_26:
    ++v5;
    v7 += 4096LL;
  }
  while ( (unsigned __int64)v5 <= v11 );
  MiFlushTbList((__int64)&v49, v13);
  v24 = v48;
  v25 = *(_BYTE *)(v48 + 195);
  if ( (v25 & 0x10) == 0 )
  {
    if ( (v25 & 8) != 0 )
    {
      v26 = v48;
      *(_BYTE *)(v48 + 195) = v25 & 0xE7 | 0x10;
      if ( ((MiForcedTrim(v26, v44) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && (*(_BYTE *)(v24 + 192) & 0x40) != 0 )
      {
        v27 = *(_QWORD *)(v24 + 120);
        v28 = *(_QWORD *)(v24 + 152);
        if ( v27 > v28 )
        {
          v29 = 7;
          v30 = *(_QWORD *)(v24 + 136);
          if ( (*(_DWORD *)(v24 + 4) & 0xF) != 0 )
          {
            for ( i = v27 - 1; v30 > i; --v29 )
            {
              v32 = v30 - i;
              if ( v29 )
              {
                v33 = v32;
                v34 = *(_QWORD *)(v24 + 8LL * v29 + 40) <= v32;
                v32 = *(_QWORD *)(v24 + 8LL * v29 + 40);
                if ( !v34 )
                  v32 = v33;
              }
              if ( v32 )
              {
                MiTrimWorkingSet(v24, v32, v44, v29, 0);
                if ( !v29 )
                  break;
              }
              v30 = *(_QWORD *)(v24 + 136);
            }
          }
          else
          {
            for ( ; v30 > v28; --v29 )
            {
              v35 = v30 - v28;
              if ( v29 )
              {
                v36 = v35;
                v34 = *(_QWORD *)(v24 + 8LL * v29 + 40) <= v35;
                v35 = *(_QWORD *)(v24 + 8LL * v29 + 40);
                if ( !v34 )
                  v35 = v36;
              }
              if ( v35 )
              {
                MiTrimWorkingSet(v24, v35, v44, v29, 0);
                if ( !v29 )
                  break;
              }
              v30 = *(_QWORD *)(v24 + 136);
            }
          }
          MiSimpleAging(v24, v44);
        }
      }
    }
    v37 = *(_BYTE *)(v24 + 195);
    if ( (v37 & 4) != 0 )
    {
      *(_BYTE *)(v24 + 195) = v37 & 0xEB | 0x10;
      MiAgeWorkingSet(
        v24,
        v44,
        1,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(v24 + 172)) + 5544LL)
                            + 2354LL));
    }
    v38 = *(_BYTE *)(v24 + 195);
    if ( (v38 & 0x20) != 0 )
    {
      *(_BYTE *)(v24 + 195) = v38 & 0xCF | 0x10;
      MiReduceWs(v24, v44, *(_QWORD *)(v24 + 152));
    }
    v39 = *(_BYTE *)(v24 + 195);
    if ( (v39 & 0x10) != 0 )
      *(_BYTE *)(v24 + 195) = v39 & 0xEF;
  }
  v40 = MiGetSharedVm(v24);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
  else
    *v40 = 0;
  __writecr8(v44);
  return v2;
}
