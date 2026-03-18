/*
 * XREFs of ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x1800993B0
 * Callers:
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x180099174 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18011C4C0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x180178B94 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 */

bool __fastcall CWindowNode::IsDxShapeExclusionNeeded(CWindowNode *this)
{
  bool v1; // bl
  CRegionShape *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( (*((_QWORD *)this + 115) || *((_QWORD *)this + 118)) && *((_BYTE *)this + 1014) )
  {
    CWindowNode::GetDxClipShape(this, v3);
    if ( v3[0] )
      v1 = !CShapePtr::IsEmpty((CShapePtr *)v3);
    CShapePtr::Release(v3);
  }
  return v1;
}
