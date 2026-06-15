/*
 * XREFs of ??1?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800399F0
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180039894 (ReconsiderSpatialOnComboEndpoints.c)
 *     _ReconsiderSpatialOnComboEndpoints_::_1_::dtor$2 @ 0x180058EA0 (_ReconsiderSpatialOnComboEndpoints_--_1_--dtor$2.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x18009D148 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     _CPolicyConfig::RefreshConnectorFormats_::_1_::dtor$1 @ 0x18009D23A (_CPolicyConfig--RefreshConnectorFormats_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B2F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 */

void __fastcall wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::~com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v2();
  }
}
