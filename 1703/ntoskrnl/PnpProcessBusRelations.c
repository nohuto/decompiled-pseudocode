/*
 * XREFs of PnpProcessBusRelations @ 0x14056F864
 * Callers:
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 * Callees:
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 */

__int64 __fastcall PnpProcessBusRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        UNICODE_STRING *DestinationString,
        ULONG_PTR BugCheckParameter3)
{
  _QWORD *v6; // rbx
  __int64 result; // rax

  v6 = *(_QWORD **)(a1 + 8);
  if ( !v6 )
    return 0LL;
  while ( 1 )
  {
    result = PnpProcessRelation((__int64)v6, a2, a3, a4, DestinationString, BugCheckParameter3);
    if ( (int)result < 0 )
      break;
    v6 = (_QWORD *)*v6;
    if ( !v6 )
      return 0LL;
  }
  return result;
}
