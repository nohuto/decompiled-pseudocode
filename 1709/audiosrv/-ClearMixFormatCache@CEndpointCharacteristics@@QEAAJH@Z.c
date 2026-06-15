/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398
 * Callers:
 *     _lambda_e1bf6d97dd671a2597185e44ea385b56_::operator() @ 0x18007F85C (_lambda_e1bf6d97dd671a2597185e44ea385b56_--operator().c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180086D90 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087CF0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087E20 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180031248 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@H@Z @ 0x1800365DC (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@H@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(struct IPropertyStore **this, int a2)
{
  unsigned int v2; // ebx

  v2 = ClearMixFormatCache(this[4], a2);
  LogEPCError("CEndpointCharacteristics::ClearMixFormatCache", 6490, v2);
  return v2;
}
