/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800171F8
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1801C6FA0 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x180017270 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

_OWORD *__fastcall Windows::Foundation::Numerics::operator*(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm2
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm3
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  v12[0] = *a3;
  v6 = a2[3];
  v12[1] = v3;
  v7 = a2[2];
  v12[2] = v4;
  v8 = a2[1];
  v12[3] = v5;
  v9 = *a2;
  *(double *)&v9 = DirectX::XMMatrixMultiply(a1, v12);
  *v10 = v9;
  result = v10;
  v10[1] = v8;
  v10[2] = v7;
  v10[3] = v6;
  return result;
}
