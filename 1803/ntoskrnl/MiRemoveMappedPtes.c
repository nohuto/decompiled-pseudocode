/*
 * XREFs of MiRemoveMappedPtes @ 0x14012ADA0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiDeleteValidSystemPage @ 0x140028710 (MiDeleteValidSystemPage.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14004EA5C (MiPageTableLockIsContended.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400524F0 (MiTryDeleteTransitionPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  unsigned __int64 v16; // rsi
  ULONG_PTR *v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int8 v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r10
  BOOL v27; // edi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  ULONG_PTR v33; // rdi
  unsigned __int64 v34; // rbx
  BOOL v35; // esi
  KIRQL v36; // bp
  __int64 result; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // rdx
  int v40; // [rsp+20h] [rbp-178h]
  unsigned __int64 v41; // [rsp+28h] [rbp-170h]
  unsigned int v42; // [rsp+30h] [rbp-168h]
  __int64 v44; // [rsp+40h] [rbp-158h]
  ULONG_PTR *v45; // [rsp+48h] [rbp-150h]
  _BYTE v46[8]; // [rsp+50h] [rbp-148h] BYREF
  __int64 v47; // [rsp+58h] [rbp-140h] BYREF
  __int64 v48; // [rsp+60h] [rbp-138h]
  unsigned __int64 v49; // [rsp+68h] [rbp-130h] BYREF
  __int64 v50; // [rsp+70h] [rbp-128h] BYREF
  __int64 v51; // [rsp+78h] [rbp-120h]
  __int64 v52; // [rsp+80h] [rbp-118h]
  __int64 v53; // [rsp+88h] [rbp-110h]
  int v54; // [rsp+90h] [rbp-108h] BYREF
  __int16 v55; // [rsp+94h] [rbp-104h]
  __int64 v56; // [rsp+98h] [rbp-100h]
  __int64 v57; // [rsp+A0h] [rbp-F8h]
  __int64 v58; // [rsp+A8h] [rbp-F0h]

  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v4 = a1[6];
  v5 = 24;
  if ( (v4 & 4) == 0 )
    v5 = 4;
  v42 = v5;
  v6 = 0LL;
  v7 = a1[4] >> 12;
  v8 = 0LL;
  v48 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v48;
  v56 = 20LL;
  v10 = MiTbFlushType(a2);
  v12 = *(_QWORD *)(v11 + 80);
  v54 = v10;
  v13 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v14 = *(unsigned __int16 *)(a2 + 174);
  v55 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v44 = *(_QWORD *)(qword_1403CBD88 + 8 * v14);
  v41 = v13;
  v15 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = 0LL;
  if ( (*(_DWORD *)(v48 + 56) & 0x400) != 0 )
    v17 = &MiSystemPartition;
  else
    v17 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * (*(_WORD *)(v48 + 60) & 0x3FF));
  v45 = v17;
  v18 = MiLockWorkingSetShared(a2);
  LOBYTE(v40) = v18;
  if ( v7 )
  {
    v21 = v18;
    while ( 1 )
    {
      if ( v16 )
      {
        if ( (v15 & 0xFFF) != 0 )
          goto LABEL_12;
        MiFlushTbList((__int64)&v54, v19, v20);
        MiUnlockPageTableInternal(a2, v16);
      }
      v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(a2, v16, 0LL);
LABEL_12:
      v19 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x1800000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v20 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v20 )
        {
          v22 = *(_QWORD *)(v20 + 8 * ((v15 >> 3) & 0x1FF));
          v20 = v19 | 0x20;
          if ( (v22 & 0x20) == 0 )
            v20 = *(_QWORD *)v15;
          v19 = v20;
          if ( (v22 & 0x42) != 0 )
            v19 = v20 | 0x42;
        }
      }
      v47 = v19;
      if ( !v19 )
        goto LABEL_42;
      if ( (v19 & 1) != 0 )
      {
        v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47);
        v27 = (*(_QWORD *)(v26 + 48 * (v25 & (v23 >> 12))) & 0x200000000000000LL) == 0;
        if ( dword_1403CBF28 )
          MI_WSLE_LOG_ACCESS(a2, (_BYTE *)v15, v24);
        MiTerminateWsle(a2, v41, 1LL, v46, v40);
        MiInsertTbFlushEntry((__int64)&v54, v41, 1LL, 0);
        MiDeleteValidSystemPage(a2, v15, 0, (__int64)&v50);
        if ( v27 )
          v8 += v51;
        v13 = v41;
        v51 = 0LL;
        goto LABEL_42;
      }
      if ( (v19 & 0x400) != 0 )
      {
        v19 = ZeroPte;
        *(_QWORD *)v15 = ZeroPte;
        if ( v15 >= 0xFFFFF6FB7DBED000uLL && v15 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v28 = v15;
          goto LABEL_41;
        }
        goto LABEL_42;
      }
      if ( (v19 & 0x800) == 0 )
      {
        MiReleasePageFileSpace(v44, v19);
        goto LABEL_40;
      }
      v29 = MiTryDeleteTransitionPte(v15);
      if ( v29 != 1 )
      {
        if ( v29 == 3 )
          ++v8;
LABEL_40:
        *(_QWORD *)v15 = ZeroPte;
        if ( MiPteInShadowRange(v15) )
LABEL_41:
          MiWritePteShadow(v28, v19, v20);
LABEL_42:
        v13 += 4096LL;
        v15 += 8LL;
        --v7;
        v41 = v13;
        if ( (v15 & 0x78) == 0
          && ((unsigned int)MiWorkingSetIsContended(a2)
           || (unsigned int)MiPageTableLockIsContended(v30, v16)
           || KeShouldYieldProcessor()) )
        {
          MiFlushTbList((__int64)&v54, v19, v20);
          MiUnlockPageTableInternal(a2, v16);
          MiUnlockWorkingSetShared(a2, v21, v31);
          v16 = 0LL;
          MiLockWorkingSetShared(a2);
        }
      }
      if ( !v7 )
      {
        v9 = v48;
        break;
      }
    }
  }
  if ( v16 )
  {
    MiFlushTbList((__int64)&v54, v19, v20);
    MiUnlockPageTableInternal(a2, v16);
  }
  MiUnlockWorkingSetShared(a2, v40, v20);
  v32 = *(_DWORD *)(v9 + 56);
  if ( (v32 & 0x420) != 0 )
  {
    v33 = 0LL;
    v34 = 0LL;
    if ( (v32 & 0x20) != 0 && (a1[6] & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v9);
  }
  else
  {
    v33 = MiOffsetToProtos((_DWORD *)v9, a1[3] << 12, &v49);
    v34 = v49 + (a1[4] >> 12);
  }
  v35 = *(_QWORD *)(v9 + 64) != 0LL;
  v36 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
  if ( v33 )
    v6 = MiRemoveViewsFromSection(v33, v34, v42);
  --*(_QWORD *)(v9 + 48);
  --*(_QWORD *)(v9 + 40);
  result = MiCheckControlArea(v9, v36);
  v38 = a1[5];
  if ( v38 )
  {
    v39 = v38 - v8;
    if ( !v8 )
      v39 = a1[5];
    if ( v39 )
      result = MiReturnCommit(v44, v39);
  }
  if ( v6 )
    return MiReturnCrossPartitionSectionCharges(v45, v35, v6);
  return result;
}
