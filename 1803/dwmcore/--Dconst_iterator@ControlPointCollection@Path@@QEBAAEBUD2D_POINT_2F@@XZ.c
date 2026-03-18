/*
 * XREFs of ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x180208C34
 * Callers:
 *     ?GetControlPointCount@CPathData@@QEBAIXZ @ 0x18020911C (-GetControlPointCount@CPathData@@QEBAIXZ.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18020B914 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?GetControlPoints@Segment@Path@@QEBA?AV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x180208654 (-GetControlPoints@Segment@Path@@QEBA-AV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned int *)(a1 + 16);
  return Path::Segment::GetControlPoints(*(_BYTE **)a1, v3)[1] + 8 * v1;
}
