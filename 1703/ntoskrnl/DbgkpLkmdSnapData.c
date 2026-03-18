/*
 * XREFs of DbgkpLkmdSnapData @ 0x1401E1EC0
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapPendingIrps @ 0x140682370 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapData(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 5184))(
           a1 + 5120,
           a2,
           a3,
           0LL,
           0LL,
           0LL);
}
