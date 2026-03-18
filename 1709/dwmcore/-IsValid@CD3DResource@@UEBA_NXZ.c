/*
 * XREFs of ?IsValid@CD3DResource@@UEBA_NXZ @ 0x1800C1BB0
 * Callers:
 *     ?IsValid@CHwBitmapCache@@WHI@EBA_NXZ @ 0x1800C6D70 (-IsValid@CHwBitmapCache@@WHI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DResource::IsValid(CD3DResource *this)
{
  return *((_BYTE *)this + 69);
}
