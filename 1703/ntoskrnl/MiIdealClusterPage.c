/*
 * XREFs of MiIdealClusterPage @ 0x1402224A8
 * Callers:
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x14003CAA4 (MiAcquireNonPagedResources.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReturnPfnReferenceCount @ 0x14005EAC8 (MiReturnPfnReferenceCount.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializePageColorBase @ 0x1401069F0 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x140109844 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     KeCheckForZeroPage @ 0x140185210 (KeCheckForZeroPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPageNotZero @ 0x14021F048 (MiPageNotZero.c)
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiSwapHardFaultPage @ 0x140225E74 (MiSwapHardFaultPage.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int64 *__fastcall MiIdealClusterPage(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        volatile signed __int64 *a6,
        void *a7,
        char a8,
        char *a9)
{
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v11; // r12
  bool v12; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 *v22; // r10
  __int64 v23; // r11
  __int128 *v24; // r13
  unsigned __int64 v25; // r15
  __int64 *v26; // rcx
  char v27; // r8
  __int64 v28; // rdx
  volatile signed __int64 *v29; // r10
  unsigned int v30; // r9d
  unsigned __int64 v31; // rax
  volatile signed __int64 *v32; // r14
  unsigned int v34; // ebx
  __int64 v35; // r11
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  LONG *v40; // rcx
  __int64 v41; // r13
  int ContiguousPages; // r13d
  __int64 v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rbx
  ULONG_PTR v47; // rdx
  ULONG_PTR v48; // rbx
  int v49; // ecx
  bool v50; // r12
  LONG *SharedVm; // rbx
  volatile signed __int64 *v52; // rbx
  __int64 v53; // rbx
  __int64 v54; // r9
  char v55; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v56[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 CurrentIrql; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+68h] [rbp-98h] BYREF
  char *v60; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  void *Buf2; // [rsp+90h] [rbp-70h]
  ULONG_PTR v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int64 *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v70; // [rsp+C0h] [rbp-40h]
  char v71[10]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 v72; // [rsp+D2h] [rbp-2Eh]
  __int128 Buf1; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v74; // [rsp+E8h] [rbp-18h]
  __int128 v75; // [rsp+F8h] [rbp-8h]
  _OWORD v76[3]; // [rsp+108h] [rbp+8h] BYREF
  char v77; // [rsp+140h] [rbp+40h] BYREF
  void *retaddr; // [rsp+218h] [rbp+118h]

  v9 = a6;
  *a9 = 0;
  v60 = a9;
  CurrentIrql = a2;
  v69 = a3;
  v70 = a1;
  v11 = ((a1 & 0xFFFFFFFFFFFFF000uLL) - (a1 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v12 = (*(_DWORD *)(a2 + 48) & 0x8000) == 0;
  v59 = a4;
  v63 = a5;
  v68 = a6;
  Buf2 = a7;
  if ( v12 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 8, &v66);
    if ( !ProtoPteAddress || !v66 || ProtoPteAddress != a3 )
      return v9;
    v14 = *(_QWORD *)(v66 + 8);
    v15 = v14 + 8LL * *(unsigned int *)(v66 + 44);
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v14 )
      v14 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v15 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v15 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v14 >= v15 || a3 - 8 * v11 < v14 || a3 + 8 * (16 - v11) > v15 )
      return v9;
    v16 = *(_WORD *)(*(_QWORD *)v66 + 60LL) & 0x3FF;
  }
  else
  {
    v17 = *((_QWORD *)a6 + 1) | 0x8000000000000000uLL;
    if ( v17 < 0xFFFFF68000000000uLL || v17 > 0xFFFFF6FFFFFFFFFFuLL )
      return v9;
    v16 = *(unsigned __int16 *)(a5 + 172);
  }
  v18 = *(_QWORD *)(qword_14036C8F8 + 8 * v16);
  v19 = a3 - 8 * v11;
  v62 = v18;
  do
  {
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    v19 = v21 + 8;
    *v22 = v20;
  }
  while ( v23 != 1 );
  v24 = (__int128 *)Buf2;
  v25 = -1LL;
  v26 = (__int64 *)&v77;
  v27 = 1;
  v28 = (__int64)(a6 + 0xB000000000LL) / 48;
  v29 = 0LL;
  v65 = v28;
  v30 = 0;
  while ( 1 )
  {
    v67 = *v26;
    if ( (v67 & 1) != 0 )
      break;
    ++v30;
    ++v26;
    if ( v30 >= 0x10 )
      goto LABEL_24;
  }
  v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v67);
  v25 = (v31 >> 12) & 0xFFFFFFFFFLL;
  if ( (unsigned __int16)v31 >> 12 != (unsigned __int64)v30 )
    return v9;
  LOBYTE(v28) = v65;
  v27 = 1;
LABEL_24:
  v55 = (char)v29;
  v32 = v29;
  if ( v30 == 16 )
  {
    if ( (v28 & 0xF) == v11 )
    {
LABEL_26:
      *v60 = v27;
      return v9;
    }
    if ( !(unsigned int)MiAcquireNonPagedResources(v18, 1LL) )
      return v9;
    v55 = 1;
    MiInitializePageColorBase(a5, (*(_DWORD *)(CurrentIrql + 48) >> 8) & 0x3F, (__int64)v71);
    v34 = v72 >> byte_14036C1B9;
  }
  else
  {
    v25 += v11 - v30;
    if ( !MiIsPfnInline(v25) )
      return v9;
    v32 = (volatile signed __int64 *)(v35 + 48 * v25);
    if ( v32 == a6 )
      goto LABEL_26;
    v34 = MiPageToNode(v25, 0LL);
  }
  *(_BYTE *)(*(_QWORD *)(v18 + 48) + 2184LL * v34 + 1235) = 1;
  *((_QWORD *)a6 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a6, 0) )
    return v9;
  v36 = *((_OWORD *)a6 + 1);
  v76[0] = *(_OWORD *)a6;
  v37 = *((_OWORD *)a6 + 2);
  v76[1] = v36;
  v76[2] = v37;
  _InterlockedAnd64(a6 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( v24 )
  {
    MiObtainProtoReference((__int64)v24, 0);
    v38 = v24[1];
    Buf1 = *v24;
    v39 = v24[2];
    v74 = v38;
    v75 = v39;
    MiUnlockProtoPoolPage((__int64)v24, 0x11u);
  }
  if ( v63 )
  {
    MiPreUnlockWorkingSetExclusive(v63, 1u);
    v40 = &dword_14036D4C0;
    if ( (*(_BYTE *)(v63 + 192) & 7) != 2 )
      v40 = (LONG *)(v63 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v40, retaddr);
    else
      *v40 = 0;
  }
  __writecr8(1uLL);
  if ( v55 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v41 = MiGet64KPage(v18, v34, (v59 >> 5) & 0x1F);
    if ( v41 )
    {
      v43 = (v41 + 0x58000000000LL) / 48;
      v57 = v43;
      v44 = 16LL;
      do
      {
        if ( (MiFlags & 0x80u) != 0 )
        {
          v45 = v41 + 0x58000000000LL;
          if ( (*(_BYTE *)(v41 + 35) & 0x40) == 0 && (++dword_14036CA18 & MmPageValidationFrequency) == 0 )
          {
            if ( KeGetCurrentPrcb()->HyperPte )
            {
              v46 = v45 / 48;
              BugCheckParameter1 = MiMapPageInHyperSpaceWorker(v45 / 48, v56, 0x80000000);
              if ( KeCheckForZeroPage((_QWORD *)BugCheckParameter1) )
              {
                v47 = v46;
                v48 = BugCheckParameter1;
                MiPageNotZero((int *)BugCheckParameter1, v47);
              }
              else
              {
                v48 = BugCheckParameter1;
              }
              MiUnmapPageInHyperSpaceWorker(v48, v56[0]);
            }
            v43 = v57;
          }
        }
        if ( (v43 & 0xF) == v11 )
        {
          v25 = v43;
          v32 = (volatile signed __int64 *)v41;
        }
        else
        {
          MiReleaseFreshPage(v41);
        }
        v41 += 48LL;
        v57 = ++v43;
        --v44;
      }
      while ( v44 );
      __writecr8((unsigned __int8)CurrentIrql);
      v9 = v68;
      ContiguousPages = 0;
      v18 = v62;
    }
    else
    {
      __writecr8((unsigned __int8)CurrentIrql);
      MiReleaseNonPagedResources(v18, 1uLL);
      ContiguousPages = -1073741801;
    }
  }
  else
  {
    v32 = (volatile signed __int64 *)(48 * v25 - 0x58000000000LL);
    v49 = 0x40000000;
    if ( a8 != 1 )
      v49 = 1073872896;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink == KeSwapProcessOrStack )
      v49 |= 8u;
    ContiguousPages = MiFindContiguousPages(
                        v18,
                        v25,
                        v25,
                        0LL,
                        1LL,
                        *((unsigned __int8 *)a6 + 34) >> 6,
                        v34,
                        0x80000000,
                        v49,
                        &v57);
  }
  v50 = 0;
  if ( v63 )
  {
    SharedVm = MiGetSharedVm(v63);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  else
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  v52 = (volatile signed __int64 *)Buf2;
  if ( Buf2 )
  {
    *((_QWORD *)&v74 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    MiLockPageAtDpcInline((__int64)v52);
    v50 = memcmp(&Buf1, (const void *)v52, 0x30uLL) != 0;
    _InterlockedAnd64(v52 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v52);
  }
  MiLockPageAtDpcInline((__int64)v9);
  if ( v50
    || memcmp(v76, (const void *)v9, 0x30uLL)
    || (v9[3] & 0x4000000000000000LL) != 0
    || (v53 = v69, !MiIsFaultPteIntact(v70, v69, &v59)) )
  {
    if ( ContiguousPages >= 0 )
    {
      _InterlockedAnd64(v9 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPage((__int64)v32);
      if ( (ULONG_PTR *)v18 == &MiSystemPartition )
        MiReturnResidentAvailable(1uLL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 5824), 1uLL);
      MiReturnCommit(v18, 1uLL);
      MiLockPageAtDpcInline((__int64)v9);
    }
    MiRemoveLockedPageChargeAndDecRef((__int64)v9);
    return 0LL;
  }
  else
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v9);
      return v9;
    }
    MiCopyPage(v25, v65, 0LL, (v59 & 0x40) != 0 ? 16 : 8);
    MiSwapHardFaultPage(v53, v9, v32, v54);
    *((_WORD *)v32 + 16) = 0;
    if ( (ULONG_PTR *)v18 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 5824), 1uLL);
    *v60 = 1;
    return v32;
  }
}
