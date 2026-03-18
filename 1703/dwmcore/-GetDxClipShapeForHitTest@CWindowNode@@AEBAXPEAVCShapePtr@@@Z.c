/*
 * XREFs of ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180162678
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::GetDxClipShapeForHitTest(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  if ( *((_QWORD *)this + 114) )
  {
    CGeometry::GetShapeData(*((CGeometry **)this + 114), (const struct D2D_SIZE_F *)this + 16, a2);
  }
  else
  {
    v3 = *((_QWORD *)this + 122);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 16) )
      {
        v4 = *(_QWORD *)(v3 + 8);
        CShapePtr::Release((CRectanglesShape **)a2);
        *(_QWORD *)a2 = v4;
        *((_BYTE *)a2 + 8) = 0;
      }
    }
  }
}
