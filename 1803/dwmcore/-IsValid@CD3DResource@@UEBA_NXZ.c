/*
 * XREFs of ?IsValid@CD3DResource@@UEBA_NXZ @ 0x1800D6F10
 * Callers:
 *     ?IsValid@CHwBitmapCache@@WHI@EBA_NXZ @ 0x1800DE460 (-IsValid@CHwBitmapCache@@WHI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 69);
}
