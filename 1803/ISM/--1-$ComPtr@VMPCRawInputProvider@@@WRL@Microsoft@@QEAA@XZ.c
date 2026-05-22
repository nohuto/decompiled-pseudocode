/*
 * XREFs of ??1?$ComPtr@VMPCRawInputProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x18005E9D4
 * Callers:
 *     _MPCRawInputProvider::Create_::_1_::dtor$2 @ 0x1800E6A87 (_MPCRawInputProvider--Create_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x1800E6B2B (_Microsoft--WRL--Details--Make_SpectrumListener_MPCRawInputProvider_____ptr64_unsigned_long_-___.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection_____ptr64_bool__::_1_::dtor$1 @ 0x1800E909C (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions-_ea_1800E909C.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$5 @ 0x1800E90FA (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E90FA.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection_::_1_::dtor$6 @ 0x1800E910D (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E910D.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<MPCRawInputProvider>::~ComPtr<MPCRawInputProvider>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(result);
  }
  return result;
}
