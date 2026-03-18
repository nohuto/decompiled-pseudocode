/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C0056A80
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C007B3E0 (UserSetDCVisRgn.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    HmgSetOwner((unsigned int)RectRgnIndirect, 0, 4);
  }
  return RectRgnIndirect;
}
