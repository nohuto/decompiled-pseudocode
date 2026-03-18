/*
 * XREFs of MiLockPagedAddress @ 0x140120470
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x1401203C0 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x140032400 (MiCaptureDirtyBitToPfn.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14012069C (MiMakeSystemAddressValidSystemWs.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockPagedAddress(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  char *AnyMultiplexedVm; // r15
  LONG *SharedVm; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  KIRQL v7; // r14
  __int64 PteShadow; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned int v13; // ebp
  __int64 v14; // rax
  LONG *v15; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v2;
      v9 = 0xFFFFF6FB7DBED7F8uLL;
      if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v2, *(_QWORD *)v2);
      v18 = PteShadow;
      if ( (PteShadow & 1) != 0 )
        break;
      LOBYTE(v5) = v7;
      MiMakeSystemAddressValidSystemWs(AnyMultiplexedVm, a1, v5);
    }
    if ( (PteShadow & 0x200) == 0 )
      break;
    MiCopyOnWriteEx((__int64)(v2 << 25) >> 16, (__int64 *)v2, -1LL, v7, 0);
  }
  v10 = MI_GET_PFN_FROM_PTE(&v18, v9, v5, v6);
  MiLockPageAtDpcInline(v10);
  v12 = 0LL;
  if ( (unsigned int)MiAddLockedPageCharge(v10, 0LL, v11) )
  {
    v13 = 1;
    v12 = MiCaptureDirtyBitToPfn(v10);
  }
  else
  {
    v13 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
  {
    if ( v12 )
      MiReleasePageFileInfo(
        *(struct _KEVENT **)(qword_140388AF0 + 8 * ((*(_QWORD *)(v10 + 40) >> 40) & 0x3FFLL)),
        v12,
        1);
    v14 = *(_QWORD *)v2;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
      v14 = MiReadPteShadow(v2, *(_QWORD *)v2);
    v18 = v14;
    if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(a1, 0, 1u);
  }
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v7);
  v15 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
  else
    *v15 = 0;
  __writecr8(v7);
  return v13;
}
