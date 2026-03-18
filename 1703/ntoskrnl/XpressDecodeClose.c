/*
 * XREFs of XpressDecodeClose @ 0x14026B60C
 * Callers:
 *     CMFReadCompressedSegment @ 0x140721A38 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14056E280 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( Buffer )
  {
    if ( Buffer[26] == 903790814 )
    {
      Buffer[26] = 0;
      CMFFreeFn(0LL, Buffer);
    }
  }
}
