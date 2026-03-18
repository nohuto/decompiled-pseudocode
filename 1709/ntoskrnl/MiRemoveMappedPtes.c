/*
 * XREFs of MiRemoveMappedPtes @ 0x14005C210
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x140011210 (MI_WSLE_LOG_ACCESS.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiOffsetToProtos @ 0x14007AFB0 (MiOffsetToProtos.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiRemoveViewsFromSection @ 0x1400A23B4 (MiRemoveViewsFromSection.c)
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1400E4FE4 (MiTryDeleteTransitionPte.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveMappedPtes(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rbx
  ULONG_PTR *v13; // rax
  LONG *SharedVm; // rdi
  KIRQL v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 PteShadow; // rax
  BOOL v19; // edi
  int v20; // eax
  LONG *v21; // rax
  _KPROCESS *v22; // rdx
  int v23; // eax
  ULONG_PTR v24; // rdi
  BOOL v25; // ebp
  KIRQL v26; // r15
  __int64 result; // rax
  unsigned __int64 v28; // rdx
  KIRQL v29; // [rsp+20h] [rbp-168h]
  __int64 v31; // [rsp+30h] [rbp-158h]
  ULONG_PTR *v32; // [rsp+38h] [rbp-150h]
  __int64 v33; // [rsp+40h] [rbp-148h] BYREF
  __int64 v34; // [rsp+48h] [rbp-140h]
  __int64 v35; // [rsp+50h] [rbp-138h] BYREF
  __int64 v36; // [rsp+58h] [rbp-130h] BYREF
  __int64 v37; // [rsp+60h] [rbp-128h]
  __int64 v38; // [rsp+68h] [rbp-120h]
  __int64 v39; // [rsp+70h] [rbp-118h]
  int v40; // [rsp+80h] [rbp-108h] BYREF
  __int16 v41; // [rsp+84h] [rbp-104h]
  __int64 v42; // [rsp+88h] [rbp-100h]
  __int64 v43; // [rsp+90h] [rbp-F8h]
  __int64 v44; // [rsp+98h] [rbp-F0h]
  void *retaddr; // [rsp+188h] [rbp+0h]

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  v4 = a1[4] >> 12;
  v5 = 0LL;
  v34 = *(_QWORD *)(a1[6] & 0xFFFFFFFFFFFFFFF8uLL);
  v6 = v34;
  v42 = 20LL;
  v7 = MiTbFlushType(a2);
  v9 = *(_QWORD *)(v8 + 80);
  v40 = v7;
  v10 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v11 = *(unsigned __int16 *)(a2 + 172);
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v31 = *(_QWORD *)(qword_140388AF0 + 8 * v11);
  v12 = (__int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*(_DWORD *)(v34 + 56) & 0x400) != 0 )
    v13 = &MiSystemPartition;
  else
    v13 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * (*(_WORD *)(v34 + 60) & 0x3FF));
  v32 = v13;
  SharedVm = MiGetSharedVm(a2);
  v15 = ExAcquireSpinLockExclusive(SharedVm);
  v29 = v15;
  SharedVm[1] = 0;
  if ( !v4 )
    goto LABEL_29;
  do
  {
    PteShadow = *v12;
    if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v12, *v12);
    v33 = PteShadow;
    if ( PteShadow )
    {
      if ( (PteShadow & 1) != 0 )
      {
        v19 = (*(_QWORD *)(MI_GET_PFN_FROM_PTE(&v33, 0xFFFFF6FB7DBED000uLL, v16, v17) + 40) & 0x200000000000000LL) == 0;
        if ( dword_140388C68 )
          MI_WSLE_LOG_ACCESS(a2, v12);
        MiTerminateWsle(a2, v10, 1);
        MiInsertTbFlushEntry(&v40, v10, 1LL, 0LL);
        MiDeleteValidSystemPage(a2, (ULONG_PTR *)v12, 0LL, (__int64)&v36);
        if ( v19 )
          v5 += v37;
        v37 = 0LL;
      }
      else
      {
        if ( (PteShadow & 0x400) != 0 )
        {
          *v12 = 0LL;
        }
        else
        {
          if ( (PteShadow & 0x800) != 0 )
          {
            v20 = MiTryDeleteTransitionPte((ULONG_PTR)v12);
            if ( v20 == 1 )
              continue;
            if ( v20 == 3 )
              ++v5;
          }
          else
          {
            MiReleasePageFileSpace(v31, PteShadow, 1LL);
          }
          *v12 = 0LL;
        }
        if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v12, 0LL);
      }
    }
    ++v12;
    v10 += 4096LL;
    --v4;
  }
  while ( v4 );
  v6 = v34;
  v15 = v29;
LABEL_29:
  MiPreUnlockWorkingSetExclusive(a2, v15);
  v21 = MiGetSharedVm(a2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v21, retaddr);
  else
    *v21 = 0;
  __writecr8(v29);
  MiFlushTbList((__int64)&v40, v22);
  v23 = *(_DWORD *)(v6 + 56);
  if ( (v23 & 0x420) != 0 )
  {
    v24 = 0LL;
    if ( (v23 & 0x20) != 0 && (a1[6] & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v6);
  }
  else
  {
    v24 = MiOffsetToProtos(v6, a1[3] << 12, &v35);
  }
  v25 = *(_QWORD *)(v6 + 64) != 0LL;
  v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
  if ( v24 )
    v3 = MiRemoveViewsFromSection(v24);
  --*(_QWORD *)(v6 + 48);
  --*(_QWORD *)(v6 + 40);
  result = MiCheckControlArea(v6, v26);
  v28 = a1[5];
  if ( v28 )
  {
    if ( v5 )
      v28 -= v5;
    if ( v28 )
      result = MiReturnCommit(v31, v28);
  }
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v32, v25, v3);
  return result;
}
