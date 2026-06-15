/*
 * XREFs of WPP_SF_I @ 0x180021D64
 * Callers:
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x1800225E0 (-StreamStopped@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_I(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return TraceMessage(a1, 0x2Bu, &WPP_b0ca754e0f2d3c7c76d04bc667a3e56e_Traceguids, a2, va, 8LL, 0LL);
}
