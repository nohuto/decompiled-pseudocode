/*
 * XREFs of ??1?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C8438
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_std::nullptr_t_unsigned_short_const_____ptr64_unsigned_short_const_(&___ptr64)[53]_enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x1801C6B5D (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal__ea_1801C6B5D.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x1801C6CC0 (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal__ea_1801C6CC0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CCDC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_1801CCDC0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::~ComPtr<LegacyViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
