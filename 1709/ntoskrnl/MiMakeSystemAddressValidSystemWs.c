/*
 * XREFs of MiMakeSystemAddressValidSystemWs @ 0x14012069C
 * Callers:
 *     MiLockPagedAddress @ 0x140120470 (MiLockPagedAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValidSystemWs(__int64 a1, ULONG_PTR a2, KIRQL a3)
{
  __int64 v6; // rdx
  int v7; // eax
  ULONG_PTR v8; // rbx
  LONG *SharedVm; // rbx
  KIRQL v10; // al

  if ( MiIsAddressValid(a2) )
    return 0LL;
  do
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive(a1, v6);
    v7 = MmAccessFault(0LL, a2, 0LL, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 2uLL, v8, 0LL, a2);
    }
    SharedVm = MiGetSharedVm(a1);
    v10 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a3 = v10;
  }
  while ( !MiIsAddressValid(a2) );
  return 1LL;
}
