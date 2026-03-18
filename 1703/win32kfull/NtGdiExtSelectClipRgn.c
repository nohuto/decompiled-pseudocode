/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C007DF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1)
{
  return GreExtSelectClipRgnInternal(a1);
}
