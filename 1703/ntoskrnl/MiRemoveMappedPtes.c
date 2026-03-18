/*
 * XREFs of MiRemoveMappedPtes @ 0x1400FD140
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiUnlockWsle @ 0x140017528 (MiUnlockWsle.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiTryDeleteTransitionPte @ 0x14007A1EC (MiTryDeleteTransitionPte.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiOffsetToProtos @ 0x14009DAD0 (MiOffsetToProtos.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x140103108 (MiUpdateWorkingSetPrivateSize.c)
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveMappedPtes(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rdi
  ULONG_PTR *v16; // rax
  LONG *SharedVm; // rbx
  KIRQL v18; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  BOOL v24; // ebp
  __int64 v25; // r9
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rax
  __int64 v28; // r11
  char v29; // cl
  char WsleContents; // r10
  __int64 v31; // rbx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  LONG *v35; // rax
  _KPROCESS *v36; // rdx
  int v37; // eax
  __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  BOOL v40; // ebp
  KIRQL v41; // r14
  __int64 result; // rax
  unsigned __int64 v43; // rdx
  KIRQL v44; // [rsp+20h] [rbp-168h]
  unsigned int v45; // [rsp+24h] [rbp-164h]
  __int64 v47; // [rsp+30h] [rbp-158h]
  __int64 v48; // [rsp+38h] [rbp-150h]
  ULONG_PTR *v49; // [rsp+40h] [rbp-148h]
  __int64 v50; // [rsp+48h] [rbp-140h] BYREF
  __int64 v51; // [rsp+50h] [rbp-138h]
  unsigned __int64 v52; // [rsp+58h] [rbp-130h] BYREF
  __int64 v53; // [rsp+60h] [rbp-128h] BYREF
  __int64 v54; // [rsp+68h] [rbp-120h]
  __int64 v55; // [rsp+70h] [rbp-118h]
  __int64 v56; // [rsp+78h] [rbp-110h]
  int v57; // [rsp+80h] [rbp-108h] BYREF
  __int16 v58; // [rsp+84h] [rbp-104h]
  __int64 v59; // [rsp+88h] [rbp-100h]
  __int64 v60; // [rsp+90h] [rbp-F8h]
  __int64 v61; // [rsp+98h] [rbp-F0h]
  void *retaddr; // [rsp+188h] [rbp+0h]

  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v4 = a1[6];
  v5 = 24;
  if ( (v4 & 4) == 0 )
    v5 = 4;
  v45 = v5;
  v6 = 0LL;
  v7 = a1[4] >> 12;
  v47 = v7;
  v8 = 0LL;
  v51 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v51;
  v59 = 20LL;
  v10 = MiTbFlushType(a2);
  v12 = *(_QWORD *)(v11 + 80);
  v57 = v10;
  v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v14 = *(unsigned __int16 *)(a2 + 172);
  v58 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v48 = *(_QWORD *)(qword_14036C8F8 + 8 * v14);
  v15 = (_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*(_DWORD *)(v51 + 56) & 0x400) != 0 )
    v16 = &MiSystemPartition;
  else
    v16 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * (*(_WORD *)(v51 + 60) & 0x3FF));
  v49 = v16;
  SharedVm = MiGetSharedVm(a2);
  v18 = ExAcquireSpinLockExclusive(SharedVm);
  v44 = v18;
  SharedVm[1] = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      v19 = MI_READ_PTE_LOCK_FREE(v15);
      v50 = v19;
      if ( !v19 )
        goto LABEL_31;
      if ( (v19 & 1) != 0 )
        break;
      if ( (v19 & 0x400) != 0 )
        goto LABEL_29;
      if ( (v19 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v48, v19, 1LL);
        goto LABEL_29;
      }
      v33 = MiTryDeleteTransitionPte((ULONG_PTR)v15);
      if ( v33 != 1 )
      {
        if ( v33 == 3 )
          ++v8;
LABEL_29:
        *v15 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v15) )
          MiWritePteShadow(v34);
LABEL_31:
        ++v15;
        v13 += 4096LL;
        v47 = --v7;
      }
      if ( !v7 )
      {
        v9 = v51;
        v18 = v44;
        goto LABEL_34;
      }
    }
    v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v50);
    v24 = (*(_QWORD *)(v23 + 48 * v20) & 0x200000000000000LL) == 0;
    if ( dword_14036CA68 )
      MI_WSLE_LOG_ACCESS(a2, v15);
    MI_GET_PFN_FROM_PTE(
      ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      v21,
      v22,
      ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= v26 )
      goto LABEL_19;
    v27 = MI_READ_PTE_LOCK_FREE(v25);
    if ( (v27 & 1) != 0 )
      v29 = HIBYTE(v27) & 0xF | (16 * ((v27 >> 60) & 7));
    else
      v29 = 10;
    WsleContents = v29;
    v31 = (*(_QWORD *)(v28 + 40) >> 57) & 1LL;
    if ( (v29 & 0xF) == 8 )
    {
      MiUnlockWsle(a2, v13, v28);
      WsleContents = MiGetWsleContents(v32, v13);
    }
    if ( !(_DWORD)v31 )
LABEL_19:
      MiUpdateWorkingSetPrivateSize(a2, v13, -1LL);
    MiRemoveWsle(a2, v13, WsleContents, 10);
    MiInsertTbFlushEntry((__int64)&v57, v13, 1LL, 0);
    MiDeleteValidSystemPage(a2, v15, 0, (__int64)&v53);
    if ( v24 )
      v8 += v54;
    v7 = v47;
    v54 = 0LL;
    goto LABEL_31;
  }
LABEL_34:
  MiPreUnlockWorkingSetExclusive(a2, v18);
  v35 = MiGetSharedVm(a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
  else
    *v35 = 0;
  __writecr8(v44);
  MiFlushTbList((__int64)&v57, v36);
  v37 = *(_DWORD *)(v9 + 56);
  if ( (v37 & 0x420) != 0 )
  {
    v38 = 0LL;
    v39 = 0LL;
    if ( (v37 & 0x20) != 0 && (a1[6] & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v9);
  }
  else
  {
    v38 = MiOffsetToProtos((_DWORD *)v9, a1[3] << 12, &v52);
    v39 = v52 + (a1[4] >> 12);
  }
  v40 = *(_QWORD *)(v9 + 64) != 0LL;
  v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
  if ( v38 )
    v6 = MiRemoveViewsFromSection(v38, v39, v45);
  --*(_QWORD *)(v9 + 48);
  --*(_QWORD *)(v9 + 40);
  result = MiCheckControlArea(v9, v41);
  v43 = a1[5];
  if ( v43 )
  {
    if ( v8 )
      v43 -= v8;
    if ( v43 )
      result = MiReturnCommit(v48, v43);
  }
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v49, v40, v6);
  return result;
}
