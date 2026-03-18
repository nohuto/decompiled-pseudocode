/*
 * XREFs of sub_140549C24 @ 0x140549C24
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x140440FC4 (WbAddWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140451400 (WbInPlaceEncryptionUnloadModule.c)
 *     sub_14045E04C @ 0x14045E04C (sub_14045E04C.c)
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140549988 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140549AFC (WbGetWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x14041FBAC (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_140549C24(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      WbFreeWarbirdEncryptionSegment(a1);
  }
  return v1;
}
