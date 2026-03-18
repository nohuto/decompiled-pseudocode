/*
 * XREFs of CreateEmptyRgn @ 0x1C0056A60
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
