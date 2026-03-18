/*
 * XREFs of MmFreeSpecialPool @ 0x14025CAE4
 * Callers:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeLinkedListPte @ 0x1401A65E4 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401A6800 (MiUpdateLinkedListInPte.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     MiBadShareCount @ 0x1401A68BC (MiBadShareCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiCheckSpecialPoolSlop @ 0x14025BE40 (MiCheckSpecialPoolSlop.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 *     VerifierFreeTrackedPool @ 0x140260484 (VerifierFreeTrackedPool.c)
 */

void __fastcall MmFreeSpecialPool(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR *v2; // r15
  unsigned int *v3; // rsi
  unsigned __int8 CurrentIrql; // cl
  unsigned int v5; // r8d
  KSPIN_LOCK *v6; // r13
  int v7; // r12d
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // r9
  _BYTE *v10; // rcx
  unsigned __int8 *v11; // r8
  unsigned int v12; // ecx
  unsigned int i; // r9d
  ULONG_PTR v14; // rsi
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r14
  BOOL v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int8 v26; // si
  ULONG_PTR *v27; // rdi
  __int64 SessionVm; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  ULONG_PTR Src[2]; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp+0h] BYREF
  unsigned __int64 v36[5]; // [rsp+38h] [rbp+8h] BYREF
  int v37; // [rsp+60h] [rbp+30h] BYREF
  __int16 v38; // [rsp+64h] [rbp+34h]
  __int64 v39; // [rsp+68h] [rbp+38h]
  __int64 v40; // [rsp+70h] [rbp+40h]
  __int64 v41; // [rsp+78h] [rbp+48h]

  memset(v36, 0, 0x20uLL);
  v2 = (ULONG_PTR *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (unsigned int *)(BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL);
  if ( (BugCheckParameter2 & 0xFFF) == 0 )
    v3 = (unsigned int *)((BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL) + 4080);
  CurrentIrql = KeGetCurrentIrql();
  v5 = *v3;
  if ( CurrentIrql > (unsigned __int8)(2 - ((*v3 & 0x8000) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, BugCheckParameter2, 0x31uLL);
  v6 = &qword_1403CC540;
  if ( (v5 & 0x2000) != 0 )
    v6 = qword_1403CCF08;
  v7 = ((*v3 & 0x8000) != 0) | 0x20;
  if ( (v5 & 0x2000) == 0 )
    v7 = (*v3 & 0x8000) != 0;
  v8 = v5 & 0x1FFF;
  BugCheckParameter3 = v8;
  if ( (BugCheckParameter2 & 0xFFF) != 0 )
  {
    v9 = 4096 - (unsigned int)(BugCheckParameter2 & 0xFFF);
    if ( ((v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL) != v9 )
      KeBugCheckEx(0xC1u, BugCheckParameter2, v8, v9, 0x21uLL);
    v10 = v3 + 6;
    if ( (v5 & 0x4000) == 0 )
      v10 = v3 + 4;
    MiCheckSpecialPoolSlop(v10, BugCheckParameter2, v3);
    v8 = BugCheckParameter3;
  }
  v11 = (unsigned __int8 *)(BugCheckParameter2 + v8);
  v12 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v8) + 4096;
  if ( (BugCheckParameter2 & 0xFFF) == 0 )
  {
    v12 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v8) + 4080;
    if ( (*v3 & 0x4000) != 0 )
      v12 = (BugCheckParameter2 & 0xFFFFF000) - (BugCheckParameter2 + v8) + 4072;
  }
  for ( i = 0; i < v12; ++i )
  {
    if ( *v11 != (unsigned __int16)(unsigned __int8)*((_WORD *)v3 + 1) )
      KeBugCheckEx(0xC1u, BugCheckParameter2, (ULONG_PTR)v11, *v3, 0x24uLL);
    ++v11;
  }
  if ( (*v3 & 0x6000) == 0x4000 )
  {
    VerifierFreeTrackedPool(BugCheckParameter2, v8);
    LODWORD(v8) = BugCheckParameter3;
  }
  v14 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v14 + 24) = -1737080031;
  *(_DWORD *)(v14 + 28) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(v14 + 32) = v8;
  *(_DWORD *)(v14 + 36) = v7;
  *(_QWORD *)(v14 + 40) = BugCheckParameter2;
  *(_QWORD *)(v14 + 64) = KeGetCurrentThread();
  *(_QWORD *)(v14 + 48) = Src;
  v15 = 4096 - ((unsigned __int64)Src & 0xFFF);
  *(_DWORD *)(v14 + 56) = v15;
  if ( v15 )
  {
    if ( v15 > 0x400 )
      v15 = 1024;
    memmove((void *)(v14 + 72), Src, v15);
  }
  if ( (v7 & 1) != 0 )
  {
    if ( (v7 & 0x20) != 0 )
      SessionVm = MiGetSessionVm();
    else
      SessionVm = (__int64)MiGetAnyMultiplexedVm(2);
    v29 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v27 = *(ULONG_PTR **)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
    MiDeleteSystemPagableVm(SessionVm, 0LL, v29, 1LL, 1, v36);
    if ( v36[1] )
      v36[3] -= v36[1];
    v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v2);
    BugCheckParameter3 = MiUpdateLinkedListInPte(v30);
    *v2 = BugCheckParameter3;
    if ( MiPteInShadowRange((unsigned __int64)v2) )
      MiWritePteShadow(v32, v31, v33);
  }
  else
  {
    BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v16 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&BugCheckParameter3) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v17 = 48 * (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL);
    _InterlockedDecrement64(&qword_1403CB1C8);
    v18 = v17 - 0x58000000000LL;
    BugCheckParameter3 = MiMakeLinkedListPte(0xFFFFFFFFFLL);
    *v2 = BugCheckParameter3;
    v19 = MiPteInShadowRange((unsigned __int64)v2);
    v23 = 0LL;
    if ( v19 )
      MiWritePteShadow(v21, v20, v22);
    v39 = 20LL;
    v38 = v23;
    v40 = v23;
    v41 = v23;
    v37 = &qword_1403CC540 != v6 ? 2 : 0;
    MiInsertTbFlushEntry((__int64)&v37, v14, 1LL, 0);
    MiFlushTbList((__int64)&v37, v24, v25);
    v26 = MiLockPageInline(v16);
    *(_QWORD *)(v16 + 24) |= 0x4000000000000000uLL;
    if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      MiBadShareCount(v16);
    if ( *(_WORD *)(v16 + 32) != 1 )
      MiBadRefCount(v16);
    MiDecrementShareCount(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v18);
    MiDecrementShareCount(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v26);
    v36[3] = 1LL;
    v27 = &MiSystemPartition;
    v36[0] = 1LL;
  }
  if ( _InterlockedExchangeAdd64(&qword_1403CC668, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    _InterlockedDecrement(&dword_1403CC510);
  MiRemoveSpecialPoolRange(v6, v7, (unsigned __int64)v2);
  if ( v6 != &qword_1403CC540 )
    _InterlockedDecrement64((volatile signed __int64 *)v6 + 7);
  if ( v36[0] )
  {
    if ( v27 == &MiSystemPartition )
      MiReturnResidentAvailable(v36[0]);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 888, v36[0]);
  }
  if ( v36[3] )
    MiReturnCommit((__int64)v27, v36[3]);
}
