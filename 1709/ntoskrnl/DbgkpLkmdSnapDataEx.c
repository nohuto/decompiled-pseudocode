/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1401E60B4
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x1406AD7EC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(a1 + 10304))(a1 + 10240);
}
