/*
 * XREFs of MmFreeSpecialPool @ 0x14021753C
 * Callers:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeLinkedListPte @ 0x14017CF2C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     MiBadShareCount @ 0x14017D1EC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiCheckSpecialPoolSlop @ 0x140216B80 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x14021AAE8 (VerifierFreeTrackedPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR BugCheckParameter1)
{
  __int64 *v2; // rsi
  ULONG_PTR v3; // rbx
  int v4; // edx
  unsigned int *v5; // r14
  unsigned __int8 CurrentIrql; // cl
  unsigned int v7; // r8d
  unsigned int v8; // r15d
  __int64 v9; // r13
  ULONG_PTR v10; // r9
  _BYTE *v11; // rcx
  unsigned __int8 *v12; // r8
  unsigned int v13; // ecx
  unsigned int i; // edx
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // r12
  BOOL v22; // eax
  __int64 v23; // r10
  PKSPIN_LOCK v24; // r14
  _KPROCESS *v25; // rdx
  unsigned __int8 v26; // bl
  ULONG_PTR *v27; // rbx
  char *AnyMultiplexedVm; // rax
  __int64 v29; // rax
  _QWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 updated; // [rsp+30h] [rbp+0h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp+8h]
  unsigned __int64 v33[4]; // [rsp+40h] [rbp+10h] BYREF
  int v34; // [rsp+60h] [rbp+30h] BYREF
  __int16 v35; // [rsp+64h] [rbp+34h]
  __int64 v36; // [rsp+68h] [rbp+38h]
  __int64 v37; // [rsp+70h] [rbp+40h]
  __int64 v38; // [rsp+78h] [rbp+48h]

  memset(v33, 0, sizeof(v33));
  v2 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL;
  if ( (BugCheckParameter1 & 0xFFF) != 0 )
  {
    v4 = 1;
    v5 = (unsigned int *)(BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v4 = 0;
    v5 = (unsigned int *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  }
  LODWORD(updated) = v4;
  CurrentIrql = KeGetCurrentIrql();
  v7 = *v5;
  v8 = (*v5 & 0x8000) != 0;
  if ( CurrentIrql > (unsigned __int8)(2 - ((*v5 & 0x8000) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, BugCheckParameter1, 0x31uLL);
  SpinLock = &qword_14036D000;
  if ( (v7 & 0x2000) != 0 )
  {
    v8 |= 0x20u;
    SpinLock = (PKSPIN_LOCK)qword_14036D688;
  }
  v9 = *(_WORD *)v5 & 0x1FFF;
  if ( v4 == 1 )
  {
    v10 = 4096 - (unsigned int)(BugCheckParameter1 & 0xFFF);
    if ( ((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v10 )
      KeBugCheckEx(0xC1u, BugCheckParameter1, *(_WORD *)v5 & 0x1FFF, v10, 0x21uLL);
    v11 = v5 + 4;
    if ( (v7 & 0x4000) != 0 )
      v11 = v5 + 6;
    MiCheckSpecialPoolSlop(v11, BugCheckParameter1, v5);
    v4 = updated;
  }
  v12 = (unsigned __int8 *)(BugCheckParameter1 + v9);
  v13 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v9) + 4096;
  if ( !v4 )
  {
    v13 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v9) + 4080;
    if ( (*v5 & 0x4000) != 0 )
      v13 = (BugCheckParameter1 & 0xFFFFF000) - (BugCheckParameter1 + v9) + 4072;
  }
  for ( i = 0; i < v13; ++i )
  {
    if ( *v12 != (unsigned __int16)(unsigned __int8)*((_WORD *)v5 + 1) )
      KeBugCheckEx(0xC1u, BugCheckParameter1, (ULONG_PTR)v12, *v5, 0x24uLL);
    ++v12;
  }
  if ( (*v5 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(BugCheckParameter1, v9, v8, 1LL);
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = -1737080031;
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x1C) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x20) = v9;
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v8;
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x28) = BugCheckParameter1;
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x40) = KeGetCurrentThread();
  *(_QWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x30) = Src;
  v15 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)((BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL) + 0x38) = v15;
  if ( v15 )
  {
    if ( v15 > 0x400 )
      v15 = 1024;
    memmove((void *)(v3 + 72), Src, v15);
  }
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 0x20) != 0 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    v27 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, (ULONG_PTR)v2, 1LL, 1, v33);
    if ( v33[1] )
      v33[3] -= v33[1];
    v29 = MI_READ_PTE_LOCK_FREE(v2);
    updated = MiUpdateLinkedListInPte(v29);
    *v2 = updated;
    if ( MiPteInShadowRange((unsigned __int64)v2) )
      MiWritePteShadow();
    v24 = SpinLock;
  }
  else
  {
    updated = MI_READ_PTE_LOCK_FREE(v2);
    v19 = MI_GET_PFN_FROM_PTE(&updated, v16, v17, v18);
    v20 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL);
    _InterlockedDecrement64(&qword_14036BDC8);
    v21 = v20 - 0x58000000000LL;
    updated = MiMakeLinkedListPte(0xFFFFFFFFFLL);
    *v2 = updated;
    v22 = MiPteInShadowRange((unsigned __int64)v2);
    v23 = 0LL;
    if ( v22 )
      MiWritePteShadow();
    v24 = SpinLock;
    v36 = 20LL;
    v35 = v23;
    v37 = v23;
    v38 = v23;
    v34 = &qword_14036D000 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v34, v3, 1LL, 0);
    MiFlushTbList((__int64)&v34, v25);
    v26 = MiLockPageInline(v19);
    *(_QWORD *)(v19 + 24) |= 0x4000000000000000uLL;
    if ( (*(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      MiBadShareCount(v19);
    if ( *(_WORD *)(v19 + 32) != 1 )
      MiBadRefCount(v19);
    MiDecrementShareCount(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v21);
    MiDecrementShareCount(v21);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v26);
    v33[3] = 1LL;
    v27 = &MiSystemPartition;
    v33[0] = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_14036D130, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_14036CFD0);
  MiRemoveSpecialPoolRange(v24, v8, (unsigned __int64)v2);
  if ( v24 != &qword_14036D000 )
    _InterlockedDecrement64((volatile signed __int64 *)v24 + 7);
  if ( v33[0] )
  {
    if ( v27 == &MiSystemPartition )
      MiReturnResidentAvailable(v33[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 728, v33[0]);
  }
  if ( v33[3] )
    MiReturnCommit((__int64)v27, v33[3]);
}
