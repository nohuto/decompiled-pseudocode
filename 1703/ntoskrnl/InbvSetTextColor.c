/*
 * XREFs of InbvSetTextColor @ 0x1401EE340
 * Callers:
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 * Callees:
 *     <none>
 */

__int64 InbvSetTextColor()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 80) )
    return guard_dispatch_icall();
  else
    return 0xFFFFFFFFLL;
}
