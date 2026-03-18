/*
 * XREFs of CmpFindExtraParameterInBlock @ 0x14068AA94
 * Callers:
 *     CmRetrieveExtraParameter @ 0x14068A9F4 (CmRetrieveExtraParameter.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x1406A7B04 (VrpPreOpenOrCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindExtraParameterInBlock(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v4; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v4 = i[2] - *a2;
    if ( !v4 )
      v4 = i[3] - a2[1];
    if ( !v4 )
      break;
  }
  *a3 = i;
  return 0LL;
}
