/*
 * XREFs of MiCopyPage @ 0x1400A0320
 * Callers:
 *     MiTradeActivePage @ 0x140027F94 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x14002C2E0 (MiSwapStackPageNoDpc.c)
 *     MiCopyHeaderIfResident @ 0x14005DFD4 (MiCopyHeaderIfResident.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiPrivateFixup @ 0x140117AB4 (MiPrivateFixup.c)
 *     MiSplitDirectMapPage @ 0x1402191C4 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiAllocateHyperSpace @ 0x14000BC08 (MiAllocateHyperSpace.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140185390 (KeCopyPage.c)
 *     KeCopyPrivilegedPage @ 0x1401FC964 (KeCopyPrivilegedPage.c)
 *     KeSetPagePrivilege @ 0x1401FC9E8 (KeSetPagePrivilege.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int *a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  int v8; // r15d
  int PagePrivilege; // edx
  __int16 v10; // ax
  int v11; // r12d
  char v12; // di
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // edi
  bool v22; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 HyperSpace; // rax
  unsigned int v25; // ecx
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  unsigned __int8 v30; // al
  __int64 v31; // rcx
  int v32; // r14d
  __int64 v33; // r8
  unsigned __int8 v34; // cl
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp-D0h]
  unsigned int v39; // [rsp+38h] [rbp-C8h]
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+54h] [rbp-ACh]
  __int16 v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  BOOL v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int128 v48; // [rsp+80h] [rbp-80h] BYREF
  __int128 v49; // [rsp+90h] [rbp-70h] BYREF
  int v50; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v51; // [rsp+A4h] [rbp-5Ch]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]

  v6 = 48 * a2 - 0x58000000000LL;
  v47 = v6;
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = -1073741823;
  v38 = a4 & 4;
  v39 = v38 != 0 ? 4 : 0;
  PagePrivilege = MiGetPagePrivilege(v6, a4 & 4, &v49);
  v10 = MiFlags;
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
  v13 = 0xFFFFF68000000000uLL;
  if ( (v12 & 2) != 0 )
  {
    *((_QWORD *)&v48 + 1) = 0LL;
    v14 = a4 & 2;
    v46 = (a4 & 2) != 0;
    if ( (MiFlags & 0x40000) != 0 )
    {
      MiFlushEntireTbDueToAttributeChange(v14, (a4 & 2) != 0, 0xFFFFF68000000000uLL);
      v10 = MiFlags;
      LODWORD(v14) = a4 & 2;
    }
    if ( v10 < 0 )
    {
      if ( (_DWORD)v14 )
      {
        v48 = v49;
      }
      else
      {
        *(_QWORD *)&v48 = (__int64)(*(_QWORD *)(v7 + 8) << 25) >> 16;
        if ( (unsigned __int64)v48 < 0xFFFF800000000000uLL )
        {
          v12 |= 8u;
          *((_QWORD *)&v48 + 1) = KeGetCurrentThread()->ApcState.Process->SecurePid;
          if ( v38 )
            v15 = 17;
          else
            v15 = MiLockPageInline(v7);
          MiMarkPfnVerified(v7, 4);
          MiAbortCombineScan(v7, v16, v17);
          if ( !v38 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
          }
        }
        else
        {
          *((_QWORD *)&v48 + 1) = 0LL;
        }
      }
    }
    v18 = KeCopyPrivilegedPage(a1, (unsigned int)&v48, a2, (unsigned int)&v49, v46);
    v8 = v18;
    if ( v18 < 0 )
      KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v18);
    if ( (MiFlags & 0x40000) != 0
      && (a4 & 2) == 0
      && (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
    {
      v8 = KeSetPagePrivilege(a1, &v48, 4LL);
      if ( v8 < 0 )
        KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
    }
  }
  LOBYTE(v19) = (*(_QWORD *)(v47 + 40) >> 54) & 7;
  if ( (_BYTE)v19 == 3 )
  {
    if ( (a4 & 2) != 0 )
      LOBYTE(v19) = MiClearPfnImageVerified(v47, v39, v13);
    if ( (v12 & 4) == 0 )
    {
      LOBYTE(v19) = (*(_QWORD *)(v7 + 40) >> 54) & 7;
      if ( (_BYTE)v19 != 3 )
        LOBYTE(v19) = MiMarkPfnVerified(v7, v39);
    }
  }
  if ( v8 < 0 )
  {
    v20 = *(unsigned __int8 *)(v47 + 34) >> 6;
    if ( *(unsigned __int8 *)(v7 + 34) >> 6 != (_DWORD)v20 )
      MiChangePageAttribute(v7, v20, 0LL);
    if ( !a3 )
    {
      a3 = (unsigned int *)&v42;
      if ( (a4 & 1) == 0 )
        goto LABEL_50;
      v21 = 2;
      v42 = 0;
      v43 = 2;
      v44 = 17;
      while ( 1 )
      {
        v45 = MiReservePtes(&qword_14036D0A0, v21);
        if ( v45 )
          break;
        v22 = v21 == 2;
        v21 -= 2;
        v43 = v21;
        if ( v22 )
          goto LABEL_50;
      }
      if ( !v21 )
      {
LABEL_50:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LOBYTE(v44) = CurrentIrql;
        v42 = 0;
        v43 = 2;
        HyperSpace = MiAllocateHyperSpace(2uLL);
        HIBYTE(v44) = 1;
        v45 = ((HyperSpace >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
    }
    v25 = *a3;
    v26 = (a2 != -1LL) + 1;
    if ( *a3 + v26 > a3[1] )
    {
      v27 = *((_QWORD *)a3 + 2) << 25;
      v52 = 20LL;
      v50 = 0;
      v51 = 0;
      v53 = 0LL;
      v54 = 0LL;
      MiInsertTbFlushEntry(&v50, v27 >> 16, v25, 0LL);
      MiFlushTbList(&v50);
      *a3 = 0;
    }
    v28 = *a3;
    v29 = *((_QWORD *)a3 + 2) + 8 * v28;
    *a3 = v28 + v26;
    v30 = *(_BYTE *)(v7 + 34);
    if ( v30 >= 0x40u )
    {
      if ( (v30 & 0xC0) == 0x80 )
        v11 = 28;
    }
    else
    {
      v11 = 12;
    }
    *(_QWORD *)v29 = MiMakeValidPte(v29, a1, v11 | 0xA0000000);
    v32 = MiPteInShadowRange(v29);
    if ( v32 )
      MiWritePteShadow(v31);
    if ( a2 != -1LL )
    {
      v33 = 1LL;
      v34 = *(_BYTE *)(v47 + 34);
      if ( v34 >= 0x40u )
      {
        if ( (v34 & 0xC0) == 0x80 )
          v33 = 25LL;
      }
      else
      {
        v33 = 9LL;
      }
      LODWORD(v33) = v33 | 0x20000000;
      *(_QWORD *)(v29 + 8) = MiMakeValidPte(v29, a2, v33);
      if ( (unsigned int)MiPteInShadowRange(v29 + 8) )
        MiWritePteShadow(v35);
    }
    KeCopyPage(v29 << 25 >> 16, (v29 << 25 >> 16) + 4096);
    *(_QWORD *)v29 = 0LL;
    if ( v32 )
      MiWritePteShadow(v29);
    *(_QWORD *)(v29 + 8) = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v29 + 8) )
      MiWritePteShadow(v36);
    v19 = &v42;
    if ( a3 == (unsigned int *)&v42 )
    {
      LOBYTE(v19) = *((_BYTE *)a3 + 8);
      if ( (_BYTE)v19 == 17 )
        LOBYTE(v19) = MiReleasePtes(&qword_14036D0A0, *((_QWORD *)a3 + 2), 2LL);
      else
        __writecr8((unsigned __int8)v19);
    }
  }
  return (char)v19;
}
