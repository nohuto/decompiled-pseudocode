/*
 * XREFs of ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180031A14
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180055130 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisualTree::IsInTree(const struct CVisual **this, const struct CVisual *a2)
{
  char result; // al
  const struct CVisual *v3; // r8

  result = 0;
  v3 = a2;
  if ( a2 )
  {
    while ( a2 != this[3] )
    {
      if ( v3 )
      {
        v3 = (const struct CVisual *)*((_QWORD *)v3 + 10);
        if ( v3 )
          v3 = (const struct CVisual *)*((_QWORD *)v3 + 10);
      }
      if ( a2 != v3 )
      {
        a2 = (const struct CVisual *)*((_QWORD *)a2 + 10);
        if ( a2 )
          continue;
      }
      return result;
    }
    return 1;
  }
  return result;
}
