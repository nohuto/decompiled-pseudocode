/*
 * XREFs of MiLockPagedAddress @ 0x14014B3DC
 * Callers:
 *     MiInsertNewCombineBlocks @ 0x14014B324 (MiInsertNewCombineBlocks.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiCaptureDirtyBitToPfn @ 0x140124940 (MiCaptureDirtyBitToPfn.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140255BA8 (MiFlushAllFilesystemPages.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiLockPagedAddress(ULONG_PTR a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  char *AnyMultiplexedVm; // rdi
  unsigned __int8 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // al
  __int64 v11; // r8
  __int64 v13; // r8
  int v14; // eax
  ULONG_PTR v15; // rsi
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v6 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v7 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      MiMakeSystemAddressValid(v2, 0LL, 0, v6, 4);
      v8 = MI_READ_PTE_LOCK_FREE(v2);
      v18 = v8;
      if ( (v8 & 1) != 0 )
        break;
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6, v13);
      v14 = MmAccessFault(0LL, a1, 0, 0LL);
      v15 = v14;
      if ( v14 < 0 )
      {
        MiFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v15, 0LL, a1);
      }
LABEL_15:
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    if ( (v8 & 0x200) == 0 )
      break;
    v16 = MiCopyOnWrite((__int64)(v2 << 25) >> 16, v2, 0xFFFFFFFFFFFFFFFFuLL, 0);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
    if ( v16 < 0 )
    {
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6, v17);
      MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v16);
      goto LABEL_15;
    }
  }
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v9);
  if ( (unsigned int)MiAddLockedPageCharge(v9, 0) )
    v3 = MiCaptureDirtyBitToPfn(v9);
  else
    v7 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v7 )
  {
    if ( v3 )
      MiReleasePageFileInfo(*(struct _KEVENT **)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v9 + 40) >> 40) & 0x3FFLL)), v3, 1);
    v10 = MI_READ_PTE_LOCK_FREE(v2);
    if ( (v10 & 0x20) == 0 || (v10 & 0x42) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v2, 3, 0);
    if ( (MiFlags & 0x100) == 0 )
      KeFlushSingleTb(a1, 0, 1u);
  }
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v4);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6, v11);
  return v7;
}
