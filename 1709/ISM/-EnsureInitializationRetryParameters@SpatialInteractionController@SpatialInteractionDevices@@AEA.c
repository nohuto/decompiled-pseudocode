/*
 * XREFs of ?EnsureInitializationRetryParameters@SpatialInteractionController@SpatialInteractionDevices@@AEAAXXZ @ 0x1800C4994
 * Callers:
 *     ?EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x1800C4510 (-EndPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     ?StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@456@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C6244 (-StartTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAUISpatialGraphNod.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800780D8 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::EnsureInitializationRetryParameters(
        SpatialInteractionDevices::SpatialInteractionController *this)
{
  unsigned int DwordWithDefault; // eax
  RegistryHelpers *v2; // rcx
  RegistryHelpers *v3; // rcx
  unsigned int v4; // eax
  RegistryHelpers *v5; // rcx

  if ( !SpatialInteractionDevices::SpatialInteractionController::s_InitializationRetryParametersLoaded )
  {
    DwordWithDefault = RegistryHelpers::GetDwordWithDefault(
                         this,
                         (const WCHAR *)&stru_1800E5E00,
                         L"AttemptsCount",
                         (const wchar_t *)0xA);
    if ( !DwordWithDefault )
      DwordWithDefault = 1;
    SpatialInteractionDevices::SpatialInteractionController::s_InitializationAttemptsCount = DwordWithDefault;
    SpatialInteractionDevices::SpatialInteractionController::s_InitializationWaitBeforeRetryMilliseconds = RegistryHelpers::GetDwordWithDefault(v2, (const WCHAR *)&stru_1800E5E00, L"WaitBeforeRetryMS", (const wchar_t *)0x14);
    v4 = RegistryHelpers::GetDwordWithDefault(
           v3,
           (const WCHAR *)&stru_1800E5E00,
           L"DynamicNodeInfoBindingAttemptsCount",
           (const wchar_t *)0xC);
    if ( !v4 )
      v4 = 1;
    SpatialInteractionDevices::SpatialInteractionController::s_DynamicNodeInfoBindingAttemptsCount = v4;
    SpatialInteractionDevices::SpatialInteractionController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds = RegistryHelpers::GetDwordWithDefault(v5, (const WCHAR *)&stru_1800E5E00, L"DynamicNodeInfoBindingWaitBeforeRetryMS", (const wchar_t *)0x1388);
    SpatialInteractionDevices::SpatialInteractionController::s_InitializationRetryParametersLoaded = 1;
  }
}
