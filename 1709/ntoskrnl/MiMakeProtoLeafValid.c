/*
 * XREFs of MiMakeProtoLeafValid @ 0x140128454
 * Callers:
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 *__fastcall MiMakeProtoLeafValid(__int64 *BugCheckParameter4, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 *v5; // r13
  __int64 i; // rax
  LONG *v7; // rcx
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  void *retaddr; // [rsp+78h] [rbp+0h]

  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  for ( i = *BugCheckParameter4; ; i = *BugCheckParameter4 )
  {
    if ( (unsigned __int64)BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      LOBYTE(i) = MiReadPteShadow(BugCheckParameter4, i);
    }
    if ( (i & 1) != 0 )
      break;
    MiPreUnlockWorkingSetExclusive((__int64)v5, a3);
    v7 = &dword_140389780;
    if ( (v5[96] & 7) != 2 )
      v7 = (LONG *)(v5 + 100);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    else
      *v7 = 0;
    __writecr8(a3);
    SharedVm = MiGetSharedVm((__int64)v5);
    v9 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a3 = v9;
    MiMakeSystemAddressValid((ULONG_PTR)BugCheckParameter4, 0LL, 0, v9, 1);
  }
  return BugCheckParameter4;
}
