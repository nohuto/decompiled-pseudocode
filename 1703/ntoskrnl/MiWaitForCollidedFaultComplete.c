/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x1401180BC
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiImagePageOk @ 0x1400214A8 (MiImagePageOk.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140109900 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        _DWORD *a7)
{
  unsigned __int64 v7; // r13
  __int64 v12; // rax
  _DWORD *v13; // r14
  _KLOCK_ENTRY *v14; // rbp
  ULONG_PTR v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  LONG *SharedVm; // rbx
  __int64 v20; // r8
  unsigned int v22; // ebx
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v12 = MI_READ_PTE_LOCK_FREE(v7);
  v13 = a7;
  v14 = 0LL;
  v15 = *(_QWORD *)a1 - 32LL;
  v23 = v12;
  if ( !*a7 )
  {
    if ( !(unsigned int)MiAddLockedPageCharge(a1, 2) )
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
    MiUnlockWorkingSetExclusive(a4, a5);
  if ( *(_QWORD *)(v15 + 208) )
  {
    v16 = KeAbPreAcquire(v15, 0LL, 0LL);
    v14 = (_KLOCK_ENTRY *)v16;
    if ( v16 )
      KeAbPreWait(v16, v17, v18);
  }
  KeWaitForSingleObject((PVOID)(v15 + 56), WrPageIn, 0, 0, 0LL);
  if ( v14 )
  {
    KeAbPreAcquire(v15, (__int64)v14, 0LL);
    KeAbPostReleaseEx(v15, v14);
  }
  MiFreeInPageSupportBlock((char *)v15);
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
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact(a3, v7, &v23) && MiImagePageOk(a3, a1, v20) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a1);
    return 3221226548LL;
  }
  v22 = (*(_BYTE *)(a1 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a1);
  return v22 - 1073740748;
}
