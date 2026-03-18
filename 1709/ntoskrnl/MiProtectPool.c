/*
 * XREFs of MiProtectPool @ 0x140065070
 * Callers:
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockNonPagedPoolPte @ 0x14002F5F4 (MiLockNonPagedPoolPte.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiVaIsSessionSpecialPool @ 0x140066694 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400DC79C (MI_TIGHTER_PERMISSIONS.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1400F5010 (MiGetAvailablePagesBelowPriority.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiFindLargeMapping @ 0x1402220B8 (MiFindLargeMapping.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned int ProtectionMask; // r13d
  unsigned __int64 v6; // rdi
  int v7; // r14d
  unsigned __int16 *AnyMultiplexedVm; // r15
  int v9; // ebx
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r10
  int SystemRegionType; // r11d
  __int64 v15; // r10
  int v16; // r11d
  LONG *SharedVm; // rbx
  KIRQL v19; // di
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r11
  unsigned __int64 PteShadow; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // rbx
  int v27; // eax
  LONG *v28; // rax
  LONG *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 TransitionPte; // rax
  ULONG_PTR v40; // r9
  signed __int64 v41; // rdx
  bool v42; // zf
  signed __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned __int64 ValidPte; // rdi
  __int64 v48; // rax
  signed __int64 v49; // rcx
  signed __int64 v50; // rax
  __int64 v51; // rax
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v53; // eax
  unsigned int v54; // edi
  unsigned int v55; // eax
  _QWORD *v56; // r13
  __int64 v57; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // r12
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r8
  unsigned int v63; // ecx
  unsigned __int64 v64; // r9
  __int64 v65; // rdx
  _QWORD *v66; // rax
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rbx
  char v69; // r11
  unsigned __int64 v70; // r10
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r10
  unsigned int v74; // r9d
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r14
  __int64 v78; // rdi
  LONG *v79; // rax
  LONG *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r10
  __int64 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int8 v85; // r12
  __int64 v86; // r13
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rsi
  unsigned int v89; // ebx
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rsi
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rax
  bool v94; // cc
  char v95; // al
  char v96; // al
  unsigned __int64 v97; // rbx
  unsigned __int64 i; // rdx
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rdx
  unsigned __int64 v102; // rax
  volatile LONG *v103; // rcx
  char v104; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v105[7]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v106; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v108; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+50h] [rbp-B0h]
  int v110; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v111; // [rsp+64h] [rbp-9Ch]
  __int64 v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+70h] [rbp-90h]
  __int64 v114; // [rsp+78h] [rbp-88h]
  int v115; // [rsp+120h] [rbp+20h] BYREF
  __int16 v116; // [rsp+124h] [rbp+24h]
  __int64 v117; // [rsp+128h] [rbp+28h]
  __int64 v118; // [rsp+130h] [rbp+30h]
  __int64 v119; // [rsp+138h] [rbp+38h]
  void *retaddr; // [rsp+228h] [rbp+128h]

  if ( (a3 & 0x10) != 0 && (MiFlags & 0x10000) != 0 )
    a3 &= ~0x10u;
  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask < 8 || ProtectionMask == 24) && (ProtectionMask & 5) != 5 )
  {
    v6 = v3 + v4 - 1;
    v7 = 0;
    AnyMultiplexedVm = 0LL;
    LODWORD(v107) = 0;
    v9 = 0;
    v10 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    SystemRegionType = MiGetSystemRegionType(v4);
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = (unsigned __int16 *)&unk_140389660;
      goto LABEL_21;
    }
    if ( SystemRegionType == 13 || SystemRegionType == 7 )
    {
      if ( ((v6 ^ v13) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        return 0LL;
      if ( SystemRegionType == 7 )
        AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(2LL);
    }
    else
    {
      if ( (unsigned int)MiVaIsSessionSpecialPool(v13) )
      {
        if ( ((v6 ^ v15) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        {
          v9 = 2;
          AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                                + 3008);
          goto LABEL_21;
        }
        return 0LL;
      }
      if ( v16 != 5 || (unsigned int)MiFindLargeMapping(v15, v6) )
        return 0LL;
      v7 = 1;
      LODWORD(v107) = 1;
    }
LABEL_21:
    v112 = 20LL;
    v108 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v110 = v9;
    v111 = 0;
    v113 = 0LL;
    v114 = 0LL;
    if ( AnyMultiplexedVm )
    {
      v109 = *(_QWORD *)(qword_140388AF0 + 8LL * AnyMultiplexedVm[86]);
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v19 = ExAcquireSpinLockExclusive(SharedVm);
      v104 = v19;
      SharedVm[1] = 0;
    }
    else
    {
      v19 = 17;
      v109 = (unsigned __int64)&MiSystemPartition;
      v104 = 17;
    }
    if ( v10 <= v108 )
    {
      v20 = 0xFFFFF6FB7DBED000uLL;
      v21 = 0xFFFFF6FB7DBED7F8uLL;
      do
      {
        PteShadow = *(_QWORD *)v10;
        if ( v10 >= v20 && v10 <= v21 )
          PteShadow = MiReadPteShadow(v10, *(_QWORD *)v10);
        v106 = PteShadow;
        if ( ProtectionMask == 24 )
        {
          if ( !AnyMultiplexedVm )
          {
            if ( v7 == 1 )
            {
              v36 = MiLockNonPagedPoolPte((__int64 *)v10, v105);
              PteShadow = *(_QWORD *)v10;
              v37 = v36;
              if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                PteShadow = MiReadPteShadow(v10, *(_QWORD *)v10);
              v106 = PteShadow;
            }
            else
            {
              v37 = MI_GET_PFN_FROM_PTE(&v106, v11, v12, v20);
              v105[0] = MiLockPageInline(v37);
            }
            *(_QWORD *)(v37 + 16) = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v38 = MI_GET_PAGE_FRAME_FROM_PTE(&v106);
            TransitionPte = MiMakeTransitionPte(v38, 24LL);
            v41 = TransitionPte;
            if ( v7 == 1 )
            {
              while ( 1 )
              {
                v43 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v41, PteShadow);
                v42 = PteShadow == v43;
                PteShadow = v43;
                if ( v42 )
                  break;
                v106 = v43;
                v44 = MI_GET_PAGE_FRAME_FROM_PTE(&v106);
                v41 = MiMakeTransitionPte(v44, 24LL);
              }
              if ( (v106 & 0x200) != 0 )
                *(_QWORD *)(v37 + 24) = *(_QWORD *)(v37 + 24) & 0xC000000000000000uLL | 0x10000;
            }
            else
            {
              *(_QWORD *)v10 = TransitionPte;
              if ( v10 >= v40 && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow(v10, TransitionPte);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v105[0]);
            MiInsertTbFlushEntry(&v110, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
LABEL_99:
            v19 = v104;
            goto LABEL_100;
          }
          if ( (PteShadow & 1) != 0 )
          {
            v24 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(&v106, v11, v12, v20) + 40);
            if ( (v24 & 0x200000000000000LL) != 0 )
              goto LABEL_33;
            v26 = (__int64)((v10 << 25) - (v25 << 25)) >> 16;
            if ( dword_140388C68 )
              MI_WSLE_LOG_ACCESS((__int64)AnyMultiplexedVm, (_BYTE *)v10);
            if ( (MiGetWsleContents(v24, v26) & 0xF) == 8 )
              goto LABEL_102;
            v27 = MiTbFlushType(AnyMultiplexedVm);
            v117 = 20LL;
            v115 = v27;
            v116 = 4;
            v118 = 0LL;
            v119 = 0LL;
            MiInsertTbFlushEntry(&v115, v26, 1LL, 0LL);
            if ( !MiFreeWsleList((__int64)AnyMultiplexedVm, (__int64)&v115, 0) )
              v10 -= 8LL;
            goto LABEL_100;
          }
          if ( (PteShadow & 0x400) != 0 )
          {
            MiFlushTbList((__int64)&v110, (_KPROCESS *)v11);
            MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
            v28 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
            else
              *v28 = 0;
            __writecr8(v19);
            MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0LL, 0LL);
            v29 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v19 = ExAcquireSpinLockExclusive(v29);
            v104 = v19;
            v10 -= 8LL;
            v29[1] = 0;
            goto LABEL_100;
          }
          if ( (PteShadow & 0x800) != 0 )
          {
            v30 = MiLockTransitionLeafPage(v10);
            v20 = 0xFFFFF6FB7DBED000uLL;
            v31 = v30;
            if ( !v30 )
            {
              v10 -= 8LL;
LABEL_101:
              v21 = 0xFFFFF6FB7DBED7F8uLL;
              goto LABEL_102;
            }
            v32 = *(_QWORD *)v10;
            v11 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              v32 = MiReadPteShadow(v10, *(_QWORD *)v10);
              v11 = 0xFFFFF6FB7DBED7F8uLL;
            }
            v33 = v32 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v34 = *(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
            v106 = v33;
            *(_QWORD *)(v31 + 16) = v34;
            *(_QWORD *)v10 = v33;
            if ( v10 >= v20 && v10 <= 0xFFFFF6FB7DBED7F8uLL )
              MiWritePteShadow(v10, v33);
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_100:
            v20 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_101;
          }
          v35 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v106 = v35;
          *(_QWORD *)v10 = v35;
          if ( v10 < v20 || v10 > v21 )
            goto LABEL_102;
          v11 = v35;
        }
        else
        {
          if ( !AnyMultiplexedVm )
          {
            v45 = MI_GET_PAGE_FRAME_FROM_PTE(&v106);
            v46 = 48 * v45 - 0x58000000000LL;
            ValidPte = MiMakeValidPte(v10, v45, ProtectionMask | 0x80000000);
            if ( (PteShadow & 1) == 0 )
            {
LABEL_87:
              if ( (*(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
              {
                v105[0] = MiLockPageInline(v46);
                *(_QWORD *)(v46 + 24) = *(_QWORD *)(v46 + 24) & 0xC000000000000000uLL | 1;
                _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v105[0]);
                ValidPte |= 0x200uLL;
              }
              v20 = 0xFFFFF6FB7DBED000uLL;
              *(_QWORD *)(v46 + 16) ^= (*(_DWORD *)(v46 + 16) ^ (32 * ProtectionMask)) & 0x3E0;
              *(_QWORD *)v10 = ValidPte;
              v21 = 0xFFFFF6FB7DBED7F8uLL;
              if ( v10 < 0xFFFFF6FB7DBED000uLL || v10 > 0xFFFFF6FB7DBED7F8uLL )
              {
                v19 = v104;
              }
              else
              {
                MiWritePteShadow(v10, ValidPte);
                v19 = v104;
                v20 = 0xFFFFF6FB7DBED000uLL;
              }
              goto LABEL_102;
            }
            while ( (_DWORD)v107 == 1 )
            {
              v46 = MiLockNonPagedPoolPte((__int64 *)v10, v105);
              v48 = *(_QWORD *)v10;
              if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                v48 = MiReadPteShadow(v10, *(_QWORD *)v10);
              if ( v48 == PteShadow )
              {
                v49 = ValidPte | 0x200;
                if ( (PteShadow & 0x200) == 0 )
                  v49 = ValidPte;
                ValidPte = v49;
                v50 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v49, PteShadow);
                v42 = PteShadow == v50;
                PteShadow = v50;
                if ( v42 )
                {
                  PteShadow = v106;
                  goto LABEL_94;
                }
                _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v105[0]);
                v106 = v50;
              }
              else
              {
                _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v105[0]);
                PteShadow = v48;
                v106 = v48;
              }
              v51 = MI_GET_PAGE_FRAME_FROM_PTE(&v106);
              v46 = 48 * v51 - 0x58000000000LL;
              ValidPte = MiMakeValidPte(v10, v51, ProtectionMask | 0x80000000);
              if ( (PteShadow & 1) == 0 )
                goto LABEL_87;
            }
            v105[0] = 17;
            MiWriteValidPteNewPage((unsigned __int64 *)v10, ValidPte);
LABEL_94:
            *(_QWORD *)(v46 + 16) ^= (*(_DWORD *)(v46 + 16) ^ (32 * ProtectionMask)) & 0x3E0;
            if ( (_DWORD)v107 == 1 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v105[0]);
              PteShadow = v106;
            }
            if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(PteShadow, ValidPte) )
              MiInsertTbFlushEntry(&v110, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
            goto LABEL_99;
          }
          if ( (PteShadow & 1) != 0 )
          {
            v76 = MI_GET_PAGE_FRAME_FROM_PTE(&v106);
            v77 = 48 * v76 - 0x58000000000LL;
            v23 = 0x200000000000000LL;
            if ( (*(_QWORD *)(v77 + 40) & 0x200000000000000LL) != 0 )
            {
LABEL_33:
              MiFlushTbList((__int64)&v110, (_KPROCESS *)v23);
              MiCopyOnWriteEx((__int64)(v10 << 25) >> 16, (__int64 *)v10, -1LL, v19, 0);
            }
            else
            {
              v11 = ((HIBYTE(PteShadow) & 0xF | (16 * ((PteShadow >> 60) & 7))) << 56) | MiMakeValidPte(
                                                                                           v10,
                                                                                           v76,
                                                                                           ProtectionMask | 0x80000000) & 0x80FFFFFFFFFFFFFFuLL;
              if ( PteShadow == _InterlockedCompareExchange64((volatile signed __int64 *)v10, v11, PteShadow) )
              {
                if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(PteShadow, v11) )
                  MiInsertTbFlushEntry(&v110, (__int64)(v10 << 25) >> 16, 1LL, 0LL);
                v78 = 0LL;
                MiLockPageAtDpcInline(v77);
                *(_QWORD *)(v77 + 16) ^= (*(_DWORD *)(v77 + 16) ^ (32 * ProtectionMask)) & 0x3E0;
                if ( (PteShadow & 0x42) != 0 )
                  v78 = MiCaptureDirtyBitToPfn(v77);
                _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v78 )
                  MiReleasePageFileInfo(v109, v78, 1LL);
                goto LABEL_99;
              }
            }
            v10 -= 8LL;
            goto LABEL_100;
          }
          if ( (PteShadow & 0x400) != 0 )
          {
            MiFlushTbList((__int64)&v110, (_KPROCESS *)v11);
            MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v19);
            v79 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            ExReleaseSpinLockExclusiveFromDpcLevel(v79);
            __writecr8(v19);
            MmAccessFault(0LL, (__int64)(v10 << 25) >> 16, 0LL, 0LL);
            v80 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v19 = ExAcquireSpinLockExclusive(v80);
            v104 = v19;
            v10 -= 8LL;
            v80[1] = 0;
            goto LABEL_100;
          }
          if ( (PteShadow & 0x800) != 0 )
          {
            v81 = MiLockTransitionLeafPage(v10);
            v20 = 0xFFFFF6FB7DBED000uLL;
            v82 = v81;
            if ( v81 )
            {
              v83 = *(_QWORD *)v10;
              v21 = 0xFFFFF6FB7DBED7F8uLL;
              if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
                v83 = MiReadPteShadow(v10, *(_QWORD *)v10);
              v11 = 32LL * (ProtectionMask & 0x1F);
              v84 = v11 | v83 & 0xFFFFFFFFFFFFFC1FuLL;
              *(_QWORD *)(v82 + 16) = v11 | *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v106 = v84;
              *(_QWORD *)v10 = v84;
              if ( v10 >= v20 && v10 <= v21 )
              {
                MiWritePteShadow(v10, v84);
                v20 = 0xFFFFF6FB7DBED000uLL;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_102;
            }
            v10 -= 8LL;
            goto LABEL_101;
          }
          v11 = PteShadow ^ ((unsigned __int16)PteShadow ^ (unsigned __int16)(32 * ProtectionMask)) & 0x3E0;
          v106 = v11;
          *(_QWORD *)v10 = v11;
          if ( v10 < v20 || v10 > v21 )
            goto LABEL_102;
        }
        MiWritePteShadow(v10, v11);
        v20 = 0xFFFFF6FB7DBED000uLL;
LABEL_102:
        v7 = v107;
        v10 += 8LL;
      }
      while ( v10 <= v108 );
    }
    MiFlushTbList((__int64)&v110, (_KPROCESS *)v11);
    if ( !AnyMultiplexedVm )
      return 1LL;
    CurrentThread = KeGetCurrentThread();
    v53 = *((_DWORD *)AnyMultiplexedVm + 48);
    v108 = (unsigned __int64)CurrentThread;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
    {
      v85 = v104;
LABEL_197:
      v103 = &dword_140389780;
      if ( (AnyMultiplexedVm[96] & 7) != 2 )
        v103 = (volatile LONG *)(AnyMultiplexedVm + 100);
      ExReleaseSpinLockExclusiveFromDpcLevel(v103);
      __writecr8(v85);
      return 1LL;
    }
    v54 = 7;
    v55 = HIBYTE(v53);
    if ( (v55 & 8) == 0 )
    {
      v85 = v104;
      goto LABEL_174;
    }
    *((_BYTE *)AnyMultiplexedVm + 195) = v55 & 0xF7;
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
    v56 = *(_QWORD **)(qword_140388AF0 + 8LL * AnyMultiplexedVm[86]);
    v107 = v56[710];
    v57 = v107;
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v56, 6LL);
    v59 = *((_QWORD *)AnyMultiplexedVm + 17);
    v60 = *(_QWORD *)(v57 + 2408);
    v61 = *(_QWORD *)(*((_QWORD *)AnyMultiplexedVm + 2) + 32LL);
    if ( v59 <= v61 )
    {
      v85 = v104;
    }
    else
    {
      v62 = v56[722];
      v63 = 1;
      v64 = v59 - v61;
      v109 = v62;
      v65 = (15 * v64 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v66 = AnyMultiplexedVm + 24;
      v67 = (v65 + ((15 * v64 - v65) >> 1)) >> 6;
      v68 = 0LL;
      do
      {
        v68 += *v66;
        if ( v68 >= v67 )
          break;
        ++v63;
        ++v66;
      }
      while ( v63 < 8 );
      v69 = AnyMultiplexedVm[96] & 7;
      if ( v69 )
      {
        v70 = 16 * v60;
        v71 = v64;
        v72 = v62 / 0xA;
        if ( v70 <= v72 )
          v72 = v70;
        if ( v64 >= v109 )
          v71 = v109;
        v60 = v72 * (100 * v71 / v109) / 0x64;
        if ( v60 > v64 / 0xA )
          v60 = v64 / 0xA;
      }
      if ( AvailablePagesBelowPriority >= v60 )
        goto LABEL_155;
      v73 = v60 - AvailablePagesBelowPriority;
      v74 = 7;
      if ( v73 < 0x10 )
        v73 = 16LL;
      v75 = 0LL;
      while ( 1 )
      {
        v75 += *(_QWORD *)&AnyMultiplexedVm[4 * v74 + 20];
        if ( v75 >= v73 )
          break;
        if ( --v74 == 1 )
          goto LABEL_151;
      }
      v75 = v73;
LABEL_151:
      if ( v75 && (v69 || AvailablePagesBelowPriority < v56[621] >> 1) )
      {
        v85 = v104;
        v86 = MiTrimWorkingSet((__int64)AnyMultiplexedVm, v75, v104, v74, 57);
        *(_QWORD *)(v107 + 2488) += v86;
      }
      else
      {
LABEL_155:
        v85 = v104;
        v86 = 0LL;
      }
      if ( v68 < v67 || (*((_DWORD *)AnyMultiplexedVm + 1) & 0x3FFF) == 0 )
        MiAgeWorkingSet(
          AnyMultiplexedVm,
          v85,
          1LL,
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * AnyMultiplexedVm[86]) + 5680LL) + 2354LL));
      if ( v86 )
        goto LABEL_174;
    }
    if ( (AnyMultiplexedVm[96] & 0x40) == 0
      || (v87 = *((_QWORD *)AnyMultiplexedVm + 15), v88 = *((_QWORD *)AnyMultiplexedVm + 19), v87 <= v88) )
    {
LABEL_174:
      v95 = *((_BYTE *)AnyMultiplexedVm + 195);
      if ( (v95 & 4) != 0 )
      {
        *((_BYTE *)AnyMultiplexedVm + 195) = v95 & 0xFB;
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
        MiAgeWorkingSet(
          AnyMultiplexedVm,
          v85,
          1LL,
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * AnyMultiplexedVm[86]) + 5680LL) + 2354LL));
      }
      v96 = *((_BYTE *)AnyMultiplexedVm + 195);
      if ( (v96 & 0x10) != 0 )
      {
        *((_BYTE *)AnyMultiplexedVm + 195) = v96 & 0xEF;
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
        v97 = *((_QWORD *)AnyMultiplexedVm + 19);
        for ( i = *((_QWORD *)AnyMultiplexedVm + 17); i > v97; --v54 )
        {
          v99 = i - v97;
          if ( v54 )
          {
            v100 = v99;
            v94 = *(_QWORD *)&AnyMultiplexedVm[4 * v54 + 20] <= v99;
            v99 = *(_QWORD *)&AnyMultiplexedVm[4 * v54 + 20];
            if ( !v94 )
              v99 = v100;
          }
          if ( v99 )
          {
            MiTrimWorkingSet((__int64)AnyMultiplexedVm, v99, v85, v54, 16);
            if ( !v54 )
              break;
          }
          i = *((_QWORD *)AnyMultiplexedVm + 17);
        }
        MiSimpleAging((__int64)AnyMultiplexedVm, v85);
      }
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      goto LABEL_197;
    }
    v89 = 7;
    v90 = *((_QWORD *)AnyMultiplexedVm + 17);
    if ( (*((_DWORD *)AnyMultiplexedVm + 1) & 0xF) != 0 )
    {
      v91 = v87 - 1;
      if ( v90 <= v87 - 1 )
      {
LABEL_173:
        MiSimpleAging((__int64)AnyMultiplexedVm, v85);
        goto LABEL_174;
      }
      do
      {
        v92 = v90 - v91;
        if ( v89 )
        {
          v93 = v92;
          v94 = *(_QWORD *)&AnyMultiplexedVm[4 * v89 + 20] <= v92;
          v92 = *(_QWORD *)&AnyMultiplexedVm[4 * v89 + 20];
          if ( !v94 )
            v92 = v93;
        }
        if ( v92 )
        {
          MiTrimWorkingSet((__int64)AnyMultiplexedVm, v92, v85, v89, 16);
          if ( !v89 )
            break;
        }
        v90 = *((_QWORD *)AnyMultiplexedVm + 17);
        --v89;
      }
      while ( v90 > v91 );
    }
    else
    {
      if ( v90 <= v88 )
        goto LABEL_173;
      do
      {
        v101 = v90 - v88;
        if ( v89 )
        {
          v102 = v101;
          v94 = *(_QWORD *)&AnyMultiplexedVm[4 * v89 + 20] <= v101;
          v101 = *(_QWORD *)&AnyMultiplexedVm[4 * v89 + 20];
          if ( !v94 )
            v101 = v102;
        }
        if ( v101 )
        {
          MiTrimWorkingSet((__int64)AnyMultiplexedVm, v101, v85, v89, 16);
          if ( !v89 )
            break;
        }
        v90 = *((_QWORD *)AnyMultiplexedVm + 17);
        --v89;
      }
      while ( v90 > v88 );
    }
    CurrentThread = (struct _KTHREAD *)v108;
    goto LABEL_173;
  }
  return 0LL;
}
