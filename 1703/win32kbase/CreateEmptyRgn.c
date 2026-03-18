/*
 * XREFs of CreateEmptyRgn @ 0x1C0041FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct HOBJ__ *CreateEmptyRgn()
{
  return GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
}
