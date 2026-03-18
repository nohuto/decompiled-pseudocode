/*
 * XREFs of XpressDecodeClose @ 0x140295B7C
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407615E4 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x14059F590 (CMFFreeFn.c)
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
