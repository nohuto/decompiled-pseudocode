/*
 * XREFs of sinf_0 @ 0x1800D53B4
 * Callers:
 *     ?D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18001F794 (-D2DMatrixRotationNormalizedAxis@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x1800238C4 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180032AA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@M@Z @ 0x180186A10 (-make_float4x4_from_axis_angle@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@M@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x1801AF5F8 (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     ?D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z @ 0x1801AF828 (-D3DXQuaternionSlerp@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@1M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl sinf_0(float X)
{
  return sinf(X);
}
