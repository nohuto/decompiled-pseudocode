/*
 * XREFs of MiMakeProtoLeafValid @ 0x1400293F8
 * Callers:
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR __fastcall MiMakeProtoLeafValid(ULONG_PTR a1, __int64 a2, KIRQL a3)
{
  ULONG_PTR v4; // rdi
  unsigned __int16 *v5; // r15
  __int64 v6; // rdx
  __int64 SharedVm; // rbx

  v4 = a1;
  v5 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  while ( (MI_READ_PTE_LOCK_FREE(a1) & 1) == 0 )
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive(v5, v6);
    SharedVm = MiGetSharedVm(v5);
    a3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    MiMakeSystemAddressValid(v4, 1);
    a1 = v4;
  }
  return v4;
}
