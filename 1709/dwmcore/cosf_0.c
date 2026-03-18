/*
 * XREFs of cosf_0 @ 0x1800C5D4A
 * Callers:
 *     ?D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1800BA70C (-D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1800BEE68 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18015D790 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x18018416C (-Cos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x180190C3C (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801CA000 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf_0(float X)
{
  return cosf(X);
}
