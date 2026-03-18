/*
 * XREFs of MiMakeProtoLeafValid @ 0x1400BF71C
 * Callers:
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r8

  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( (MI_READ_PTE_LOCK_FREE(a1) & 1) == 0 )
  {
    MiUnlockPageTableInternal(v5, v6);
    MiUnlockWorkingSetShared((__int64)v5, a3, v7);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(a1, 0);
  }
  return 0LL;
}
