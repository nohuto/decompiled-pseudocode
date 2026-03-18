/*
 * XREFs of ?HasContent@CBitmapResource@@UEBA_NXZ @ 0x1800B55B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapResource::HasContent(CBitmapResource *this)
{
  return *((_QWORD *)this + 9) != 0LL;
}
