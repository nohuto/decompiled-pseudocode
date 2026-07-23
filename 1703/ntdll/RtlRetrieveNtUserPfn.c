/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180095DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18016B1C8 )
    return 3221225485LL;
  *a1 = &off_180110930;
  *a2 = &off_1801109E8;
  *a3 = &off_180110AA0;
  return 0LL;
}
