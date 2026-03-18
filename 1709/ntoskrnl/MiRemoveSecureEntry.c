/*
 * XREFs of MiRemoveSecureEntry @ 0x140034510
 * Callers:
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x14057EE40 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v5; // edi
  int v6; // r15d
  unsigned __int16 *v7; // rbp
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r12
  __int64 *i; // rdx
  volatile LONG *v12; // rax

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v5 = 0;
  v6 = 0;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm(v7);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v10 = v9;
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
  MiPreUnlockWorkingSetExclusive(v7, v9);
  v12 = (volatile LONG *)MiGetSharedVm(v7);
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  __writecr8(v10);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v5 == 1 )
    *(_DWORD *)(BugCheckParameter2 + 48) &= ~0x4000u;
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
