/*
 * XREFs of ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C81AC
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioDevicePropertyWriter@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046510 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioDevicePropertyWriter@@U-$Interface.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioConfigureDevice@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800465D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioConfigureDevice@@U-$InterfaceList@.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioEncoderProperties@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CB7C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioEncoderProperties@@U-_ea_1800CB7C0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioMetadataDictionaryData@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CC4D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioMetadataDictionaryDat_ea_1800CC4D0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UISpatialAudioPositionCalc@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD190 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UISpatialAudioPositionCalc@@U-$Inte_ea_1800CD190.c)
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800D3A60 (--$AsIID@V-$RuntimeClass@U-$InterfaceList@U-$IIterator@PEAUHSTRING__@@@Collections@Foundation@Wi.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D5490 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6B60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@_ea_1800D6B60.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6BE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@_ea_1800D6BE0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180046628 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::CanCastTo(Microsoft::WRL::FtmBase *this, struct _GUID *a2, void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  BOOL IsEqualGUID; // eax
  _QWORD *v8; // r8
  __int64 v9; // r9

  if ( InlineIsEqualGUID(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
  {
    *v4 = v5;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v3, &GUID_00000003_0000_0000_c000_000000000046);
    if ( IsEqualGUID )
      *v8 = v9;
    return !IsEqualGUID ? 0x80004002 : 0;
  }
}
