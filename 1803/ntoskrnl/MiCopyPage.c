/*
 * XREFs of MiCopyPage @ 0x14002ED70
 * Callers:
 *     MiSwapStackPageNoDpc @ 0x140002BDC (MiSwapStackPageNoDpc.c)
 *     MiReplaceTransitionPage @ 0x1400031F8 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiCopyHeaderIfResident @ 0x14004D648 (MiCopyHeaderIfResident.c)
 *     MiWaitForInPageComplete @ 0x1400583A0 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiTradeActivePage @ 0x140162634 (MiTradeActivePage.c)
 *     MiSplitDirectMapPage @ 0x14025E808 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402664E8 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 *     MiInitializeSystemImagePage @ 0x1408ADBC0 (MiInitializeSystemImagePage.c)
 *     MiTradeBootImagePage @ 0x1408AE0E0 (MiTradeBootImagePage.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiClearPfnImageVerified @ 0x140054A44 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMarkPfnVerified @ 0x1401380B4 (MiMarkPfnVerified.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     KeCopyPrivilegedPage @ 0x14015B1EC (KeCopyPrivilegedPage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1401AEA50 (KeCopyPage.c)
 *     KeSetPagePrivilege @ 0x14023FCB0 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, char a4)
{
  char v5; // r12
  char v6; // bl
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // r14
  int v9; // edi
  int PagePrivilege; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  int v13; // r13d
  int v14; // esi
  unsigned __int8 v15; // r12
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ebx
  bool v22; // zf
  unsigned __int8 CurrentIrql; // al
  _QWORD *MmInternal; // rdi
  unsigned __int64 UltraMapping; // rbx
  unsigned __int64 HyperPte; // r8
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  char v31; // al
  unsigned __int64 ValidPte; // rax
  __int64 v33; // r9
  __int64 v34; // r8
  char v35; // al
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // dl
  _QWORD *v41; // rcx
  int v43; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh]
  __int16 v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  BOOL v51; // [rsp+68h] [rbp-98h]
  ULONG_PTR v52; // [rsp+70h] [rbp-90h]
  __int128 v53; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  int v55; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v56; // [rsp+A4h] [rbp-5Ch]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]

  v5 = a4;
  v6 = 0;
  v7 = 48 * a2 - 0x58000000000LL;
  v52 = v7;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = -1073741823;
  v43 = a4 & 4;
  PagePrivilege = MiGetPagePrivilege(v7);
  v13 = 4;
  if ( PagePrivilege )
  {
    if ( (v5 & 0x12) != 0 )
    {
      v6 = 2;
      v14 = v5 & 2;
    }
    else if ( (MiFlags & 0x10000) == 0
           || (v5 & 8) != 0
           || (PagePrivilege & 1) == 0
           || (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (MiFlags & 0x40000) == 0 || (v5 & 8) != 0 || (v6 = 2, (PagePrivilege & 2) == 0) )
        v6 = 4;
      v14 = v5 & 2;
    }
    else
    {
      v6 = 2;
      v14 = v5 & 2;
    }
  }
  else
  {
    v14 = v5 & 2;
    if ( (v5 & 2) == 0 )
      v6 = 4;
  }
  if ( (v6 & 2) != 0 )
  {
    *((_QWORD *)&v53 + 1) = 0LL;
    v15 = 17;
    v51 = v14 != 0;
    if ( (MiFlags & 0x40000) != 0 )
      MiFlushEntireTbDueToAttributeChange(v11, 0xFFFFF68000000000uLL);
    v16 = 0;
    if ( (MiFlags & 0x8000) == 0 )
      goto LABEL_33;
    if ( v14 )
    {
      v53 = v54;
    }
    else
    {
      *(_QWORD *)&v53 = (__int64)(*(_QWORD *)(v8 + 8) << 25) >> 16;
      if ( (unsigned __int64)v53 < 0xFFFF800000000000uLL )
      {
        v6 |= 8u;
        *((_QWORD *)&v53 + 1) = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
        if ( !v43 )
          v15 = MiLockPageInline(v8);
        MiMarkPfnVerified(v8);
        MiAbortCombineScan(v8);
        v17 = v43;
        if ( v43 )
          goto LABEL_29;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        v15 = 17;
      }
      else
      {
        *((_QWORD *)&v53 + 1) = 0LL;
      }
    }
    v17 = v43;
LABEL_29:
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v17 )
        v15 = MiLockPageInline(v8);
      v16 = ((*(_DWORD *)(v8 + 40) << 12) + (*(_DWORD *)(v8 + 8) & 0xFFF)) | 1;
    }
LABEL_33:
    v18 = KeCopyPrivilegedPage(a1, (unsigned int)&v53, a2, (unsigned int)&v54, v16, v51);
    v9 = v18;
    if ( v18 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v18);
    if ( v15 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
    }
    if ( (MiFlags & 0x40000) != 0 && !v14 && (*(_QWORD *)(v8 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v9 = KeSetPagePrivilege(a1, &v53, 4LL);
      if ( v9 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
    v5 = a4;
  }
  LOBYTE(v19) = (*(_QWORD *)(v52 + 40) >> 54) & 7;
  if ( (_BYTE)v19 == 3 )
  {
    if ( v14 )
      LOBYTE(v19) = MiClearPfnImageVerified(v52);
    if ( (v6 & 4) == 0 )
    {
      LOBYTE(v19) = (*(_QWORD *)(v8 + 40) >> 54) & 7;
      if ( (_BYTE)v19 != 3 )
        LOBYTE(v19) = MiMarkPfnVerified(v8);
    }
  }
  if ( v9 < 0 )
  {
    v20 = *(unsigned __int8 *)(v52 + 34) >> 6;
    if ( *(unsigned __int8 *)(v8 + 34) >> 6 != (_DWORD)v20 )
      MiChangePageAttribute(v8, v20, 0LL);
    if ( !a3 )
    {
      a3 = (unsigned int *)&v47;
      if ( (v5 & 1) == 0 )
        goto LABEL_57;
      v49 = 17;
      v48 = 2;
      v47 = 0;
      v21 = 2;
      while ( 1 )
      {
        v50 = MiReservePtes(&qword_1403CC5E0, v21);
        if ( v50 )
          break;
        v22 = v21 == 2;
        v21 -= 2;
        v48 = v21;
        if ( v22 )
          goto LABEL_57;
      }
      if ( !v21 )
      {
LABEL_57:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LOBYTE(v49) = CurrentIrql;
        MmInternal = KeGetCurrentPrcb()->MmInternal;
        if ( MmInternal )
        {
          UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 2LL);
          MmInternal[1543] = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        }
        else
        {
          HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
          UltraMapping = HyperPte & 0xFFFFFFFFFFFFF000uLL;
          if ( 64 - (HyperPte & 0xFFF) > 2 )
          {
            UltraMapping += (HyperPte & 0xFFF) << 12;
          }
          else
          {
            MiFlushHyperSpace(HyperPte & 0xFFF, (unsigned int)HyperPte);
            HyperPte = UltraMapping;
          }
          KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + 2);
        }
        v47 = 0;
        v50 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v48 = 2;
        HIBYTE(v49) = 1;
      }
    }
    v27 = *a3;
    v28 = (a2 != -1LL) + 1;
    if ( (int)v27 + v28 > a3[1] )
    {
      v29 = *((_QWORD *)a3 + 2) << 25;
      v57 = 20LL;
      v55 = 0;
      v56 = 0;
      v58 = 0LL;
      v59 = 0LL;
      MiInsertTbFlushEntry((__int64)&v55, v29 >> 16, (unsigned int)v27, 0);
      MiFlushTbList(&v55);
      v27 = 0LL;
      *a3 = 0;
    }
    v30 = *((_QWORD *)a3 + 2) + 8 * v27;
    *a3 = v27 + v28;
    v31 = *(_BYTE *)(v8 + 34) >> 6;
    if ( v31 )
    {
      if ( v31 == 2 )
        v13 = 28;
    }
    else
    {
      v13 = 12;
    }
    ValidPte = MiMakeValidPte(v30, a1, v13 | 0xA0000000, v12);
    *(_QWORD *)v30 = ValidPte;
    if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v30, ValidPte);
    if ( a2 != -1LL )
    {
      v34 = 1LL;
      v35 = *(_BYTE *)(v52 + 34) >> 6;
      if ( v35 )
      {
        if ( v35 == 2 )
          v34 = 25LL;
      }
      else
      {
        v34 = 9LL;
      }
      LODWORD(v34) = v34 | 0x20000000;
      v36 = MiMakeValidPte(v30, a2, v34, v33);
      v37 = v30 + 8;
      *(_QWORD *)(v30 + 8) = v36;
      if ( v30 + 8 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v37, v36);
    }
    KeCopyPage((__int64)(v30 << 25) >> 16, ((__int64)(v30 << 25) >> 16) + 4096);
    v38 = ZeroPte;
    *(_QWORD *)v30 = ZeroPte;
    if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      MiWritePteShadow(v30, ZeroPte);
      v38 = ZeroPte;
    }
    v39 = v30 + 8;
    *(_QWORD *)(v30 + 8) = v38;
    if ( v30 + 8 >= 0xFFFFF6FB7DBED000uLL && v39 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v39, v38);
    v19 = &v47;
    if ( a3 == (unsigned int *)&v47 )
    {
      v40 = *((_BYTE *)a3 + 8);
      if ( v40 == 17 )
      {
        LOBYTE(v19) = MiReleasePtes(&qword_1403CC5E0, *((_QWORD *)a3 + 2), 2LL);
      }
      else
      {
        v41 = KeGetCurrentPrcb()->MmInternal;
        if ( v41 )
        {
          v41[1543] = 0LL;
          v40 = *((_BYTE *)a3 + 8);
        }
        LOBYTE(v19) = v40;
        __writecr8(v40);
      }
    }
  }
  return (char)v19;
}
