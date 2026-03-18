/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180057730
 * Callers:
 *     ?Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x18003C950 (-Init@Mesh@@AEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_DWORD *)this + 6) && !*((_DWORD *)this + 54) )
    return *((_DWORD *)this + 102) == 0;
  return result;
}
