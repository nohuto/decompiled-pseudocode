/*
 * XREFs of _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800227E0
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( *a1 == a1[1] )
    v2 = 0LL;
  else
    v2 = *(_QWORD *)(*a1 + 464LL);
  return 1000 * (unsigned int)((unsigned __int64)(a2 - v2) / g_qpcFrequency.QuadPart)
       + (unsigned int)(1000 * ((unsigned __int64)(a2 - v2) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
}
