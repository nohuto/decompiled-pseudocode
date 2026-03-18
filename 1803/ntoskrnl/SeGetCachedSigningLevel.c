/*
 * XREFs of SeGetCachedSigningLevel @ 0x14056C8E0
 * Callers:
 *     NtGetCachedSigningLevel @ 0x14056C65C (NtGetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_1403A5C90 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1403A5C90)(a1, a3, a2);
  return 3221225485LL;
}
