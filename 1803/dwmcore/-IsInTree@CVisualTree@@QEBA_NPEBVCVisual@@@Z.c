/*
 * XREFs of ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180041280
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x18009F47C (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x18013CD68 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B644C (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsInTree(CVisualTree *this, const struct CVisual *a2)
{
  const struct CVisual *v2; // r8
  const struct CVisual *v3; // rcx

  v2 = a2;
  if ( !a2 )
    return 0;
  v3 = (const struct CVisual *)*((_QWORD *)this + 3);
  while ( a2 != v3 )
  {
    if ( v2 )
    {
      v2 = (const struct CVisual *)*((_QWORD *)v2 + 10);
      if ( v2 )
        v2 = (const struct CVisual *)*((_QWORD *)v2 + 10);
    }
    if ( a2 != v2 )
    {
      a2 = (const struct CVisual *)*((_QWORD *)a2 + 10);
      if ( a2 )
        continue;
    }
    return 0;
  }
  return 1;
}
