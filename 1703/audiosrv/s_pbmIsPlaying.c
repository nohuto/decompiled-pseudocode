/*
 * XREFs of s_pbmIsPlaying @ 0x1800B0BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmIsPlaying(__int64 a1, __int64 a2)
{
  if ( (unsigned int)IsPbmPlayingSupported() )
    return PbmIsPlaying(a1, a2);
  else
    return 0LL;
}
