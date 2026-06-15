/*
 * XREFs of ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18009D5E0 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x18009DBFC (-SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E030 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?ClearMixFormatCache@@YAJPEAUIPropertyStore@@@Z @ 0x1800CDCB8 (-ClearMixFormatCache@@YAJPEAUIPropertyStore@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::ClearMixFormatCache(struct IPropertyStore **this)
{
  unsigned int v1; // ebx

  v1 = ClearMixFormatCache(this[4]);
  LogEPCError("CEndpointCharacteristics::ClearMixFormatCache", 6384, v1);
  return v1;
}
