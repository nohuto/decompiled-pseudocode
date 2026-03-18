/*
 * XREFs of CcFlushCache @ 0x140125A10
 * Callers:
 *     HvViewMapFlush @ 0x1406A0080 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, (__int64 *)FileOffset, Length, 0LL, 0, (int *)&IoStatus->0);
}
