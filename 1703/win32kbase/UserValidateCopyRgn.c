/*
 * XREFs of UserValidateCopyRgn @ 0x1C007FB20
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     HmgValidHandle @ 0x1C007FB90 (HmgValidHandle.c)
 */

struct HOBJ__ *__fastcall UserValidateCopyRgn(HRGN a1, __int64 a2)
{
  struct HOBJ__ *RectRgnIndirect; // rbx

  RectRgnIndirect = 0LL;
  if ( a1 )
  {
    LOBYTE(a2) = 4;
    if ( (unsigned int)HmgValidHandle(a1, a2) )
    {
      RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      if ( !(unsigned int)GreCombineRgn((HRGN)RectRgnIndirect, a1, 0LL, 5) )
      {
        GreDeleteObject((HBRUSH)RectRgnIndirect);
        return 0LL;
      }
    }
  }
  return RectRgnIndirect;
}
