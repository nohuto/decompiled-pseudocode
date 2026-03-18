/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140056870
 * Callers:
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiDeleteBootRange @ 0x140142F9C (MiDeleteBootRange.c)
 *     MmFreeSpecialPool @ 0x140220DA4 (MmFreeSpecialPool.c)
 *     MiDeleteSessionPoolRange @ 0x140221EC4 (MiDeleteSessionPoolRange.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x14058F3A0 (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406E3484 (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     MiReduceWs @ 0x14000B908 (MiReduceWs.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiDeleteTransitionPte @ 0x1400317D0 (MiDeleteTransitionPte.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiImageProtoChargedCommit @ 0x1400B5C88 (MiImageProtoChargedCommit.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x1400E5058 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiWriteWsle @ 0x1400E6D40 (MiWriteWsle.c)
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiUnlockWsle @ 0x14010C8E0 (MiUnlockWsle.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPfnSystemCharged @ 0x14012C56C (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiDriverPageIsDangling @ 0x140218FE4 (MiDriverPageIsDangling.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiDeleteSystemPagableVm(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, char a5, _QWORD *a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  char v9; // r8
  int v10; // r10d
  LONG *v11; // rdi
  __int64 CurrentIrql; // r15
  _KPROCESS *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  __int64 PteShadow; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int64 *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  char v31; // r12
  __int64 v32; // r9
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r11
  int v35; // esi
  char WsleContents; // dl
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // r9
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int64 *v44; // r10
  unsigned __int64 v45; // r11
  __int64 v46; // rbx
  unsigned __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // al
  char v51; // cl
  int v52; // edx
  __int64 v53; // rax
  __int64 updated; // rax
  ULONG_PTR v55; // r11
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v59; // rdi
  int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  ULONG_PTR v63; // r10
  __int64 v64; // rax
  __int64 v65; // r10
  struct _KTHREAD *CurrentThread; // rdi
  int v67; // eax
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // r8
  char v70; // al
  char v71; // al
  LONG *v72; // rcx
  signed __int32 v73[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v74; // [rsp+30h] [rbp-D0h] BYREF
  int v75; // [rsp+38h] [rbp-C8h]
  __int64 v76; // [rsp+40h] [rbp-C0h]
  __int64 v77; // [rsp+48h] [rbp-B8h]
  BOOL v78; // [rsp+50h] [rbp-B0h]
  int v79; // [rsp+54h] [rbp-ACh]
  BOOL v80; // [rsp+58h] [rbp-A8h]
  __int64 v81; // [rsp+60h] [rbp-A0h]
  __int64 v82; // [rsp+68h] [rbp-98h]
  _QWORD v83[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v84; // [rsp+88h] [rbp-78h]
  __int64 v85; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h]
  _QWORD v87[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v89; // [rsp+B4h] [rbp-4Ch]
  __int64 v90; // [rsp+B8h] [rbp-48h]
  __int64 v91; // [rsp+C0h] [rbp-40h]
  __int64 v92; // [rsp+C8h] [rbp-38h]
  _QWORD v93[4]; // [rsp+170h] [rbp+70h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v76 = a1;
  v6 = a1;
  v82 = a4;
  v7 = a4;
  v86 = a2;
  v80 = 0;
  if ( a2 )
    v80 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v78 = 0;
  v9 = *(_BYTE *)(a1 + 192) & 7;
  v10 = 0;
  v84 = 0LL;
  v79 = 0;
  if ( (unsigned __int8)(v9 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
      v78 = dword_140388C68 != 0;
    v10 = 2;
    v79 = 2;
  }
  v81 = *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172));
  v90 = 20LL;
  v75 = a5 & 8;
  v88 = v10;
  v89 = 0;
  v91 = 0LL;
  v92 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v83[0] = 0LL;
    v83[1] = (__int64)(a3 << 25) >> 16;
    v83[2] = (unsigned int)a4;
    if ( v9 == 4 )
    {
      v83[0] = 6LL;
    }
    else if ( v9 == 3 )
    {
      v83[0] = 4LL;
    }
    else
    {
      v83[0] = v83[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v87[1] = 24LL;
    v87[0] = v83;
    EtwTraceKernelEvent((unsigned int)v87, 1, 536870913, 633, 289413890);
  }
  v11 = &dword_140389780;
  if ( (*(_BYTE *)(v6 + 192) & 7) != 2 )
    v11 = (LONG *)(v6 + 200);
  CurrentIrql = KeGetCurrentIrql();
  v77 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11, (unsigned __int8)CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v11, (unsigned __int8)CurrentIrql);
  v11[1] = 0;
  if ( v7 )
  {
    v15 = 0xFFFFF6FB7DBED7F8uLL;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)a3;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(a3, *(_QWORD *)a3);
      v74 = PteShadow;
      if ( !PteShadow )
        goto LABEL_126;
      if ( (PteShadow & 1) != 0 )
        break;
      if ( (PteShadow & 0x400) != 0 )
      {
        if ( !v75 )
        {
          if ( (PteShadow & 2) != 0 )
          {
            ++a6[3];
          }
          else if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow) )
          {
            ++a6[3];
            PrototypePteDirect = MiGetPrototypePteDirect(v57);
            v59 = **(_QWORD **)(((PrototypePteDirect - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            v60 = MiDecrementCombinedPte(v6, PrototypePteDirect);
            v15 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v60 == 3 && v59 == v81 )
              ++a6[1];
          }
          else if ( v80 )
          {
            ++a6[3];
          }
          else
          {
            v61 = MiGetPrototypePteDirect(v57);
            v62 = MiImageProtoChargedCommit(v86, v61);
            v15 = 0xFFFFF6FB7DBED7F8uLL;
            if ( v62 )
              ++a6[3];
          }
          *(_QWORD *)a3 = 0LL;
          if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v15 )
            MiWritePteShadow(a3, 0LL);
        }
        goto LABEL_126;
      }
      if ( (PteShadow & 0x800) == 0 )
      {
        if ( !v75 )
        {
          MiReleasePageFileSpace(v81, PteShadow, 1LL);
          *(_QWORD *)a3 = 0LL;
          if ( a3 < 0xFFFFF6FB7DBED000uLL || a3 > 0xFFFFF6FB7DBED7F8uLL )
            goto LABEL_119;
          MiWritePteShadow(a3, 0LL);
          ++a6[3];
        }
LABEL_126:
        a3 += 8LL;
        if ( !--v82 )
          goto LABEL_133;
        if ( (a3 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v6) || KeShouldYieldProcessor() )
          MiRelockWorkingSetExclusive(v6, (unsigned __int8)CurrentIrql);
        v7 = v82;
        goto LABEL_132;
      }
      v63 = MiLockTransitionLeafPage(a3);
      if ( v63 )
      {
        v64 = *(_QWORD *)a3;
        if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= 0xFFFFF6FB7DBED7F8uLL )
          v64 = MiReadPteShadow(a3, *(_QWORD *)a3);
        v74 = v64;
        if ( v75 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v63) )
          {
            *(_BYTE *)(v65 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_126;
        }
        if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v63) )
        {
          MiDriverPageIsDangling();
          *(_BYTE *)(v63 + 35) &= ~0x20u;
        }
        if ( (unsigned int)MiDeleteTransitionPte((ULONG_PTR *)a3, v63, 0x11u, 1) == 3 )
          ++a6[1];
LABEL_119:
        ++a6[3];
        goto LABEL_126;
      }
LABEL_132:
      v15 = 0xFFFFF6FB7DBED7F8uLL;
      if ( !v7 )
        goto LABEL_133;
    }
    v17 = (__int64)((a3 << 25) - v84) >> 16;
    v18 = MI_GET_PFN_FROM_PTE(&v74, v13, v14, PteShadow);
    v23 = v18;
    v24 = (*(_QWORD *)(v18 + 40) >> 40) & 0x3FFLL;
    v25 = *(_QWORD *)(qword_140388AF0 + 8 * v24);
    if ( v75 )
    {
      if ( (unsigned int)MiIsPfnSystemCharged(v18) )
      {
        MiLockPageAtDpcInline(v26);
        *(_BYTE *)(v23 + 35) &= ~0x20u;
        _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v27 = v25 == v81;
        v6 = v76;
        LOBYTE(CurrentIrql) = v77;
        if ( v27 )
          ++a6[1];
        goto LABEL_126;
      }
      v6 = v76;
      goto LABEL_125;
    }
    v28 = (unsigned __int64 *)((v22 & (v17 >> 9)) - 0x98000000000LL);
    v29 = *v28;
    v30 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL )
    {
      v30 = v21;
      if ( (unsigned __int64)v28 <= v21 )
        v29 = MiReadPteShadow(v28, *v28);
    }
    if ( (v29 & 1) != 0 )
    {
      v30 = v29 >> 60;
      LOBYTE(v30) = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
    }
    else
    {
      LOBYTE(v30) = 10;
    }
    v31 = v30 & 0xF;
    if ( (v30 & 0xF) == 9 )
    {
      LOBYTE(v30) = v30 & 0xF0 | 0xA;
      MiWriteWsle(v30, v17, (unsigned __int8)v30);
LABEL_76:
      ++*a6;
      if ( v79 == 2 )
        MiReturnSystemCharges(v81, 1LL, 1LL);
LABEL_78:
      v6 = v76;
      MiDeleteValidSystemPage(v76, (ULONG_PTR *)a3, a5 & 4 | 0x10u, (__int64)a6);
      if ( (a5 & 1) != 0 )
        goto LABEL_89;
      v74 = 0LL;
      v53 = 0LL;
      if ( (unsigned __int64)&v74 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v74 <= 0xFFFFF6FB7DBED7F8uLL )
        v53 = MiReadPteShadow(&v74, 0LL);
      _InterlockedOr(v73, 0);
      updated = MiUpdatePageFileHighInPte(v53, (unsigned int)KiTbFlushTimeStamp);
      v74 = updated;
      if ( (unsigned __int64)&v74 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v74 <= v55 )
        MiWritePteShadow(&v74, updated);
      v56 = v74;
      *(_QWORD *)a3 = v74;
      if ( a3 >= 0xFFFFF6FB7DBED000uLL && a3 <= v55 )
        MiWritePteShadow(a3, v56);
      if ( !MiGetPteTimeStamp(v56) )
LABEL_89:
        MiInsertTbFlushEntry(&v88, v17, 1LL, 0LL);
LABEL_125:
      LOBYTE(CurrentIrql) = v77;
      goto LABEL_126;
    }
    if ( v78 )
      MI_WSLE_LOG_ACCESS(v76, (_BYTE *)a3);
    v32 = MI_GET_PFN_FROM_PTE(v28, v24, v19, v20);
    if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v37 = *v28;
      v35 = 1;
      if ( (unsigned __int64)v28 >= v34 && (unsigned __int64)v28 <= v33 )
        v37 = MiReadPteShadow(v28, *v28);
      if ( (v37 & 1) != 0 )
        WsleContents = HIBYTE(v37) & 0xF | (16 * ((v37 >> 60) & 7));
      else
        WsleContents = 10;
      v38 = (*(_QWORD *)(v32 + 40) >> 57) & 1LL;
      if ( (WsleContents & 0xF) == 8 )
      {
        MiUnlockWsle(v76, v17, v32);
        WsleContents = MiGetWsleContents(v39, v17);
      }
      if ( (_DWORD)v38 )
      {
        v40 = v76;
        goto LABEL_57;
      }
    }
    else
    {
      v35 = 0;
      WsleContents = (*(_BYTE *)v32 >> 1) & 7;
    }
    v40 = v76;
    --*(_QWORD *)(v76 + 144);
    if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      --*(_QWORD *)(v40 + 128);
LABEL_57:
    MiRemoveWsle(v40, v17, WsleContents, 10);
    if ( v35 )
    {
      v41 = (__int64 *)(((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v42 = *v41;
      if ( (unsigned __int64)v41 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v41 <= 0xFFFFF6FB7DBED7F8uLL )
        v42 = MiReadPteShadow(((v17 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v41);
      v85 = v42;
      v44 = (unsigned __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v85) - 0x58000000000LL);
      if ( ((*(_DWORD *)v44 >> 4) & 0x3FF) == 0 )
      {
        v46 = v84;
        v47 = ((v43 << 25) - v84) >> 16;
        memset(v93, 0, sizeof(v93));
        do
        {
          v48 = *(_QWORD *)v47;
          v49 = 0xFFFFF6FB7DBED000uLL;
          if ( v47 >= 0xFFFFF6FB7DBED000uLL )
          {
            v49 = v45;
            if ( v47 <= v45 )
              LOBYTE(v48) = MiReadPteShadow(v47, *(_QWORD *)v47);
          }
          if ( (v48 & 1) != 0 )
          {
            v50 = MiGetWsleContents(v49, (__int64)((v47 << 25) - v46) >> 16) & 0xF;
            if ( (unsigned __int8)(v50 - 8) > 2u )
              ++*((_DWORD *)v93 + v50);
          }
          v47 += 8LL;
        }
        while ( (v47 & 0xFFF) != 0 );
        v51 = 8;
        while ( 1 )
        {
          v52 = *((_DWORD *)v93 + (unsigned __int8)--v51);
          if ( v52 )
            break;
          if ( !v51 )
            goto LABEL_75;
        }
        *v44 = *v44 & 0xFFFFFFFFFFFE000FuLL | (16 * (v52 & 0x3FF | ((unsigned __int64)(v51 & 7) << 10)));
      }
    }
LABEL_75:
    if ( v31 != 8 )
      goto LABEL_78;
    goto LABEL_76;
  }
LABEL_133:
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) == 0 )
  {
    v67 = HIBYTE(*(_DWORD *)(v6 + 192));
    if ( (v67 & 8) != 0 )
    {
      *(_BYTE *)(v6 + 195) = v67 & 0xF7;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      if ( !MiForcedTrim(v6, (unsigned __int8)CurrentIrql) && (*(_BYTE *)(v6 + 192) & 0x40) != 0 )
      {
        v68 = *(_QWORD *)(v6 + 120);
        if ( v68 > *(_QWORD *)(v6 + 152) )
        {
          if ( (*(_DWORD *)(v6 + 4) & 0xF) != 0 )
            v69 = v68 - 1;
          else
            v69 = *(_QWORD *)(v6 + 152);
          MiReduceWs(v6, CurrentIrql, v69);
        }
      }
    }
    v70 = *(_BYTE *)(v6 + 195);
    if ( (v70 & 4) != 0 )
    {
      *(_BYTE *)(v6 + 195) = v70 & 0xFB;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiAgeWorkingSet(
        v6,
        (unsigned __int8)CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(v6 + 172)) + 5680LL)
                            + 2354LL));
    }
    v71 = *(_BYTE *)(v6 + 195);
    if ( (v71 & 0x10) != 0 )
    {
      *(_BYTE *)(v6 + 195) = v71 & 0xEF;
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      MiReduceWs(v6, CurrentIrql, *(_QWORD *)(v6 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  v72 = &dword_140389780;
  if ( (*(_BYTE *)(v6 + 192) & 7) != 2 )
    v72 = (LONG *)(v6 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v72, retaddr);
  else
    *v72 = 0;
  __writecr8((unsigned __int8)CurrentIrql);
  MiFlushTbList((__int64)&v88, v13);
}
