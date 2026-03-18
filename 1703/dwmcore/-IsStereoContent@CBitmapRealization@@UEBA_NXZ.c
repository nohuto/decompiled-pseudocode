/*
 * XREFs of ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x1801304A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsStereoContent(CBitmapRealization *this)
{
  return *((_DWORD *)this + 34) == 3;
}
