/*
 * XREFs of LdrpUnmapCMFSegment @ 0x1800E0E30
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18001AA5C (LdrpGetMUIFromCMFSegment.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x18008E9B4 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 *     LdrpCMFAddToStanbyQueue @ 0x18008EA20 (LdrpCMFAddToStanbyQueue.c)
 * Callees:
 *     ResCRuntimeUnmapSegment @ 0x18010C0C4 (ResCRuntimeUnmapSegment.c)
 */

bool __fastcall LdrpUnmapCMFSegment(__int64 a1)
{
  return (char *)ResRuntimeView - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (unsigned int)ResCRuntimeUnmapSegment(a1, (unsigned int)a1) != 0;
}
