/*
 * XREFs of wil::details::ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___::_ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___ @ 0x18007D028
 * Callers:
 *     _SpatialInteractionDevices::Internal::HIDOpen_::_1_::dtor$1 @ 0x1800D009C (_SpatialInteractionDevices--Internal--HIDOpen_--_1_--dtor$1.c)
 * Callees:
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x18007C9FC (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___::_ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___(
        __int64 a1,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    SpatialInteractionDevices::Internal::HIDClose(**(SpatialInteractionDevices::Internal ***)a1, a2);
  }
}
