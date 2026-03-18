/*
 * XREFs of XpressDecodeCreate @ 0x140295BA8
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407615E4 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140760F28 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
