/*
 * XREFs of SeGetCachedSigningLevel @ 0x140581CA0
 * Callers:
 *     NtGetCachedSigningLevel @ 0x1404502B0 (NtGetCachedSigningLevel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140362630 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140362630)(a1, a3, a2);
  return 3221225485LL;
}
