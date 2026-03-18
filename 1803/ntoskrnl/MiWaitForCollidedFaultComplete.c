/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14007C9F8
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiImagePageOk @ 0x140057EB0 (MiImagePageOk.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x140059960 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        unsigned __int64 *a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        int *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // r15
  __int64 v13; // rsi
  ULONG_PTR v14; // rsi
  int v15; // eax
  __int64 v16; // r13
  _KLOCK_ENTRY *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp+10h]
  unsigned __int8 v32; // [rsp+88h] [rbp+20h] BYREF

  v32 = a4;
  v31 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v8 = MI_READ_PTE_LOCK_FREE(v31);
  v12 = a5;
  v13 = *(_QWORD *)a2;
  v30 = v8;
  v14 = v13 - 32;
  v15 = *a5;
  if ( !*a5 )
  {
    if ( (unsigned int)MiAddLockedPageCharge(a2, 2) )
    {
      v15 = *v12;
    }
    else
    {
      *v12 = 1;
      v15 = 1;
    }
    if ( !v15 )
    {
      if ( !a3 || *(_WORD *)(a3 + 32) < 0x7FFFu )
        goto LABEL_7;
      *v12 = 1;
      MiRemoveLockedPageChargeAndDecRef(a2, v9, v10, v11);
      v15 = *v12;
    }
  }
  if ( v15 == 1 && a3 )
  {
    MiLockNestedPageAtDpcInline(a3);
    MiRemoveLockedPageChargeAndDecRef(a3, v26, v27, v28);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_7:
  _InterlockedAdd((volatile signed __int32 *)(v14 + 176), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v9) = v32;
    MiUnlockProtoPoolPage(a3, v9, v10, v11);
  }
  else
  {
    __writecr8(v32);
  }
  v16 = 0LL;
  if ( a1[7] )
    v16 = MiReleaseFaultState((__int64)(a1 + 7), 0x11u, 0LL);
  if ( *(_QWORD *)(v14 + 208) )
  {
    v25 = KeAbPreAcquire(v14, 0LL, 0);
    v17 = (_KLOCK_ENTRY *)v25;
    if ( v25 )
      KeAbPreWait(v25);
  }
  else
  {
    v17 = 0LL;
  }
  KeWaitForSingleObject((PVOID)(v14 + 56), WrPageIn, 0, 0, 0LL);
  if ( v17 )
  {
    KeAbPreAcquire(v14, (__int64)v17, 0);
    KeAbPostReleaseEx(v14, v17);
  }
  MiFreeInPageSupportBlock((char *)v14);
  if ( a1[7] )
    MiRelockFaultState((__int64)(a1 + 7), v16);
  if ( *v12 == 1 )
    return 3221226548LL;
  if ( a3 )
  {
    MiRelockProtoPoolPage(a3, &v32);
    MiLockPageAtDpcInline(a2);
  }
  else
  {
    MiLockPageInline(a2);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0 )
  {
    if ( (unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v31, &v30) && MiImagePageOk(*a1, a2) )
      return 0LL;
    MiRemoveLockedPageChargeAndDecRef(a2, v21, v22, v23);
    return 3221226548LL;
  }
  v29 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
  MiRemoveLockedPageChargeAndDecRef(a2, v18, v19, v20);
  return v29 - 1073740748;
}
