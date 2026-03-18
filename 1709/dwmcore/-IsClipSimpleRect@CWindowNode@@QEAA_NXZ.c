/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180178E28
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180167DB0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180097F4C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CRegionShape *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( (!*((_QWORD *)this + 98)
     || (int)CWindowNode::EnsureEffectiveSpriteClip(this) < 0
     || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(*((CShape **)this + 124))) != 0)
    && (*((_QWORD *)this + 115) || *((_QWORD *)this + 118)) )
  {
    CWindowNode::GetDxClipShape((__int64)this, (struct CShapePtr *)v4);
    if ( v4[0] )
      IsAxisAlignedRectangle = CShapePtr::IsAxisAlignedRectangle(v4);
    CShapePtr::Release(v4);
  }
  return IsAxisAlignedRectangle;
}
