/*
 * XREFs of flagString @ 0x1C0129468
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0123D54 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     strncat @ 0x1C009DA90 (strncat.c)
 */

char *__fastcall flagString(__int16 a1)
{
  Dest = 0;
  if ( (a1 & 1) != 0 )
    strncat(&Dest, "|NEW", 4uLL);
  if ( (a1 & 2) != 0 )
    strncat(&Dest, "|INRANGE", 8uLL);
  if ( (a1 & 4) != 0 )
    strncat(&Dest, "|INCONTACT", 0xAuLL);
  if ( (a1 & 0x2000) != 0 )
    strncat(&Dest, "|PRIMARY", 8uLL);
  if ( (a1 & 0x4000) != 0 )
    strncat(&Dest, "|CONFIDENCE", 0xBuLL);
  if ( a1 < 0 )
    strncat(&Dest, "|CANCELED", 9uLL);
  if ( (a1 & 0x10) != 0 )
    strncat(&Dest, "|FIRSTBUTTON", 0xCuLL);
  if ( (a1 & 0x20) != 0 )
    strncat(&Dest, "|SECONDBUTTON", 0xDuLL);
  if ( (a1 & 0x40) != 0 )
    strncat(&Dest, "|THIRDBUTTON", 0xCuLL);
  return &Dest;
}
