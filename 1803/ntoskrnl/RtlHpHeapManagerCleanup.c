/*
 * XREFs of RtlHpHeapManagerCleanup @ 0x140292FE8
 * Callers:
 *     ExCleanupSessionHeapManager @ 0x1401541E4 (ExCleanupSessionHeapManager.c)
 * Callees:
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 *     RtlCSparseBitmapCleanup @ 0x14029D7B0 (RtlCSparseBitmapCleanup.c)
 */

__int64 __fastcall RtlHpHeapManagerCleanup(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi

  v2 = (_QWORD *)(a1 + 12432);
  v3 = 3LL;
  do
  {
    if ( *v2 )
      RtlpHpHeapDestroy();
    v2 += 2;
    --v3;
  }
  while ( v3 );
  RtlCSparseBitmapCleanup(a1 + 8);
  return RtlCSparseBitmapCleanup(a1 + 96);
}
