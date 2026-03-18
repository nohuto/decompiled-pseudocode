/*
 * XREFs of MiCopyPage @ 0x14005A3E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiCopyHeaderIfResident @ 0x1400B6F80 (MiCopyHeaderIfResident.c)
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiTradeActivePage @ 0x1400CDE24 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x1400CE7A0 (MiSwapStackPageNoDpc.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x140223AD4 (MiSplitDirectMapPage.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushHyperSpace @ 0x140102EA4 (MiFlushHyperSpace.c)
 *     MiUserPdeOrAbove @ 0x1401155A0 (MiUserPdeOrAbove.c)
 *     KeCopyPrivilegedPage @ 0x14014C060 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, char a4)
{
  ULONG_PTR v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // esi
  int PagePrivilege; // eax
  __int64 v10; // rcx
  char v11; // r12
  char v12; // bl
  unsigned __int64 v13; // r8
  unsigned __int8 v14; // r12
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 HyperPte; // rbx
  unsigned __int64 v24; // rdx
  unsigned int *v25; // r15
  int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  _KPROCESS *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  char v32; // al
  __int64 v33; // r12
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // r14
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // r10
  unsigned __int64 v42; // rbx
  int v43; // ecx
  char v44; // al
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r14
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rcx
  int v55; // [rsp+30h] [rbp-D0h]
  unsigned int v57; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+54h] [rbp-ACh]
  __int16 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  BOOL v63; // [rsp+68h] [rbp-98h]
  unsigned int *v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  __int128 v66; // [rsp+80h] [rbp-80h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v69; // [rsp+A4h] [rbp-5Ch]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]

  v64 = a3;
  v5 = a1;
  v6 = 48 * a2 - 0x58000000000LL;
  v65 = v6;
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = -1073741823;
  v55 = a4 & 4;
  v57 = v55 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v6, a4 & 4, &v67);
  v11 = 4;
  if ( PagePrivilege )
  {
    if ( (a4 & 0x12) != 0 )
    {
      v12 = 2;
    }
    else if ( (MiFlags & 0x10000) == 0
           || (a4 & 8) != 0
           || (PagePrivilege & 1) == 0
           || (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (MiFlags & 0x40000) != 0 && (a4 & 8) == 0 && (PagePrivilege & 2) != 0 )
        v12 = 2;
      else
        v12 = 4;
    }
    else
    {
      v12 = 2;
    }
  }
  else
  {
    v12 = 0;
    if ( (a4 & 2) == 0 )
      v12 = 4;
  }
  v13 = 0xFFFF800000000000uLL;
  if ( (v12 & 2) != 0 )
  {
    *((_QWORD *)&v66 + 1) = 0LL;
    v14 = 17;
    v63 = (a4 & 2) != 0;
    if ( (MiFlags & 0x40000) != 0 )
      MiFlushEntireTbDueToAttributeChange(v10, 0xFFFFF68000000000uLL, 0xFFFF800000000000uLL);
    v15 = 0;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_33;
    if ( (a4 & 2) != 0 )
    {
      v66 = v67;
    }
    else
    {
      *(_QWORD *)&v66 = (__int64)(*(_QWORD *)(v7 + 8) << 25) >> 16;
      if ( (unsigned __int64)v66 < 0xFFFF800000000000uLL )
      {
        v12 |= 8u;
        *((_QWORD *)&v66 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v55 )
          v14 = MiLockPageInline(v7);
        MiMarkPfnVerified(v7, 4LL);
        MiAbortCombineScan(v7);
        v16 = v55;
        if ( v55 )
          goto LABEL_29;
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v14);
        v14 = 17;
      }
      else
      {
        *((_QWORD *)&v66 + 1) = 0LL;
      }
    }
    v16 = v55;
LABEL_29:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v16 )
        v14 = MiLockPageInline(v7);
      v15 = ((*(_DWORD *)(v7 + 40) << 12) + (*(_DWORD *)(v7 + 8) & 0xFFF)) | 1;
    }
LABEL_33:
    v17 = KeCopyPrivilegedPage(a1, (unsigned int)&v66, a2, (unsigned int)&v67, v15, v63);
    v8 = v17;
    if ( v17 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v17);
    if ( v14 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v14);
    }
    if ( (MiFlags & 0x40000) == 0 || (a4 & 2) != 0 )
    {
      v5 = a1;
      v11 = 4;
    }
    else
    {
      v11 = 4;
      v5 = a1;
      if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
      {
        v8 = KeSetPagePrivilege(a1, &v66, 4LL);
        if ( v8 < 0 )
          KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
      }
    }
  }
  LOBYTE(v18) = (*(_QWORD *)(v65 + 40) >> 54) & 7;
  if ( (_BYTE)v18 == 3 )
  {
    if ( (a4 & 2) != 0 )
      LOBYTE(v18) = MiClearPfnImageVerified(v65, v57);
    if ( (v12 & 4) == 0 )
    {
      LOBYTE(v18) = (*(_QWORD *)(v7 + 40) >> 54) & 7;
      if ( (_BYTE)v18 != 3 )
        LOBYTE(v18) = MiMarkPfnVerified(v7, v57);
    }
  }
  if ( v8 < 0 )
  {
    v19 = *(unsigned __int8 *)(v65 + 34) >> 6;
    if ( *(unsigned __int8 *)(v7 + 34) >> 6 != (_DWORD)v19 )
      MiChangePageAttribute(v7, v19, 0LL);
    if ( !v64 )
    {
      v64 = (unsigned int *)&v59;
      if ( (a4 & 1) == 0 )
        goto LABEL_58;
      v20 = 2;
      v59 = 0;
      v60 = 2;
      v61 = 17;
      while ( 1 )
      {
        v62 = MiReservePtes(&qword_140389360, v20);
        if ( v62 )
          break;
        v21 = v20 == 2;
        v20 -= 2;
        v60 = v20;
        if ( v21 )
          goto LABEL_58;
      }
      if ( !v20 )
      {
LABEL_58:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LOBYTE(v61) = CurrentIrql;
        HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
        if ( 64 - (HyperPte & 0xFFF) > 2 )
        {
          v24 = (HyperPte & 0xFFFFFFFFFFFFF000uLL) + ((HyperPte & 0xFFF) << 12);
        }
        else
        {
          MiFlushHyperSpace(HyperPte & 0xFFF, v19, v13);
          HyperPte &= 0xFFFFFFFFFFFFF000uLL;
          v24 = HyperPte;
        }
        v59 = 0;
        v60 = 2;
        KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + 2);
        HIBYTE(v61) = 1;
        v62 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    v25 = v64;
    v26 = (a2 != -1LL) + 1;
    v27 = *v64;
    if ( v26 + *v64 > v64[1] )
    {
      v28 = *((_QWORD *)v64 + 2) << 25;
      v70 = 20LL;
      v68 = 0;
      v69 = 0;
      v71 = 0LL;
      v72 = 0LL;
      MiInsertTbFlushEntry(&v68, v28 >> 16, v27, 0LL);
      MiFlushTbList((__int64)&v68, v29);
      *v25 = 0;
    }
    v30 = *v25;
    v31 = *((_QWORD *)v25 + 2) + 8 * v30;
    *v25 = v26 + v30;
    v32 = *(_BYTE *)(v7 + 34) >> 6;
    if ( v32 )
    {
      if ( v32 == 2 )
        v11 = 28;
    }
    else
    {
      v11 = 12;
    }
    v33 = v11 & 0x1F;
    v34 = ((v5 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v33] & 0xFFFF000000000E7FuLL | 0x21;
    v35 = 0xFFFFF6FB7DBED000uLL;
    if ( v31 < 0xFFFFF68000000000uLL || v31 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v39 = ((v5 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v33] & 0xFFFF000000000E7FuLL | 0x121;
      goto LABEL_89;
    }
    v36 = (__int64)(v31 << 25) >> 16;
    if ( v31 >= 0xFFFFF6FB40000000uLL && v31 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v34 = v31 == 0xFFFFF6FB7DBEDF68uLL
          ? ((v5 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v33] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((v5 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v33] & 0x7FFF000000000E7FLL | 0x21;
      v37 = MiUserPdeOrAbove(v31);
      v35 = 0xFFFFF6FB7DBED000uLL;
      if ( v37 )
        v34 |= 4uLL;
    }
    v38 = v34 | 4;
    if ( v31 > 0xFFFFF6BFFFFFFF78uLL )
      v38 = v34;
    v39 = v38;
    if ( v36 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403899D0[((v36 >> 39) & 0x1FF) - 256] == 1
        || v36 >= 0xFFFFF68000000000uLL && v36 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        goto LABEL_89;
      }
      if ( v36 < qword_140389B40 || (v40 = HIBYTE(word_1403885F8), v36 > qword_140388958) )
        v40 = (unsigned __int8)word_1403885F8;
    }
    else
    {
      v40 = HIBYTE(word_1403885F8);
    }
    if ( v40 )
      v39 = v38 | 0x100;
LABEL_89:
    if ( (v33 & 5) == 4 )
      v39 |= 0x42uLL;
    v41 = 0xA00000000000000LL;
    v42 = (((unsigned __int16)v39 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v39) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    *(_QWORD *)v31 = v42;
    if ( v31 >= 0xFFFFF6FB7DBED000uLL && v31 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v31, v42);
    if ( a2 == -1LL )
      goto LABEL_124;
    v43 = 1;
    v44 = *(_BYTE *)(v65 + 34) >> 6;
    if ( v44 )
    {
      if ( v44 == 2 )
        v43 = 25;
    }
    else
    {
      v43 = 9;
    }
    v45 = ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v43] & 0xFFFF000000000E7FuLL | 0x21;
    if ( v31 < 0xFFFFF68000000000uLL || v31 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_120;
    v46 = (__int64)(v31 << 25) >> 16;
    if ( v31 >= 0xFFFFF6FB40000000uLL && v31 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v45 = v31 == ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          ? ((a2 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v43] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
          : ((a2 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v43] & 0x7FFF000000000E7FLL | 0x21;
      v47 = MiUserPdeOrAbove(v31);
      v35 = 0xFFFFF6FB7DBED000uLL;
      v41 = 0xA00000000000000LL;
      if ( v47 )
        v45 |= 4uLL;
    }
    v48 = v45 | 4;
    if ( v31 > 0xFFFFF6BFFFFFFF78uLL )
      v48 = v45;
    v45 = v48;
    if ( v46 >= 0xFFFF800000000000uLL )
    {
      if ( byte_1403899D0[((v46 >> 39) & 0x1FF) - 256] == 1
        || v46 >= 0xFFFFF68000000000uLL && v46 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        goto LABEL_121;
      }
      if ( v46 < qword_140389B40 || (v49 = HIBYTE(word_1403885F8), v46 > qword_140388958) )
        v49 = (unsigned __int8)word_1403885F8;
    }
    else
    {
      v49 = HIBYTE(word_1403885F8);
    }
    if ( v49 )
LABEL_120:
      v45 |= 0x100uLL;
LABEL_121:
    v50 = v31 + 8;
    v51 = v41 | (((unsigned __int16)v45 ^ (unsigned __int16)((unsigned __int8)word_1403885F8 << 8)) & 0x100 ^ v45) & 0xFAFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(v31 + 8) = v51;
    if ( v31 + 8 >= v35 && v50 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v50, v51);
LABEL_124:
    KeCopyPage((__int64)(v31 << 25) >> 16, ((__int64)(v31 << 25) >> 16) + 4096);
    v52 = 0xFFFFF6FB7DBED000uLL;
    *(_QWORD *)v31 = 0LL;
    if ( v31 >= 0xFFFFF6FB7DBED000uLL && v31 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v31, 0LL);
    v53 = v31 + 8;
    *(_QWORD *)(v31 + 8) = 0LL;
    if ( v31 + 8 >= v52 && v53 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v53, 0LL);
    v18 = &v59;
    if ( v25 == (unsigned int *)&v59 )
    {
      LOBYTE(v18) = *((_BYTE *)v25 + 8);
      if ( (_BYTE)v18 == 17 )
        LOBYTE(v18) = MiReleasePtes(&qword_140389360, *((_QWORD *)v25 + 2), 2LL);
      else
        __writecr8((unsigned __int8)v18);
    }
  }
  return (char)v18;
}
