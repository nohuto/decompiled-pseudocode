/*
 * XREFs of RtlRetrieveNtUserPfn @ 0x180090B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlRetrieveNtUserPfn(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  if ( !byte_18016F1C8 )
    return 3221225485LL;
  *a1 = &NtDllUserStubs;
  *a2 = &off_180113958;
  *a3 = &off_180113A10;
  return 0LL;
}
