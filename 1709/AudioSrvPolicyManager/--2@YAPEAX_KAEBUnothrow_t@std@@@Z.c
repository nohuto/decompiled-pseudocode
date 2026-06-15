/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058
 * Callers:
 *     ?RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPreStartContext@@@Z @ 0x180006430 (-RegisterStreamPreStart@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamInfo@@PEAPEAUIAudioStreamPre.c)
 *     ?Create@TSSession@@SAJKPEAPEAV1@@Z @ 0x18001ABA8 (-Create@TSSession@@SAJKPEAPEAV1@@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180020F5C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ?_SetCapacity@?$vector@PEBGV?$allocator@PEBG@utl@@@utl@@AEAA_N_K@Z @ 0x1800211F4 (-_SetCapacity@-$vector@PEBGV-$allocator@PEBG@utl@@@utl@@AEAA_N_K@Z.c)
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x180022340 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180001554 (--2@YAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new(SIZE_T a1, const struct std::nothrow_t *a2)
{
  LPVOID result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
