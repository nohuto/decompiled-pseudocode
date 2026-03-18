/*
 * XREFs of MX6RxReady @ 0x1402CD550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall MX6RxReady(_QWORD *a1)
{
  __int64 v1; // rax

  if ( a1 && *a1 )
    return ((__int64 (__fastcall *)(__int64))off_140399430[0])(*a1 + 152LL) & 1;
  else
    LOBYTE(v1) = 0;
  return v1;
}
