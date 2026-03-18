/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800902E8
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800900A8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18013F478 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801A9A94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

bool __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  bool v1; // bl
  CRectanglesShape *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 108) && *((_BYTE *)this + 918) )
  {
    CWindowNode::GetDxClipShape(this, v3);
    if ( v3[0] )
      v1 = !CShapePtr::IsEmpty((CShapePtr *)v3);
    CShapePtr::Release(v3);
  }
  return v1;
}
