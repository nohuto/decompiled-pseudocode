/*
 * XREFs of ?GetRealizationBoundsAndTransforms@CHwBrushContext@@QEBAXPEAVCMILBrushBitmap@@AEAVCMILMatrix@@AEAUBitmapToXSpaceTransform@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1801F506C
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

__int64 __fastcall CHwBrushContext::GetRealizationBoundsAndTransforms(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = a2 + 120;
  if ( *(_DWORD *)(a2 + 116) )
  {
    CMILMatrix::Multiply((const struct CMILMatrix *)v5, *(const struct CMILMatrix **)(a1 + 8), (struct CMILMatrix *)a3);
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)v5;
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(a3 + 32) = *(_OWORD *)(a2 + 152);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(a2 + 168);
    *(_DWORD *)(a3 + 64) = *(_DWORD *)(a2 + 184);
  }
  if ( *(_BYTE *)(*(_QWORD *)a1 + 68LL) )
  {
    *(_OWORD *)a4 = *(_OWORD *)v5;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)(v5 + 32);
    *(_OWORD *)(a4 + 48) = *(_OWORD *)(v5 + 48);
    result = *(unsigned int *)(v5 + 64);
  }
  else
  {
    *(_OWORD *)a4 = *(_OWORD *)a3;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a4 + 32) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a4 + 48) = *(_OWORD *)(a3 + 48);
    result = *(unsigned int *)(a3 + 64);
  }
  *(_DWORD *)(a4 + 64) = result;
  *(_OWORD *)a5 = *(_OWORD *)(a1 + 36);
  *(_QWORD *)(a5 + 16) = a4;
  *(_BYTE *)(a5 + 24) = 0;
  return result;
}
