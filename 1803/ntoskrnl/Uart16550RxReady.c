/*
 * XREFs of Uart16550RxReady @ 0x1402CCCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall Uart16550RxReady(__int64 a1, __int64 a2)
{
  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  LOBYTE(a2) = 5;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, a2) & 1;
}
