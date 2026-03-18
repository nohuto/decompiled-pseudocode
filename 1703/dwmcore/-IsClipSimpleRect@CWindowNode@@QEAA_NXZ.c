/*
 * XREFs of ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180162890
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180164910 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

char __fastcall CWindowNode::IsClipSimpleRect(CWindowNode *this)
{
  char IsAxisAlignedRectangle; // di
  CShape *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  IsAxisAlignedRectangle = 1;
  if ( (!*((_QWORD *)this + 95)
     || (int)CWindowNode::EnsureEffectiveSpriteClip(this) < 0
     || (IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(*((CShape **)this + 121))) != 0)
    && (*((_QWORD *)this + 112) || *((_QWORD *)this + 115)) )
  {
    CWindowNode::GetDxClipShape((__int64)this, (struct CShapePtr *)v4);
    if ( v4[0] )
      IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(v4[0]);
    CShapePtr::Release(v4);
  }
  return IsAxisAlignedRectangle;
}
