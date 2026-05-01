/*
 * XREFs of RmActivityImportanceTakeMostImportant @ 0x18000BE70
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x18000F88C (RmpActivityImportanceMergeVectors.c)
 */

__int64 __fastcall RmActivityImportanceTakeMostImportant(__int64 a1, __int64 a2, _DWORD *a3)
{
  *a3 = RmpActivityImportanceMergeVectors();
  return 0LL;
}
