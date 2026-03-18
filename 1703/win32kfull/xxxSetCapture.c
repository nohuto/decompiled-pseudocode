/*
 * XREFs of xxxSetCapture @ 0x1C003C4E8
 * Callers:
 *     NtUserSetCapture @ 0x1C003C450 (NtUserSetCapture.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     xxxIsDragging @ 0x1C0139758 (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0211F88 (xxxDragObject.c)
 * Callees:
 *     xxxCapture @ 0x1C003C570 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( (*(_DWORD *)(v1 + 340) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) == v1)
    && ((v2 = *(__int64 **)(v1 + 72)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && (LOBYTE(v4) = 1, HMValidateHandleNoSecure(v3, v4))) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
