/*
 * XREFs of HasCapture @ 0x1C012ED20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 HasCapture()
{
  __int64 v0; // rax
  unsigned int v1; // ecx

  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( !v0 )
    return 0;
  v1 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v0 + 2744), 1, 1) )
    return 0;
  return v1;
}
