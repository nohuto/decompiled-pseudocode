/*
 * XREFs of DpiMapIommuIdentityRangeInternal @ 0x1C00406C0
 * Callers:
 *     DpiMapIommuIdentityRange @ 0x1C01EFAD0 (DpiMapIommuIdentityRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiMapIommuIdentityRangeInternal(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C007AC90)(*(_QWORD *)(a1 + 80), 3LL, a2);
}
