/*
 * XREFs of ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180178C18
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18009A770 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::GetDxClipShapeForHitTest(CWindowNode *this, struct CShapePtr *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx

  if ( *((_QWORD *)this + 117) )
  {
    CGeometry::GetShapeData(*((CGeometry **)this + 117), (const struct D2D_SIZE_F *)((char *)this + 132), a2);
  }
  else
  {
    v3 = *((_QWORD *)this + 125);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 16) )
      {
        v4 = *(_QWORD *)(v3 + 8);
        CShapePtr::Release((CRegionShape **)a2);
        *(_QWORD *)a2 = v4;
        *((_BYTE *)a2 + 8) = 0;
      }
    }
  }
}
