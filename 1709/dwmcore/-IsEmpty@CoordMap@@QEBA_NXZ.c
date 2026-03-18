/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x18011C7E8
 * Callers:
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180066730 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  bool result; // al

  result = 0;
  if ( !*((_DWORD *)this + 6) && !*((_DWORD *)this + 54) )
    return *((_DWORD *)this + 102) == 0;
  return result;
}
