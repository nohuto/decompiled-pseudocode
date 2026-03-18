/*
 * XREFs of XpressDecodeClose @ 0x1402CB1BC
 * Callers:
 *     CMFReadCompressedSegment @ 0x1407C8DAC (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1405E9DE0 (CMFFreeFn.c)
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
