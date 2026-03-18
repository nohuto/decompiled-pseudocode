/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801861DC
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180186404 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800C0EC8 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Foundation::Numerics::operator*(__int64 a1, __int64 a2, __m128 *a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __int128 v6; // xmm3
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  __m128 v9; // xmm0
  __int64 v10; // rcx
  __int64 result; // rax
  __m128 v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = a3[2];
  v5 = a3[3];
  v12[0] = *a3;
  v6 = *(_OWORD *)(a2 + 48);
  v12[1] = v3;
  v7 = *(_OWORD *)(a2 + 32);
  v12[2] = v4;
  v8 = *(_OWORD *)(a2 + 16);
  v12[3] = v5;
  v9 = DirectX::XMMatrixMultiply(*(double *)a2, v12);
  *(__m128 *)v10 = v9;
  result = v10;
  *(_OWORD *)(v10 + 16) = v8;
  *(_OWORD *)(v10 + 32) = v7;
  *(_OWORD *)(v10 + 48) = v6;
  return result;
}
