/*
 * XREFs of sub_14044A774 @ 0x14044A774
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14044A194 (WbAddWarbirdEncryptionSegment.c)
 *     sub_14044A2C0 @ 0x14044A2C0 (sub_14044A2C0.c)
 *     WbDecryptEncryptionSegment @ 0x14044A354 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x14044A4DC (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14044A64C (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140583AF0 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x140451B30 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_14044A774(volatile signed __int64 *a1)
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
