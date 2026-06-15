/*
 * XREFs of ??1?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAA@XZ @ 0x180099EB4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$2 @ 0x180067FE0 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_180067FE0.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$0 @ 0x18006AB60 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$2 @ 0x18006AB9C (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$2.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$3 @ 0x18006ABA8 (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CEndpointCharacteristics>::~ComPtr<CEndpointCharacteristics>(__int64 *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 (*v3)(void); // rax

  v1 = a1;
  v2 = *a1;
  if ( v2 )
  {
    *v1 = 0LL;
    v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release(v2);
    else
      LODWORD(v1) = v3();
  }
  return (int)v1;
}
