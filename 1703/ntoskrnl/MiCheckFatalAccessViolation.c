/*
 * XREFs of MiCheckFatalAccessViolation @ 0x140073514
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140073C0C (MiIsStoreProcess.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, struct _KPROCESS *a4)
{
  ULONG_PTR v5; // r10

  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFCFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( a4 == PsInitialSystemProcess )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (unsigned int)MiIsStoreProcess(a4) )
      KeBugCheckEx(0x1Au, 0x4478uLL, v5, 0LL, 0LL);
  }
  return 0LL;
}
