/*
 * XREFs of sub_14048A48C @ 0x14048A48C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140489EA8 (WbAddWarbirdEncryptionSegment.c)
 *     sub_140489FD8 @ 0x140489FD8 (sub_140489FD8.c)
 *     WbDecryptEncryptionSegment @ 0x14048A06C (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14048A130 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x14048A1F4 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14048A364 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x14056ED6C (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x14048B8D4 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_14048A48C(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      WbFreeWarbirdEncryptionSegment((PVOID)a1);
  }
  return v1;
}
