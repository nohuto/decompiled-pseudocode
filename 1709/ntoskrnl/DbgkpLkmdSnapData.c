/*
 * XREFs of DbgkpLkmdSnapData @ 0x1401E6080
 * Callers:
 *     DbgkCaptureLiveDump @ 0x1406ACEEC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x1406AD638 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 10304))(
           a1 + 10240,
           a2,
           a3,
           0LL,
           0LL,
           0LL);
}
