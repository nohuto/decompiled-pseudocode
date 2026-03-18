/*
 * XREFs of xxxSetCapture @ 0x1C0046880
 * Callers:
 *     NtUserSetCapture @ 0x1C00467E0 (NtUserSetCapture.c)
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxIsDragging @ 0x1C0140348 (xxxIsDragging.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02134AC (xxxDragObject.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( (*(_DWORD *)(v1 + 380) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) == v1)
    && ((v2 = *(__int64 **)(v1 + 104)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2LL), v3) && (LOBYTE(v4) = 1, HMValidateHandleNoSecure(v3, v4))) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
