/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x18008AFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18016F1D8 )
    return 3221225485LL;
  *a1 = &off_180110910;
  *a2 = &off_1801109D0;
  *a3 = &off_180110A90;
  return 0LL;
}
