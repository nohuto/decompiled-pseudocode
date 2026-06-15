/*
 * XREFs of ??1?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D2B4
 * Callers:
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$0 @ 0x18004CDAF (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18004CDC7 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$3 @ 0x18004CDD3 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$0 @ 0x18005C4BB (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_un.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<CEndpointCharacteristics>::~ComPtr<CEndpointCharacteristics>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 **result; // rax
  volatile signed __int32 *v2; // rcx
  __int64 (*v3)(void); // rax

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return (volatile signed __int32 **)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
    else
      return (volatile signed __int32 **)v3();
  }
  return result;
}
