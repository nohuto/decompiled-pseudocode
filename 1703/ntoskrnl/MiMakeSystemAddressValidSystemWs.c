/*
 * XREFs of MiMakeSystemAddressValidSystemWs @ 0x140004860
 * Callers:
 *     MiLockPagedAddress @ 0x140036C60 (MiLockPagedAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1402114A0 (MiFlushAllFilesystemPages.c)
 */

__int64 __fastcall MiMakeSystemAddressValidSystemWs(__int64 a1, ULONG_PTR a2, KIRQL a3)
{
  __int64 v6; // rdx
  int v7; // eax
  ULONG_PTR v8; // rbx
  __int64 SharedVm; // rbx
  KIRQL v10; // al

  if ( (unsigned __int8)MiIsAddressValid(a2) )
    return 0LL;
  do
  {
    LOBYTE(v6) = a3;
    MiUnlockWorkingSetExclusive(a1, v6);
    v7 = MmAccessFault(0LL, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MiFlushAllFilesystemPages(1LL);
      KeBugCheckEx(0x7Au, 2uLL, v8, 0LL, a2);
    }
    SharedVm = MiGetSharedVm(a1);
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    a3 = v10;
  }
  while ( !(unsigned __int8)MiIsAddressValid(a2) );
  return 1LL;
}
