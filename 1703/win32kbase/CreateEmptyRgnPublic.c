/*
 * XREFs of CreateEmptyRgnPublic @ 0x1C00425D0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C002B840 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

struct HOBJ__ *CreateEmptyRgnPublic()
{
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v1; // r8

  RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
  if ( RectRgnIndirect )
  {
    PsGetCurrentProcessId();
    LOBYTE(v1) = 4;
    HmgSetOwner(RectRgnIndirect, 0LL, v1);
  }
  return RectRgnIndirect;
}
