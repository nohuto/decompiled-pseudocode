/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x140125424
 * Callers:
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiImagePageOk @ 0x14002C610 (MiImagePageOk.c)
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiFreeInPageSupportBlock @ 0x140032450 (MiFreeInPageSupportBlock.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  __int64 *v7; // r15
  __int64 PteShadow; // rax
  _DWORD *v13; // r14
  _RTL_BALANCED_NODE *v14; // rbp
  ULONG_PTR v15; // rbx
  LONG *v16; // rcx
  PRTL_BALANCED_NODE v17; // rax
  unsigned __int64 v18; // rdx
  LONG *SharedVm; // rbx
  unsigned int v21; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v7 = (__int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  PteShadow = *v7;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v7, *v7);
  v13 = a7;
  v14 = 0LL;
  v15 = *(_QWORD *)a1 - 32LL;
  v23 = PteShadow;
  if ( !*a7 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 2LL, a3) )
      *v13 = 1;
    if ( !*v13 && a2 && *(_WORD *)(a2 + 32) >= 0x7FFFu )
    {
      *v13 = 1;
      MiRemoveLockedPageChargeAndDecRef(a1);
    }
  }
  if ( *v13 == 1 && a2 )
  {
    MiLockNestedPageAtDpcInline(a2);
    MiRemoveLockedPageChargeAndDecRef(a2);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 176));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 )
    MiUnlockProtoPoolPage(a2, a6);
  else
    __writecr8(a6);
  if ( a4 )
  {
    MiPreUnlockWorkingSetExclusive(a4, a5);
    v16 = &dword_140389780;
    if ( (*(_BYTE *)(a4 + 192) & 7) != 2 )
      v16 = (LONG *)(a4 + 200);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
    else
      *v16 = 0;
    __writecr8(a5);
  }
  if ( *(_QWORD *)(v15 + 208) )
  {
    v17 = KeAbPreAcquire(v15, 0LL, 0);
    v14 = v17;
    if ( v17 )
      KeAbPreWait((__int64)v17);
  }
  KeWaitForSingleObject((PVOID)(v15 + 56), WrPageIn, 0, 0, 0LL);
  if ( v14 )
  {
    KeAbPreAcquire(v15, v14, 0);
    KeAbPostReleaseEx(v15, (unsigned __int64)v14);
  }
  MiFreeInPageSupportBlock((char *)v15, v18);
  if ( a4 )
  {
    SharedVm = MiGetSharedVm(a4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  if ( *v13 == 1 )
    return 3221226548LL;
  if ( a2 )
  {
    MiRelockProtoPoolPage(a2, (char *)&a6);
    MiLockPageAtDpcInline(a1);
  }
  else
  {
    MiLockPageInline(a1);
  }
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v21 = (*(_BYTE *)(a1 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
    MiRemoveLockedPageChargeAndDecRef(a1);
    return v21 - 1073740748;
  }
  else
  {
    if ( !MiIsFaultPteIntact(a3, v7, &v23) || !MiImagePageOk(a3, a1) )
    {
      MiRemoveLockedPageChargeAndDecRef(a1);
      return 3221226548LL;
    }
    return 0LL;
  }
}
