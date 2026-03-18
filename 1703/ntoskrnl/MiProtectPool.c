/*
 * XREFs of MiProtectPool @ 0x1400A5D90
 * Callers:
 *     ExProtectPoolEx @ 0x1400A5BE0 (ExProtectPoolEx.c)
 * Callees:
 *     MiFindLargeMapping @ 0x14003463C (MiFindLargeMapping.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x14006C6F4 (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiVaIsSessionSpecialPool @ 0x1400A6B34 (MiVaIsSessionSpecialPool.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockNonPagedPoolPte @ 0x1400A7D10 (MiLockNonPagedPoolPte.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // esi
  unsigned __int16 *AnyMultiplexedVm; // r13
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // r9
  __int64 v13; // r10
  int SystemRegionType; // r11d
  unsigned __int64 v15; // r10
  int v16; // r11d
  LONG *v18; // rbx
  ULONG_PTR *v19; // r12
  char v20; // al
  KIRQL v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r11
  __int64 v31; // rbx
  int v32; // eax
  _DWORD *SharedVm; // rax
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r10
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 TransitionPte; // rax
  signed __int64 v43; // rdx
  bool v44; // zf
  signed __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  char v48; // al
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdi
  unsigned int v51; // ebx
  unsigned __int64 v52; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  bool v56; // cc
  __int64 v57; // rax
  __int64 v58; // r10
  __int64 v59; // r15
  unsigned int v60; // r12d
  unsigned __int64 ValidPte; // rsi
  __int64 v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r10
  __int64 v67; // rsi
  __int64 v68; // r11
  unsigned __int64 v69; // rdx
  char v70; // di
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r10
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // rax
  char v78; // al
  char v79; // al
  char v80; // al
  LONG *v81; // rcx
  unsigned __int8 v82; // [rsp+30h] [rbp-D0h] BYREF
  char v83; // [rsp+31h] [rbp-CFh]
  unsigned __int64 v84; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v85; // [rsp+40h] [rbp-C0h]
  int v86; // [rsp+44h] [rbp-BCh]
  ULONG_PTR v87; // [rsp+48h] [rbp-B8h]
  ULONG_PTR *v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v90; // [rsp+64h] [rbp-9Ch]
  __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+78h] [rbp-88h]
  int v94; // [rsp+120h] [rbp+20h] BYREF
  __int16 v95; // [rsp+124h] [rbp+24h]
  __int64 v96; // [rsp+128h] [rbp+28h]
  __int64 v97; // [rsp+130h] [rbp+30h]
  __int64 v98; // [rsp+138h] [rbp+38h]
  void *retaddr; // [rsp+228h] [rbp+128h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  v85 = ProtectionMask;
  v6 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v7 = 0;
  v8 = 0;
  AnyMultiplexedVm = 0LL;
  v10 = v5 + v4 - 1;
  v86 = 0;
  v11 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = MiGetSystemRegionType(v5);
  if ( SystemRegionType != 6 )
  {
    if ( SystemRegionType == 13 || SystemRegionType == 7 )
    {
      if ( ((v10 ^ v13) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        if ( SystemRegionType == 7 )
          AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(2LL);
        goto LABEL_21;
      }
    }
    else if ( (unsigned int)MiVaIsSessionSpecialPool(v13) )
    {
      if ( ((v10 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v7 = 2;
        v12 = 0xFFFFF68000000000uLL;
        AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                              + 3008);
        goto LABEL_21;
      }
    }
    else if ( v16 == 5 && !(unsigned int)MiFindLargeMapping(v15, v10) )
    {
      v8 = 1;
      v12 = 0xFFFFF68000000000uLL;
      v86 = 1;
      goto LABEL_21;
    }
    return 0LL;
  }
  AnyMultiplexedVm = (unsigned __int16 *)&unk_14036D3A0;
LABEL_21:
  v91 = 20LL;
  v87 = v12 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
  v89 = v7;
  v90 = 0;
  v92 = 0LL;
  v93 = 0LL;
  if ( AnyMultiplexedVm )
  {
    v18 = &dword_14036D4C0;
    v19 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * AnyMultiplexedVm[86]);
    v20 = AnyMultiplexedVm[96] & 7;
    v88 = v19;
    if ( v20 != 2 )
      v18 = (LONG *)(AnyMultiplexedVm + 100);
    v21 = ExAcquireSpinLockExclusive(v18);
    v83 = v21;
    v18[1] = 0;
  }
  else
  {
    v19 = &MiSystemPartition;
    v21 = 17;
    v88 = &MiSystemPartition;
    v83 = 17;
  }
  while ( v11 <= v87 )
  {
    v22 = MI_READ_PTE_LOCK_FREE(v11);
    v84 = v22;
    v26 = v22;
    if ( v6 == 24 )
    {
      if ( !AnyMultiplexedVm )
      {
        if ( v8 == 1 )
        {
          v40 = MiLockNonPagedPoolPte(v11, &v82);
          v26 = MI_READ_PTE_LOCK_FREE(v11);
          v84 = v26;
        }
        else
        {
          v40 = MI_GET_PFN_FROM_PTE(&v84, v23, v24, v25);
          v82 = MiLockPageInline(v40);
        }
        *(_QWORD *)(v40 + 16) = *(_QWORD *)(v40 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        v41 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
        TransitionPte = MiMakeTransitionPte(v41, 24LL);
        v43 = TransitionPte;
        if ( v8 == 1 )
        {
          while ( 1 )
          {
            v45 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v43, v26);
            v44 = v26 == v45;
            v26 = v45;
            if ( v44 )
              break;
            v84 = v45;
            v46 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
            v43 = MiMakeTransitionPte(v46, 24LL);
          }
          if ( (v84 & 0x200) != 0 )
            *(_QWORD *)(v40 + 24) = *(_QWORD *)(v40 + 24) & 0xC000000000000000uLL | 0x10000;
        }
        else
        {
          *(_QWORD *)v11 = TransitionPte;
          if ( (unsigned int)MiPteInShadowRange(v11) )
            MiWritePteShadow(v47);
        }
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v82);
        MiInsertTbFlushEntry(&v89, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
LABEL_60:
        v6 = v85;
        goto LABEL_61;
      }
      if ( (v22 & 1) != 0 )
      {
        v27 = MI_GET_PFN_FROM_PTE(&v84, v23, v24, v25);
        if ( (v30 & *(_QWORD *)(v27 + 40)) == 0 )
        {
          v31 = (__int64)((v11 << 25) - (v29 << 25)) >> 16;
          if ( dword_14036CA68 )
            MI_WSLE_LOG_ACCESS(AnyMultiplexedVm, v11);
          if ( (MiGetWsleContents(v28, v31) & 0xF) != 8 )
          {
            v32 = MiTbFlushType((__int64)AnyMultiplexedVm);
            v96 = 20LL;
            v97 = 0LL;
            v98 = 0LL;
            v94 = v32;
            v95 = 4;
            MiInsertTbFlushEntry(&v94, v31, 1LL, 0LL);
            if ( !MiFreeWsleList(AnyMultiplexedVm, &v94, 0LL) )
              v11 -= 8LL;
          }
          goto LABEL_61;
        }
LABEL_31:
        MiFlushTbList(&v89);
        MiCopyOnWriteEx((__int64)(v11 << 25) >> 16, 0);
        goto LABEL_32;
      }
      if ( (v22 & 0x400) != 0 )
      {
        MiFlushTbList(&v89);
        MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v21);
        SharedVm = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          goto LABEL_40;
        *SharedVm = 0;
        goto LABEL_42;
      }
      if ( (v22 & 0x800) != 0 )
      {
        if ( MiLockTransitionLeafPage(v11, 0LL) )
        {
          v35 = MI_READ_PTE_LOCK_FREE(v11);
          v37 = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v38 = v35 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
LABEL_114:
          *(_QWORD *)(v36 + 16) = v37;
          v84 = v38;
          *(_QWORD *)v11 = v38;
          if ( (unsigned int)MiPteInShadowRange(v11) )
            MiWritePteShadow(v74);
          _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_61;
        }
        v11 -= 8LL;
      }
      else
      {
        v84 = v22 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
        *(_QWORD *)v11 = v84;
        if ( (unsigned int)MiPteInShadowRange(v11) )
          goto LABEL_48;
      }
    }
    else
    {
      if ( AnyMultiplexedVm )
      {
        if ( (v22 & 1) != 0 )
        {
          v65 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
          v67 = v66 + 48 * v65;
          if ( (v68 & *(_QWORD *)(v67 + 40)) != 0 )
            goto LABEL_31;
          v69 = ((HIBYTE(v26) & 0xF | (16 * ((v26 >> 60) & 7))) << 56) | MiMakeValidPte(v11, v65, v6 | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
          if ( v26 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, v69, v26) )
          {
            v70 = v84;
            if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v84, v69) )
              MiInsertTbFlushEntry(&v89, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
            v71 = 0LL;
            MiLockPageAtDpcInline(v67);
            *(_QWORD *)(v67 + 16) ^= (*(_DWORD *)(v67 + 16) ^ (32 * v85)) & 0x3E0;
            if ( (v70 & 0x42) != 0 )
              v71 = MiCaptureDirtyBitToPfn(v67);
            _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v71 )
              MiReleasePageFileInfo(v19, v71, 1LL);
            goto LABEL_60;
          }
        }
        else
        {
          if ( (v22 & 0x400) != 0 )
          {
            MiFlushTbList(&v89);
            MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v21);
            SharedVm = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
            {
              *SharedVm = 0;
              goto LABEL_42;
            }
LABEL_40:
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SharedVm, retaddr);
LABEL_42:
            __writecr8(v21);
            MmAccessFault(0LL, (__int64)(v11 << 25) >> 16);
            v34 = MiGetSharedVm(AnyMultiplexedVm);
            v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v34);
            v83 = v21;
            v11 -= 8LL;
            *(_DWORD *)(v34 + 4) = 0;
            goto LABEL_61;
          }
          if ( (v22 & 0x800) == 0 )
          {
            v84 = ((unsigned __int16)v22 ^ (unsigned __int16)(32 * v6)) & 0x3E0 ^ (unsigned __int64)v22;
            *(_QWORD *)v11 = v84;
            if ( !(unsigned int)MiPteInShadowRange(v11) )
              goto LABEL_61;
LABEL_48:
            MiWritePteShadow(v39);
            goto LABEL_61;
          }
          if ( MiLockTransitionLeafPage(v11, 0LL) )
          {
            v72 = MI_READ_PTE_LOCK_FREE(v11);
            v73 = 32LL * (v6 & 0x1F);
            v37 = v73 | *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
            v38 = v73 | v72 & 0xFFFFFFFFFFFFFC1FuLL;
            goto LABEL_114;
          }
        }
LABEL_32:
        v11 -= 8LL;
        goto LABEL_61;
      }
      v57 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
      v59 = v58 + 48 * v57;
      v60 = v6 | 0x80000000;
      ValidPte = MiMakeValidPte(v11, v57, v6 | 0x80000000);
      if ( (v26 & 1) != 0 )
      {
        while ( v86 == 1 )
        {
          v59 = MiLockNonPagedPoolPte(v11, &v82);
          v62 = MI_READ_PTE_LOCK_FREE(v11);
          if ( v62 == v26 )
          {
            if ( (v26 & 0x200) != 0 )
              ValidPte |= 0x200uLL;
            v62 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, ValidPte, v26);
            if ( v26 == v62 )
            {
              v26 = v84;
              goto LABEL_93;
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v26 = v62;
          v84 = v62;
          __writecr8(v82);
          v63 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
          v59 = 48 * v63 - 0x58000000000LL;
          ValidPte = MiMakeValidPte(v11, v63, v60);
          if ( (v62 & 1) == 0 )
          {
            v6 = v85;
            goto LABEL_86;
          }
        }
        v82 = 17;
        MiWriteValidPteNewProtection(v11, ValidPte);
LABEL_93:
        v6 = v85;
        *(_QWORD *)(v59 + 16) ^= (*(_DWORD *)(v59 + 16) ^ (32 * v85)) & 0x3E0;
        if ( v86 == 1 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v82);
          v26 = v84;
        }
        if ( (MiFlags & 0x100) == 0 || MI_TIGHTER_PERMISSIONS(v26, ValidPte) )
        {
          MiInsertTbFlushEntry(&v89, (__int64)(v11 << 25) >> 16, 1LL, 0LL);
          v21 = v83;
          goto LABEL_61;
        }
      }
      else
      {
LABEL_86:
        if ( (*(_QWORD *)(v59 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        {
          v82 = MiLockPageInline(v59);
          *(_QWORD *)(v59 + 24) = *(_QWORD *)(v59 + 24) & 0xC000000000000000uLL | 1;
          _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v82);
          ValidPte |= 0x200uLL;
        }
        *(_QWORD *)(v59 + 16) ^= (*(_DWORD *)(v59 + 16) ^ (32 * v6)) & 0x3E0;
        *(_QWORD *)v11 = ValidPte;
        if ( (unsigned int)MiPteInShadowRange(v11) )
          MiWritePteShadow(v64);
      }
      v21 = v83;
    }
LABEL_61:
    v8 = v86;
    v11 += 8LL;
    v19 = v88;
  }
  MiFlushTbList(&v89);
  if ( AnyMultiplexedVm )
  {
    v48 = *((_BYTE *)AnyMultiplexedVm + 195);
    if ( (v48 & 0x10) == 0 )
    {
      if ( (v48 & 8) != 0 )
      {
        *((_BYTE *)AnyMultiplexedVm + 195) = v48 & 0xE7 | 0x10;
        if ( ((MiForcedTrim(AnyMultiplexedVm, v21) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
          && (AnyMultiplexedVm[96] & 0x40) != 0 )
        {
          v49 = *((_QWORD *)AnyMultiplexedVm + 15);
          v50 = *((_QWORD *)AnyMultiplexedVm + 19);
          if ( v49 > v50 )
          {
            v51 = 7;
            v52 = *((_QWORD *)AnyMultiplexedVm + 17);
            if ( (*((_DWORD *)AnyMultiplexedVm + 1) & 0xF) != 0 )
            {
              for ( i = v49 - 1; v52 > i; --v51 )
              {
                v54 = v52 - i;
                if ( v51 )
                {
                  v55 = v54;
                  v56 = *(_QWORD *)&AnyMultiplexedVm[4 * v51 + 20] <= v54;
                  v54 = *(_QWORD *)&AnyMultiplexedVm[4 * v51 + 20];
                  if ( !v56 )
                    v54 = v55;
                }
                if ( v54 )
                {
                  MiTrimWorkingSet((__int64)AnyMultiplexedVm, v54, v21, v51, 0);
                  if ( !v51 )
                    break;
                }
                v52 = *((_QWORD *)AnyMultiplexedVm + 17);
              }
            }
            else
            {
              for ( ; v52 > v50; --v51 )
              {
                v76 = v52 - v50;
                if ( v51 )
                {
                  v77 = v76;
                  v56 = *(_QWORD *)&AnyMultiplexedVm[4 * v51 + 20] <= v76;
                  v76 = *(_QWORD *)&AnyMultiplexedVm[4 * v51 + 20];
                  if ( !v56 )
                    v76 = v77;
                }
                if ( v76 )
                {
                  MiTrimWorkingSet((__int64)AnyMultiplexedVm, v76, v21, v51, 0);
                  if ( !v51 )
                    break;
                }
                v52 = *((_QWORD *)AnyMultiplexedVm + 17);
              }
            }
            MiSimpleAging((__int64)AnyMultiplexedVm, v21);
          }
        }
      }
      v78 = *((_BYTE *)AnyMultiplexedVm + 195);
      if ( (v78 & 4) != 0 )
      {
        *((_BYTE *)AnyMultiplexedVm + 195) = v78 & 0xEB | 0x10;
        MiAgeWorkingSet(
          AnyMultiplexedVm,
          v21,
          1LL,
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * AnyMultiplexedVm[86]) + 5544LL) + 2354LL));
      }
      v79 = *((_BYTE *)AnyMultiplexedVm + 195);
      if ( (v79 & 0x20) != 0 )
      {
        *((_BYTE *)AnyMultiplexedVm + 195) = v79 & 0xCF | 0x10;
        MiReduceWs((__int64)AnyMultiplexedVm, v21, *((_QWORD *)AnyMultiplexedVm + 19));
      }
      v80 = *((_BYTE *)AnyMultiplexedVm + 195);
      if ( (v80 & 0x10) != 0 )
        *((_BYTE *)AnyMultiplexedVm + 195) = v80 & 0xEF;
    }
    v81 = &dword_14036D4C0;
    if ( (AnyMultiplexedVm[96] & 7) != 2 )
      v81 = (LONG *)(AnyMultiplexedVm + 100);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v81, retaddr);
      __writecr8(v21);
      return 1LL;
    }
    *v81 = 0;
    __writecr8(v21);
  }
  return 1LL;
}
