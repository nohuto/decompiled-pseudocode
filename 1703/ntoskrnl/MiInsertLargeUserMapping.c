/*
 * XREFs of MiInsertLargeUserMapping @ 0x14022181C
 * Callers:
 *     MiMapUserLargePages @ 0x1406BEE28 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x1400A8338 (MiIncreaseUsedPtesCount.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertLargeUserMapping(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int16 *v10; // r15
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  unsigned __int8 v13; // bp
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  char v18; // al
  LONG *v19; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v23 = a3;
  v22 = a2;
  v5 = a4;
  v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v22) - 0x58000000000LL;
  v7 = v6 + 48 * MiLargePageSizes[v5];
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)v10);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  if ( (_DWORD)v5 != 1 )
  {
    v14 = (unsigned int)(1 - v5);
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v14;
    }
    while ( v14 );
  }
  MiMakeSystemAddressValid(v9, 0LL, v23, v12, 1);
  v15 = MI_GET_PFN_FROM_PTE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiIncreaseUsedPtesCount(v15, 1u);
  v16 = MI_GET_PAGE_FRAME_FROM_PTE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFLL;
  do
  {
    MiLockPageAtDpcInline(v6);
    v17 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 24) = v17 & 0xC000000000000000uLL | 1;
    *(_WORD *)(v6 + 32) = 2;
    v18 = *(_BYTE *)(v6 + 34) & 0xFE;
    *(_QWORD *)(v6 + 8) = v8;
    *(_BYTE *)(v6 + 34) = v18 | 6;
    *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
    *(_QWORD *)(v6 + 40) = v16 | *(_QWORD *)(v6 + 40) & 0xFE7FFFF000000000uLL | 0x40000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 += 8LL;
    v6 += 48LL;
  }
  while ( v6 < v7 );
  *(_QWORD *)v9 = v22;
  if ( MiPteInShadowRange(v9) )
    MiWritePteShadow();
  MiPreUnlockWorkingSetExclusive((__int64)v10, v13);
  v19 = MiGetSharedVm((__int64)v10);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19, retaddr);
  else
    *v19 = 0;
  result = v13;
  __writecr8(v13);
  return result;
}
