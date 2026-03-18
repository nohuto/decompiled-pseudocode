/*
 * XREFs of MiDeleteSystemPagableVm @ 0x1400C9480
 * Callers:
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     MmFreeSpecialPool @ 0x14021753C (MmFreeSpecialPool.c)
 *     MiDeleteSessionPoolRange @ 0x140217EB8 (MiDeleteSessionPoolRange.c)
 *     MiUseLargeDriverPage @ 0x1404B0F54 (MiUseLargeDriverPage.c)
 *     MiFreeInitializationCode @ 0x1404B1698 (MiFreeInitializationCode.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MmReturnChargesToLockPagedPool @ 0x1406B694C (MmReturnChargesToLockPagedPool.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     MiWriteWsle @ 0x14006D3C8 (MiWriteWsle.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     MiDeleteTransitionPte @ 0x14007A23C (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x14007A494 (MiLockTransitionLeafPage.c)
 *     MiSimpleAging @ 0x14007EAB8 (MiSimpleAging.c)
 *     MiReduceWs @ 0x14007F54C (MiReduceWs.c)
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 *     MiReturnSystemCharges @ 0x140082C30 (MiReturnSystemCharges.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     MiImageProtoChargedCommit @ 0x140147260 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x140147870 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiDriverPageIsDangling @ 0x140211754 (MiDriverPageIsDangling.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, char a5, _QWORD *a6)
{
  ULONG_PTR v7; // r13
  int v9; // r11d
  char v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  LONG *v14; // rdi
  __int64 CurrentIrql; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rdi
  __int64 v23; // rcx
  bool v24; // zf
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rax
  __int64 v31; // r9
  unsigned __int64 v32; // r11
  int v33; // edi
  unsigned __int8 WsleContents; // r13
  unsigned __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r10
  char v38; // di
  __int64 v39; // r15
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  ULONG_PTR v52; // r10
  __int64 v53; // r10
  __int64 v54; // rcx
  char v55; // al
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // r14
  unsigned int i; // edi
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  bool v63; // cc
  char v64; // al
  __int64 v65; // rcx
  char v66; // al
  unsigned __int64 v67; // r8
  char v68; // al
  LONG *v69; // rcx
  signed __int32 v71[8]; // [rsp+0h] [rbp-100h] BYREF
  int v72; // [rsp+30h] [rbp-D0h]
  __int64 updated; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+40h] [rbp-C0h]
  BOOL v75; // [rsp+48h] [rbp-B8h]
  int v76; // [rsp+4Ch] [rbp-B4h]
  BOOL v77; // [rsp+50h] [rbp-B0h]
  __int64 v78; // [rsp+58h] [rbp-A8h]
  __int64 v79; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v80; // [rsp+68h] [rbp-98h]
  _QWORD v81[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v82; // [rsp+88h] [rbp-78h]
  _DWORD *v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  _QWORD v85[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v86; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v87; // [rsp+B4h] [rbp-4Ch]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  __int64 v90; // [rsp+C8h] [rbp-38h]
  void *retaddr; // [rsp+1B8h] [rbp+B8h]

  v79 = a4;
  v80 = a3;
  v7 = a3;
  v84 = a2;
  v77 = 0;
  if ( a2 )
    v77 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v75 = 0;
  v9 = 0;
  v10 = *(_BYTE *)(a1 + 192) & 7;
  v82 = 0LL;
  v11 = (__int64)(a3 << 25) >> 16;
  v76 = 0;
  if ( (unsigned __int8)(v10 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
      v75 = dword_14036CA68 != 0;
    v9 = 2;
    v76 = 2;
  }
  v12 = *(unsigned __int16 *)(a1 + 172);
  v13 = a5 & 8;
  v72 = v13;
  v78 = *(_QWORD *)(qword_14036C8F8 + 8 * v12);
  v88 = 20LL;
  v86 = v9;
  v87 = 0;
  v89 = 0LL;
  v90 = 0LL;
  if ( (a5 & 8) == 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v81[0] = 0LL;
    v81[1] = v11;
    v81[2] = (unsigned int)a4;
    if ( v10 == 4 )
    {
      v81[0] = 6LL;
    }
    else if ( v10 == 3 )
    {
      v81[0] = 4LL;
    }
    else
    {
      v81[0] = v81[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v85[1] = 24LL;
    v85[0] = v81;
    EtwTraceKernelEvent((int)v85, 1, 0x20000001u, 633, 289413890);
  }
  v14 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v14 = (LONG *)(a1 + 200);
  CurrentIrql = KeGetCurrentIrql();
  v74 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v14, (unsigned __int8)CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v14, (unsigned __int8)CurrentIrql);
  v14[1] = 0;
  if ( v79 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v7);
        updated = v16;
        if ( !v16 )
          goto LABEL_59;
        if ( (v16 & 1) != 0 )
        {
          v19 = (__int64)((v7 << 25) - v82) >> 16;
          v20 = MI_GET_PFN_FROM_PTE(&updated, v17, v18, v16);
          v22 = v20;
          CurrentIrql = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL));
          if ( !v72 )
          {
            v25 = MI_READ_PTE_LOCK_FREE((v21 & (v19 >> 9)) - 0x98000000000LL);
            if ( (v25 & 1) != 0 )
            {
              v27 = v25 >> 60;
              LOBYTE(v27) = HIBYTE(v25) & 0xF | (16 * ((v25 >> 60) & 7));
            }
            else
            {
              LOBYTE(v27) = 10;
            }
            if ( (v27 & 0xF) == 9 )
            {
              LOBYTE(v27) = v27 & 0xF0 | 0xA;
              MiWriteWsle(v27, v19);
LABEL_49:
              ++*a6;
              if ( v76 == 2 )
                MiReturnSystemCharges(v78, 1uLL, 1LL);
LABEL_51:
              MiDeleteValidSystemPage(a1, (_QWORD *)v7, a5 & 4 | 0x10, (__int64)a6);
              if ( (a5 & 1) != 0 )
                goto LABEL_57;
              updated = 0LL;
              v41 = MI_READ_PTE_LOCK_FREE(&updated);
              _InterlockedOr(v71, 0);
              updated = MiUpdatePageFileHighInPte(v41, (unsigned int)KiTbFlushTimeStamp);
              if ( (unsigned int)MiPteInShadowRange(&updated) )
                MiWritePteShadow(&updated);
              *(_QWORD *)v7 = updated;
              if ( (unsigned int)MiPteInShadowRange(v7) )
                MiWritePteShadow(v43);
              if ( !MiGetPteTimeStamp(v42) )
LABEL_57:
                MiInsertTbFlushEntry(&v86, v19, 1LL, 0LL);
LABEL_58:
              v13 = v72;
              LOBYTE(CurrentIrql) = v74;
              goto LABEL_59;
            }
            v30 = (_DWORD *)MI_GET_PFN_FROM_PTE(v29, v26, v28, v29);
            v83 = v30;
            if ( v19 >= v32 && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v33 = 0;
              WsleContents = (*v30 >> 2) & 7;
              goto LABEL_45;
            }
            v35 = MI_READ_PTE_LOCK_FREE(v31);
            if ( (v35 & 1) != 0 )
              v38 = HIBYTE(v35) & 0xF | (16 * ((v35 >> 60) & 7));
            else
              v38 = 10;
            WsleContents = v38;
            if ( v75 )
            {
              MI_WSLE_LOG_ACCESS(a1, v36);
              v37 = (__int64)v83;
            }
            v39 = (*(_QWORD *)(v37 + 40) >> 57) & 1LL;
            if ( (v38 & 0xF) == 8 )
            {
              MiUnlockWsle(a1, v19, v37);
              WsleContents = MiGetWsleContents(v40, v19);
              v33 = 1;
            }
            else
            {
              v33 = 0;
            }
            if ( !(_DWORD)v39 )
            {
              v32 = 0xFFFFF68000000000uLL;
LABEL_45:
              --*(_QWORD *)(a1 + 144);
              if ( v19 < v32 || v19 > 0xFFFFF6FFFFFFFFFFuLL )
                --*(_QWORD *)(a1 + 128);
            }
            MiRemoveWsle(a1, v19, WsleContents, 10LL);
            v7 = v80;
            if ( v33 == 1 )
              goto LABEL_49;
            goto LABEL_51;
          }
          if ( !(unsigned int)MiIsPfnSystemCharged(v20) )
            goto LABEL_58;
          MiLockPageAtDpcInline(v23);
          *(_BYTE *)(v22 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v24 = CurrentIrql == v78;
          LOBYTE(CurrentIrql) = v74;
          v13 = v72;
          if ( v24 )
            ++a6[1];
          goto LABEL_59;
        }
        if ( (v16 & 0x400) != 0 )
        {
          if ( v13 )
            goto LABEL_59;
          if ( (v16 & 2) != 0 )
            goto LABEL_73;
          if ( MI_PROTO_FORMAT_COMBINED(v16) )
          {
            ++a6[3];
            PrototypePteDirect = MiGetPrototypePteDirect(v46, v44, v45, v46);
            v48 = **(_QWORD **)(((PrototypePteDirect - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
            if ( (unsigned int)MiDecrementCombinedPte(PrototypePteDirect) == 3 && v48 == v78 )
              ++a6[1];
            goto LABEL_74;
          }
          if ( v77
            || (v49 = MiGetPrototypePteDirect(v46, v44, v45, v46), (unsigned int)MiImageProtoChargedCommit(v84, v49)) )
          {
LABEL_73:
            ++a6[3];
          }
LABEL_74:
          *(_QWORD *)v7 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v7) )
            MiWritePteShadow(v50);
          goto LABEL_59;
        }
        if ( (v16 & 0x800) != 0 )
          break;
        if ( !v13 )
        {
          MiReleasePageFileSpace(v78, v16, 1LL);
          *(_QWORD *)v7 = 0LL;
          if ( !(unsigned int)MiPteInShadowRange(v7) )
            goto LABEL_87;
          MiWritePteShadow(v54);
          ++a6[3];
        }
LABEL_59:
        v7 += 8LL;
        v80 = v7;
        if ( !--v79 )
          goto LABEL_91;
        if ( (v7 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
          MiRelockWorkingSetExclusive(a1, (unsigned __int8)CurrentIrql);
      }
      if ( MiLockTransitionLeafPage(v7, 0LL) )
      {
        updated = MI_READ_PTE_LOCK_FREE(v7);
        if ( !v13 )
        {
          if ( (a5 & 4) != 0 && (unsigned int)MiIsPfnSystemCharged(v52) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v52 + 35) &= ~0x20u;
          }
          LOBYTE(v51) = 17;
          if ( (unsigned int)MiDeleteTransitionPte((__int64 *)v7, v52, v51, 1LL) == 3 )
            ++a6[1];
LABEL_87:
          ++a6[3];
          goto LABEL_59;
        }
        if ( (unsigned int)MiIsPfnSystemCharged(v52) )
        {
          *(_BYTE *)(v53 + 35) &= ~0x20u;
          ++a6[1];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_59;
      }
    }
  }
LABEL_91:
  v55 = *(_BYTE *)(a1 + 195);
  if ( (v55 & 0x10) == 0 )
  {
    if ( (v55 & 8) != 0 )
    {
      *(_BYTE *)(a1 + 195) = v55 & 0xE7 | 0x10;
      if ( ((MiForcedTrim(a1, (unsigned __int8)CurrentIrql) + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0
        && (*(_BYTE *)(a1 + 192) & 0x40) != 0 )
      {
        v56 = *(_QWORD *)(a1 + 120);
        v57 = *(_QWORD *)(a1 + 152);
        if ( v56 > v57 )
        {
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
          {
            v58 = *(_QWORD *)(a1 + 136);
            v59 = v56 - 1;
            for ( i = 7; v58 > v59; --i )
            {
              v61 = v58 - v59;
              if ( i )
              {
                v62 = v61;
                v63 = *(_QWORD *)(a1 + 8LL * i + 40) <= v61;
                v61 = *(_QWORD *)(a1 + 8LL * i + 40);
                if ( !v63 )
                  v61 = v62;
              }
              if ( v61 )
              {
                MiTrimWorkingSet(a1, v61, CurrentIrql, i, 0);
                if ( !i )
                  break;
              }
              v58 = *(_QWORD *)(a1 + 136);
            }
            MiSimpleAging(a1, CurrentIrql);
          }
          else
          {
            MiReduceWs(a1, CurrentIrql, v57);
          }
        }
      }
    }
    v64 = *(_BYTE *)(a1 + 195);
    if ( (v64 & 4) != 0 )
    {
      v65 = *(unsigned __int16 *)(a1 + 172);
      *(_BYTE *)(a1 + 195) = v64 & 0xEB | 0x10;
      MiAgeWorkingSet(
        a1,
        (unsigned __int8)CurrentIrql,
        1LL,
        *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8 * v65) + 5544LL) + 2354LL));
    }
    v66 = *(_BYTE *)(a1 + 195);
    if ( (v66 & 0x20) != 0 )
    {
      v67 = *(_QWORD *)(a1 + 152);
      *(_BYTE *)(a1 + 195) = v66 & 0xCF | 0x10;
      MiReduceWs(a1, CurrentIrql, v67);
    }
    v68 = *(_BYTE *)(a1 + 195);
    if ( (v68 & 0x10) != 0 )
      *(_BYTE *)(a1 + 195) = v68 & 0xEF;
  }
  v69 = &dword_14036D4C0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 2 )
    v69 = (LONG *)(a1 + 200);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v69, retaddr);
  else
    *v69 = 0;
  __writecr8((unsigned __int8)CurrentIrql);
  return MiFlushTbList(&v86);
}
