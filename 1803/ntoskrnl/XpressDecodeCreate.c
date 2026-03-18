/*
 * XREFs of XpressDecodeCreate @ 0x1402CB1E8
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407C8DAC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x1407C8170 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
