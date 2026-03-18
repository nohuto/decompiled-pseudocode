/*
 * XREFs of InbvGetResourceAddress @ 0x1401EE23C
 * Callers:
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvGetResourceAddress()
{
  if ( qword_14036E468 && *(_QWORD *)(qword_14036E468 + 128) )
    return guard_dispatch_icall();
  else
    return 0LL;
}
