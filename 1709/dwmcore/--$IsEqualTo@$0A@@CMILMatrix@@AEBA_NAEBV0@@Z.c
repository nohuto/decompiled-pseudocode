/*
 * XREFs of ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180060D80 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x1800671AC (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180092630 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180095B90 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x18019EB80 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsEqualTo<0>(float *a1, float *a2)
{
  return *a1 == *a2
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && a1[3] == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6]
      && a1[7] == a2[7]
      && a1[8] == a2[8]
      && a1[9] == a2[9]
      && a1[10] == a2[10]
      && a1[11] == a2[11]
      && a1[12] == a2[12]
      && a1[13] == a2[13]
      && a1[14] == a2[14]
      && a1[15] == a2[15];
}
