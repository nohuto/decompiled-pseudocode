/*
 * XREFs of DpiUnmapIommuIdentityRangeInternal @ 0x1C0040998
 * Callers:
 *     DpiUnmapIommuIdentityRange @ 0x1C01F03B0 (DpiUnmapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiUnmapIommuIdentityRangeInternal(__int64 a1)
{
  return ((__int64 (__fastcall *)(_QWORD))qword_1C007AC98)(*(_QWORD *)(a1 + 80));
}
