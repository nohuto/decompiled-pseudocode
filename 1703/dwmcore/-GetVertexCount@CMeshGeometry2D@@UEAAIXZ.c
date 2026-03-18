/*
 * XREFs of ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x180165410
 * Callers:
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x18012EDC8 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_S.c)
 *     ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801651F0 (-GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180165330 (-GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z @ 0x180165470 (-GetVerticesCore@CMeshGeometry2D@@MEAAJPEAUMilVertexXYZDUV2@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMeshGeometry2D::GetVertexCount(CMeshGeometry2D *this)
{
  int v1; // r9d
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 4) != 0 )
  {
    v3 = *((_DWORD *)this + 32);
    v4 = *((_DWORD *)this + 28) / 0xCu;
    *((_DWORD *)this + 19) = v4;
    v5 = *((_DWORD *)this + 36) >> 2;
    if ( v4 < v5 )
      v5 = v4;
    v6 = v3 >> 4;
    if ( v5 < v6 )
      v6 = v5;
    *((_DWORD *)this + 18) = v1 & 0xFFFFFFFB;
    *((_DWORD *)this + 19) = v6;
  }
  return *((unsigned int *)this + 19);
}
