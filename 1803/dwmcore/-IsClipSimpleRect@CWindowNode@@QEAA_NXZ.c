/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801A9B5C
 * Callers:
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801907D0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CRectanglesShape *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( !*((_QWORD *)this + 90)
    || (int)CWindowNode::EnsureEffectiveSpriteClip(this) < 0
    || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(*((CShape **)this + 113))) != 0 )
  {
    if ( *((_QWORD *)this + 108) )
    {
      CWindowNode::GetDxClipShape((__int64)this, (__int64)v4);
      if ( v4[0] )
        IsAxisAlignedRectangle = CShapePtr::IsAxisAlignedRectangle(v4);
      CShapePtr::Release(v4);
    }
  }
  return IsAxisAlignedRectangle;
}
