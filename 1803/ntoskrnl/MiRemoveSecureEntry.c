/*
 * XREFs of MiRemoveSecureEntry @ 0x1400E46F0
 * Callers:
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiSetVadFlags @ 0x1400E4A50 (MiSetVadFlags.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x140569118 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v5; // edi
  int v6; // ebp
  _KPROCESS *Process; // r15
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  __int64 *i; // rdx

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 && v5 <= 1 )
      ++v5;
    if ( i == BugCheckParameter3 )
    {
      v6 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v5 > 1 && v6 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v9);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v5 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
