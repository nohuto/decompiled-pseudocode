/*
 * XREFs of CcFlushCache @ 0x140034710
 * Callers:
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 *     HvViewMapFlush @ 0x140675B48 (HvViewMapFlush.c)
 * Callees:
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((_DWORD)SectionObjectPointer, (_DWORD)FileOffset, Length, 0, 0, (__int64)IoStatus);
}
