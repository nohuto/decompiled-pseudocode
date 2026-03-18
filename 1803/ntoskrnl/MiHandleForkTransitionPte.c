/*
 * XREFs of MiHandleForkTransitionPte @ 0x14026AEC0
 * Callers:
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiLockTransitionLeafPage @ 0x14005253C (MiLockTransitionLeafPage.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiInitializePageColorBase @ 0x140057920 (MiInitializePageColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400C3000 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14026AE50 (MiGetCrossPartitionCloneCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x14026B568 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiHandleForkTransitionPte(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        unsigned __int8 a10,
        _QWORD *a11,
        _DWORD *a12)
{
  unsigned __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 PrototypePteDirect; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r13d
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ULONG_PTR v31; // rsi
  ULONG_PTR v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // r10
  __int64 v36; // r11
  __int16 v37; // ax
  __int64 Page; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 v41; // r15
  LONG *v42; // rsi
  KIRQL v43; // al
  __int64 v44; // rax
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // r11d
  __int64 v50; // rcx
  char v51; // si
  __int64 v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  __int64 v55; // r10
  unsigned __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int64 v61; // r10
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  LONG *SharedVm; // rbx
  unsigned int v70; // [rsp+34h] [rbp-94h]
  unsigned int v71; // [rsp+34h] [rbp-94h]
  int v72; // [rsp+38h] [rbp-90h]
  int v73; // [rsp+40h] [rbp-88h]
  __int64 v74; // [rsp+40h] [rbp-88h]
  __int64 v75; // [rsp+48h] [rbp-80h]
  __int64 v76; // [rsp+50h] [rbp-78h] BYREF
  __int64 v77; // [rsp+58h] [rbp-70h]
  __int64 v78; // [rsp+60h] [rbp-68h]
  __int64 v79; // [rsp+68h] [rbp-60h]
  volatile signed __int32 *v80; // [rsp+70h] [rbp-58h] BYREF
  __int16 v81; // [rsp+78h] [rbp-50h]
  unsigned __int16 v82; // [rsp+7Ah] [rbp-4Eh]
  int v84; // [rsp+D8h] [rbp+10h]

  v12 = a5;
  v13 = a4;
  v14 = ZeroPte;
  PrototypePteDirect = MiMakePrototypePteDirect(a5);
  v77 = PrototypePteDirect;
  v19 = 0;
  v20 = *(unsigned __int16 *)(v17 + 1454);
  v21 = 0;
  v78 = ZeroPte;
  v72 = 0;
  v84 = 0;
  v22 = *(_QWORD *)(qword_1403CBD88 + 8 * v20);
  v23 = *(unsigned __int16 *)(v15 + 1454);
  v79 = v22;
  v75 = *(_QWORD *)(qword_1403CBD88 + 8 * v23);
  if ( v75 != v22 )
  {
    v19 = 1;
    if ( (a9 & 1) != 0 )
    {
      if ( !(unsigned int)MiChargeCommit(v22, 1uLL, 0) )
      {
        *v13 = MiMakeDemandZeroPte(4);
        if ( MiPteInShadowRange((unsigned __int64)v13) )
          MiWritePteShadow(v25, v24, v26);
        *a12 = 1;
        return 1LL;
      }
      v21 = 1;
      v84 = 1;
    }
    if ( !(unsigned int)MiGetCrossPartitionCloneCharges(v22, v15, v17, v18) )
    {
      *v13 = MiMakeDemandZeroPte(4);
      if ( MiPteInShadowRange((unsigned __int64)v13) )
        MiWritePteShadow(v29, v28, v30);
      *a12 = 1;
      if ( v21 )
        MiReturnCommit(v22, 1uLL);
      return 1LL;
    }
    v72 = 1;
  }
  v31 = (ULONG_PTR)a3;
  while ( 1 )
  {
    v32 = MiLockTransitionLeafPage(v31, 0LL);
    if ( !v32 )
    {
LABEL_25:
      v45 = v84;
LABEL_26:
      if ( v45 )
        MiReturnCommit(v22, 1uLL);
      if ( v19 )
        MiReturnCrossPartitionCloneCharges(v22);
      return 0LL;
    }
    v33 = MI_READ_PTE_LOCK_FREE(v31);
    v36 = (v33 >> 5) & 0x1F;
    v73 = v36;
    if ( !*(_WORD *)(v32 + 32) && (v36 & 0xFFFFFFF8) != 0x10 )
      break;
    v70 = *(unsigned __int8 *)(v32 + 34) >> 6;
    v74 = a1 + 1280;
    if ( *a8 != v34 )
    {
      v45 = v84;
      if ( v84 )
      {
        MiReturnCommit(v22, 1uLL);
        v45 = 0;
      }
      if ( v19 )
        MiReturnCrossPartitionCloneCharges(v22);
      v19 = 0;
      v65 = 48 * *a8 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v65);
      MiFinalizePageAttribute(v65, v70, 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v32 + 34) & 0x20) != 0 && (MiFlushTbList(a7, v66, v67), (*(_BYTE *)(v32 + 34) & 8) != 0) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockWorkingSetExclusive(v74, a10);
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        SharedVm = MiGetSharedVm(v74);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        LOBYTE(v68) = a10;
        if ( (unsigned int)MiDuplicateCloneLeaf((unsigned __int64)a3, v13, *a8, v68, 2u) )
        {
          *a8 = -1LL;
          ++*a6;
          return 1LL;
        }
      }
      goto LABEL_26;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), v35);
    MiInitializePageColorBase(a1 + 1280, 0, (__int64)&v80);
    v37 = _InterlockedExchangeAdd(v80, 1u);
    v71 = v82 | (unsigned __int16)(v37 & v81);
    Page = MiGetPage(v75, v71, 0);
    *a8 = Page;
    if ( Page == -1 )
    {
      v41 = a10;
      do
      {
        MiFlushTbList(a7, v39, v40);
        MiUnlockWorkingSetExclusive(v74, v41);
        MiWaitForFreePage(v75);
        v42 = MiGetSharedVm(v74);
        v43 = ExAcquireSpinLockExclusive(v42);
        v42[1] = 0;
        v41 = v43;
        MiMakeSystemAddressValid((ULONG_PTR)a3, 0LL, 0, v43, 1);
        v44 = MiGetPage(v75, v71, 0);
        *a8 = v44;
      }
      while ( v44 == -1 );
      PrototypePteDirect = v77;
      v14 = v78;
      v12 = a5;
      v13 = a4;
      v19 = v72;
      v31 = (ULONG_PTR)a3;
      a10 = v41;
      v22 = v79;
    }
    if ( (MI_READ_PTE_LOCK_FREE(v31) & 0x401) != 0 )
      goto LABEL_25;
  }
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)v12 = v33;
  if ( MiPteInShadowRange(v12) )
    MiWritePteShadow(v47, v46, v48);
  MI_MAKE_PROTECT_WRITE_COPY(v12);
  *(_QWORD *)(v12 + 8) = v19;
  *(_QWORD *)(v12 + 24) = 2LL;
  if ( (a9 & 1) != 0 )
  {
    *(_QWORD *)(v12 + 16) = 1LL;
    if ( v84 )
      ++*a11;
    else
      ++a11[1];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 7560), 1uLL);
    v50 = *(_QWORD *)(v12 + 16);
  }
  else
  {
    *(_QWORD *)(v12 + 16) = 0LL;
    v50 = 0LL;
  }
  *(_QWORD *)(v12 + 16) = v50 & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v49 << 59);
  if ( (*(_QWORD *)(v32 + 16) & 2) != 0 )
  {
    v14 = *(_QWORD *)(v32 + 16);
    v51 = *(_BYTE *)(v32 + 34) & 7;
    if ( v51 == 3 )
      MiUnlinkPageFromList(v32, 0LL);
    *(_QWORD *)(v32 + 16) &= ~2uLL;
    if ( v51 == 3 )
      MiInsertPageInList(v32, 8u);
  }
  *(_QWORD *)(v32 + 8) = v12;
  *(_QWORD *)(v32 + 40) |= 0x200000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v32 + 16);
  v52 = *(_QWORD *)(v32 + 40) & 0xFFFFFFFFFLL;
  v76 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v53 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v76);
  *(_QWORD *)(v32 + 40) = v55 ^ v54 & (v55 ^ (v53 >> 12));
  v56 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v76);
  v58 = 48 * (v57 & (v56 >> 12)) - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v58);
  *(_QWORD *)(v58 + 24) ^= (*(_QWORD *)(v58 + 24) ^ (*(_QWORD *)(v58 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *a3 = PrototypePteDirect;
  if ( MiPteInShadowRange((unsigned __int64)a3) )
    MiWritePteShadow(v59, PrototypePteDirect, v60);
  _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), v61);
  if ( v14 )
  {
    v62 = v14 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v14 & 4) == 0 )
      v62 = v14;
    MiReleasePageFileInfo((struct _KEVENT *)v22, v62, 1);
  }
  if ( (a9 & 1) != 0 && v73 != 24 )
    PrototypePteDirect |= 8uLL;
  *v13 = PrototypePteDirect;
  if ( MiPteInShadowRange((unsigned __int64)v13) )
    MiWritePteShadow(v63, PrototypePteDirect, v64);
  MiLockAndDecrementShareCount(48 * v52 - 0x58000000000LL, 0);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
  return 2LL;
}
