/*
 * XREFs of XpressDecodeCreate @ 0x14026B638
 * Callers:
 *     CMFReadCompressedSegment @ 0x140721A38 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFAllocFn @ 0x140721030 (CMFAllocFn.c)
 */

__int64 XpressDecodeCreate()
{
  __int64 result; // rax

  result = CMFAllocFn(0LL, 112LL);
  if ( result )
    *(_DWORD *)(result + 104) = 903790814;
  return result;
}
