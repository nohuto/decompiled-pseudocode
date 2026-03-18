/*
 * XREFs of MmFreeSpecialPool @ 0x140220DA4
 * Callers:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     MiBadShareCount @ 0x14017CA94 (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiCheckSpecialPoolSlop @ 0x140220384 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x140227388 (VerifierFreeTrackedPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR BugCheckParameter2)
{
  __int64 *v2; // rbx
  ULONG_PTR v3; // rdi
  int v4; // edx
  unsigned int *v5; // r14
  unsigned __int8 CurrentIrql; // cl
  unsigned int v7; // r8d
  int v8; // r15d
  ULONG_PTR v9; // r13
  ULONG_PTR v10; // r9
  _BYTE *v11; // rcx
  unsigned __int8 *v12; // r8
  unsigned int v13; // ecx
  unsigned int i; // edx
  _QWORD *v15; // rdx
  unsigned int v16; // r12d
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r14
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r10
  PKSPIN_LOCK v24; // r12
  _KPROCESS *v25; // rdx
  unsigned __int8 v26; // di
  unsigned __int64 v27; // r9
  ULONG_PTR *v28; // rdi
  char *AnyMultiplexedVm; // rax
  __int64 PteShadow; // rax
  unsigned __int64 v31; // r10
  _QWORD Src[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 updated; // [rsp+30h] [rbp+0h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp+8h]
  unsigned __int64 v35[4]; // [rsp+40h] [rbp+10h] BYREF
  int v36; // [rsp+60h] [rbp+30h] BYREF
  __int16 v37; // [rsp+64h] [rbp+34h]
  __int64 v38; // [rsp+68h] [rbp+38h]
  __int64 v39; // [rsp+70h] [rbp+40h]
  __int64 v40; // [rsp+78h] [rbp+48h]

  memset(v35, 0, sizeof(v35));
  v2 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v4 = 1;
    v5 = (unsigned int *)(BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v4 = 0;
    v5 = (unsigned int *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  }
  LODWORD(updated) = v4;
  CurrentIrql = KeGetCurrentIrql();
  v7 = *v5;
  v8 = (*v5 & 0x8000) != 0;
  if ( CurrentIrql > (unsigned __int8)(2 - ((*v5 & 0x8000) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, BugCheckParameter2, 0x31uLL);
  SpinLock = &qword_1403892C0;
  if ( (v7 & 0x2000) != 0 )
  {
    v8 |= 0x20u;
    SpinLock = (PKSPIN_LOCK)qword_140389948;
  }
  v9 = *(_WORD *)v5 & 0x1FFF;
  if ( v4 == 1 )
  {
    v10 = 4096 - (unsigned int)(BugCheckParameter2 & 0xFFF);
    if ( ((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v10 )
      KeBugCheckEx(0xC1u, BugCheckParameter2, *(_WORD *)v5 & 0x1FFF, v10, 0x21uLL);
    v11 = v5 + 4;
    if ( (v7 & 0x4000) != 0 )
      v11 = v5 + 6;
    MiCheckSpecialPoolSlop(v11, BugCheckParameter2, v5);
    v4 = updated;
  }
  v12 = (unsigned __int8 *)(BugCheckParameter2 + v9);
  v13 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v9) + 4096;
  if ( !v4 )
  {
    v13 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v9) + 4080;
    if ( (*v5 & 0x4000) != 0 )
      v13 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v9) + 4072;
  }
  for ( i = 0; i < v13; ++i )
  {
    if ( *v12 != (unsigned __int16)(unsigned __int8)*((_WORD *)v5 + 1) )
      KeBugCheckEx(0xC1u, BugCheckParameter2, (ULONG_PTR)v12, *v5, 0x24uLL);
    ++v12;
  }
  if ( (*v5 & 0x6000) == 0x4000 )
    VerifierFreeTrackedPool(BugCheckParameter2, v9);
  *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = -1737080031;
  *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x1C) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x20) = v9;
  *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v8;
  *(_QWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x28) = BugCheckParameter2;
  *(_QWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x40) = KeGetCurrentThread();
  v15 = Src;
  *(_QWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x30) = Src;
  v16 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 0x38) = v16;
  if ( v16 )
  {
    if ( v16 > 0x400 )
      v16 = 1024;
    memmove((void *)(v3 + 72), Src, v16);
  }
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 0x20) != 0 )
      AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    v28 = *(ULONG_PTR **)(qword_140388AF0 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 86));
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, (ULONG_PTR)v2, 1LL, 1, v35);
    if ( v35[1] )
      v35[3] -= v35[1];
    PteShadow = *v2;
    if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow();
    updated = MiUpdateLinkedListInPte(PteShadow);
    *v2 = updated;
    if ( (unsigned __int64)v2 >= v31 && (unsigned __int64)v2 <= v27 )
      MiWritePteShadow();
    v24 = SpinLock;
  }
  else
  {
    v17 = *v2;
    v18 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
      v17 = MiReadPteShadow();
    updated = v17;
    v19 = MI_GET_PFN_FROM_PTE(&updated, v15, v12, v18);
    v20 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL);
    _InterlockedDecrement64(&qword_1403880C8);
    v21 = v20 - 0x58000000000LL;
    updated = MiMakeLinkedListPte(0xFFFFFFFFFLL);
    *v2 = updated;
    if ( (unsigned __int64)v2 >= v23 && (unsigned __int64)v2 <= v22 )
      MiWritePteShadow();
    v24 = SpinLock;
    v38 = 20LL;
    v37 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v36 = &qword_1403892C0 != SpinLock ? 2 : 0;
    MiInsertTbFlushEntry(&v36, v3, 1LL, 0);
    MiFlushTbList((__int64)&v36, v25);
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
    v35[3] = 1LL;
    v28 = &MiSystemPartition;
    v35[0] = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_1403893F0, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_140389290);
  MiRemoveSpecialPoolRange(v24, v8, (unsigned __int64)v2, v27);
  if ( v24 != &qword_1403892C0 )
    _InterlockedDecrement64((volatile signed __int64 *)v24 + 7);
  if ( v35[0] )
  {
    if ( v28 == &MiSystemPartition )
      MiReturnResidentAvailable(v35[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 752, v35[0]);
  }
  if ( v35[3] )
    MiReturnCommit((__int64)v28, v35[3]);
}
