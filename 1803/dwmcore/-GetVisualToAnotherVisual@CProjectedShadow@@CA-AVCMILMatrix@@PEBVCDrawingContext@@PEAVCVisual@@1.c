/*
 * XREFs of ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8
 * Callers:
 *     ?AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B3D34 (-AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?GetLightPosition@CProjectedShadow@@CA?AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@@Z @ 0x1801B5348 (-GetLightPosition@CProjectedShadow@@CA-AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLig.c)
 *     ?GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@@Z @ 0x1801B5528 (-GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVi.c)
 *     ?GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z @ 0x1801B57DC (-GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GetVisualToAnotherVisual(__int64 a1, __int64 a2, CVisual *a3, CVisual *a4)
{
  int v7; // eax
  const struct CVisualTree *v8; // rdx
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v14[4]; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+78h] [rbp-9h]
  __m128 v16[4]; // [rsp+88h] [rbp+7h] BYREF
  int v17; // [rsp+C8h] [rbp+47h]

  v15 = 0;
  if ( a3 == a4 )
  {
    LOWORD(v15) = 32085;
    v7 = v15;
    *(_OWORD *)a1 = _xmm;
    *(_OWORD *)(a1 + 16) = _xmm;
    *(_OWORD *)(a1 + 32) = _xmm;
    *(_OWORD *)(a1 + 48) = _xmm;
    *(_DWORD *)(a1 + 64) = v7;
  }
  else
  {
    v8 = *(const struct CVisualTree **)(a2 + 6528);
    v17 = 0;
    CVisual::GetWorldTransform(a4, v8, 3, (__int64)v14, 0LL, 0LL);
    CMILMatrix::SetToInverse(v16, (const struct CMILMatrix *)v14);
    CVisual::GetWorldTransform(a3, *(const struct CVisualTree **)(a2 + 6528), 3, (__int64)v14, 0LL, 0LL);
    v9 = v14[1];
    v10 = v15;
    *(_OWORD *)a1 = v14[0];
    v11 = v14[2];
    *(_OWORD *)(a1 + 16) = v9;
    v12 = v14[3];
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 48) = v12;
    *(_DWORD *)(a1 + 64) = v10;
    CMILMatrix::Multiply((CMILMatrix *)a1, (const struct CMILMatrix *)v16);
  }
  return a1;
}
