/*
 * XREFs of MiCheckFatalAccessViolation @ 0x140125200
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 * Callees:
 *     MiIsStoreProcess @ 0x1400E6B90 (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  ULONG_PTR v5; // r10

  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFCFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 1740) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (unsigned int)MiIsStoreProcess(a4) )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return 0LL;
}
