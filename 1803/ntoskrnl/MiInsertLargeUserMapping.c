/*
 * XREFs of MiInsertLargeUserMapping @ 0x140268D44
 * Callers:
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

void __fastcall MiInsertLargeUserMapping(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r12
  ULONG_PTR v8; // rsi
  int v9; // r13d
  int v10; // r9d
  LONG *SharedVm; // rbx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int16 *v23; // [rsp+30h] [rbp-48h]
  unsigned __int64 v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+18h]

  v26 = a3;
  v25 = a2;
  v5 = a4;
  v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v24 = v6 + 48 * MiLargePageSizes[v5];
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v23 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  if ( v10 )
  {
    v12 = MiLockWorkingSetShared((__int64)v23);
  }
  else
  {
    v9 = 1;
    SharedVm = MiGetSharedVm((__int64)v23);
    v12 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  v13 = v12;
  if ( (_DWORD)v5 != 1 )
  {
    v14 = (unsigned int)(1 - v5);
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
  }
  v15 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMakeSystemAddressValid(v8, 0LL, v26, v12, v9);
  v16 = MI_READ_PTE_LOCK_FREE(v15);
  MiIncreaseUsedPtesCount(48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1u);
  v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v15) >> 12) & 0xFFFFFFFFFLL;
  do
  {
    MiLockPageAtDpcInline(v6);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
    v18 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(v6 + 24) = v18 | 1;
    *(_WORD *)(v6 + 32) = 2;
    *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
    *(_QWORD *)(v6 + 16) = ZeroPte;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    *(_QWORD *)(v6 + 40) = v17 | *(_QWORD *)(v6 + 40) & 0xFE7FFFF000000000uLL | 0x40000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 += 8LL;
    v6 += 48LL;
  }
  while ( v6 < v24 );
  *(_QWORD *)v8 = v25;
  if ( MiPteInShadowRange(v8) )
    MiWritePteShadow(v20, v19, v21);
  if ( v9 )
  {
    MiUnlockWorkingSetExclusive((__int64)v23, v13);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)v23, v15);
    MiUnlockWorkingSetShared((__int64)v23, v13, v22);
  }
}
