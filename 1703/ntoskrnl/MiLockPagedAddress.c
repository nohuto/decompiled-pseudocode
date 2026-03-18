/*
 * XREFs of MiLockPagedAddress @ 0x140036C60
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x140134E24 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MiMakeSystemAddressValidSystemWs @ 0x140004860 (MiMakeSystemAddressValidSystemWs.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     MiCaptureDirtyBitToPfn @ 0x140100BFC (MiCaptureDirtyBitToPfn.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 AnyMultiplexedVm; // r15
  __int64 SharedVm; // rdi
  KIRQL v6; // al
  KIRQL v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rax
  _DWORD *v13; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v7 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(v3);
      v16 = v8;
      if ( (v8 & 1) != 0 )
        break;
      MiMakeSystemAddressValidSystemWs(AnyMultiplexedVm, a1, v7);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    MiCopyOnWriteEx(v3 << 25 >> 16, 0);
  }
  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v16) - 0x58000000000LL;
  MiLockPageAtDpcInline(v9);
  if ( (unsigned int)MiAddLockedPageCharge(v9) )
  {
    v11 = 1;
    v2 = MiCaptureDirtyBitToPfn(v9);
  }
  else
  {
    v11 = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
  {
    if ( v2 )
      MiReleasePageFileInfo(*(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)), v2, 1LL);
    v12 = MI_READ_PTE_LOCK_FREE(v3);
    v16 = v12;
    if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
      MiWriteValidPteVolatile(v3, 3LL);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(a1, 0LL, 1LL);
  }
  LOBYTE(v10) = v7;
  MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v10);
  v13 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
  else
    *v13 = 0;
  __writecr8(v7);
  return v11;
}
