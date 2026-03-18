/*
 * XREFs of FsRtlRemoveReservedPerFileContext @ 0x1401E4810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlRemoveReservedPerFileContext(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( !*a1 )
    return 0LL;
  result = *(_QWORD *)(v1 + 24);
  if ( result )
    *(_QWORD *)(v1 + 24) = 0LL;
  return result;
}
