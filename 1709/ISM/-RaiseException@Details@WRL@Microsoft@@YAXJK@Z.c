/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8
 * Callers:
 *     ?ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ @ 0x180037D24 (-ProcessInteractionMode@MPCGamepadProcessor@@IEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ @ 0x18004E66C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z @ 0x1800639D4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180065C44 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180067E48 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ?EnsureFileHandle@SpatialInteractionDevice@@UEAAJXZ @ 0x180075340 (-EnsureFileHandle@SpatialInteractionDevice@@UEAAJXZ.c)
 *     ?CloseFileHandle@SpatialInteractionDevice@@UEAAXXZ @ 0x180075410 (-CloseFileHandle@SpatialInteractionDevice@@UEAAXXZ.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007CA44 (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??1?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18007D048 (--1-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEA.c)
 *     ?EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180091840 (-EnsureResources@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrap.c)
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x18009D214 (--1WGIRawInputProvider@@UEAA@XZ.c)
 *     ?Initialize@WGIRawInputProvider@@AEAAJXZ @ 0x18009D69C (-Initialize@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009DFF8 (-StartRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x18009E414 (-StartUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRawInputClient@@PEAUIMessageSession@@@Z @ 0x18009F72C (-RuntimeClassInitialize@WGIController@@QEAAJPEAUIRawGameController@Input@Gaming@Windows@@PEAUIRa.c)
 *     ?ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z @ 0x1800A0444 (-ApplyUserSettingsForController@WGIController@@QEAAJPEAI@Z.c)
 *     ??$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z @ 0x1800A203C (--$GetPropertyValue@_K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEA_K@Z.c)
 *     ??$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z @ 0x1800A2318 (--$GetPropertyValue@K@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAK@Z.c)
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B3DD0 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800B3EC0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ??1?$HandleT@VCMNotificationTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB1B8 (--1-$HandleT@VCMNotificationTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 *     ??1?$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB204 (--1-$HandleT@UHANDLENullTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEA.c)
 *     ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x1800C75C0 (--$MakeAndInitialize@VSimpleTimeProvider@-A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteraction.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
