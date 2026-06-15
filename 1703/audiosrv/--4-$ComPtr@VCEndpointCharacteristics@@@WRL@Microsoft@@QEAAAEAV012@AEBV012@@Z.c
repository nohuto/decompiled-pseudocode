/*
 * XREFs of ??4?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002C5C0
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<CEndpointCharacteristics>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rax

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(*a2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
    {
      v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
      if ( v6 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      {
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) != 1 )
          return a1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 40LL))(v4, 1LL);
        if ( !Microsoft::WRL::Details::ModuleBase::module_ )
          return a1;
        v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                 + 16LL);
      }
      ((void (*)(void))v6)();
    }
  }
  return a1;
}
