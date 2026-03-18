/*
 * XREFs of NtGdiEndDoc @ 0x1C0126990
 * Callers:
 *     <none>
 * Callees:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0144730 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0, 1u);
}
