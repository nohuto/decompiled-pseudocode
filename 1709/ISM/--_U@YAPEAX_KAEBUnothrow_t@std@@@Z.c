/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180068FE4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x180078C0C (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     EnumerateDevices @ 0x180090968 (EnumerateDevices.c)
 *     ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180092060 (-PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionControlle.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x18009F72C (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1800AF558 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800B5AE0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall operator new[](size_t a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
