/*
 * XREFs of ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C
 * Callers:
 *     ?SetTreeEffectInternal@CVisual@@QEAAXPEAVCTreeEffect@@@Z @ 0x1800130C8 (-SetTreeEffectInternal@CVisual@@QEAAXPEAVCTreeEffect@@@Z.c)
 *     ?SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z @ 0x180013108 (-SetWindowBackgroundTreatmentInternal@CVisual@@QEAAXPEAVCWindowBackgroundTreatment@@@Z.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x18002D90C (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x180084AB0 (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180085068 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z @ 0x180085544 (-SetTransformParentDataInternal@CVisual@@QEAAXPEAUTransformParentData@@@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x180085680 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x180085F88 (-SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x180085FE4 (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x180086080 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x1800860B8 (-SetTopLevelWindow@CVisual@@QEAAX_K@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800861B8 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18012B0C8 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x18012B1D4 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x18012C164 (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18014E188 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x1801610E8 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180161128 (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180161210 (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18004F4E8 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 */

void __fastcall CSparseStorage::SetData(char **this, int a2, unsigned int a3, const void *a4)
{
  struct CSparseStorage::DataInfo *SlotForData; // rdi

  SlotForData = CSparseStorage::FindSlotForData(this, a2, a3);
  memcpy_0((char *)SlotForData + 4, a4, a3);
  *(_DWORD *)SlotForData ^= (*(_DWORD *)SlotForData ^ (a2 << 24)) & 0x7F000000;
  *((_DWORD *)*this + 1) |= __ROR4__(1, a2);
}
