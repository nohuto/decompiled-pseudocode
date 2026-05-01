/*
 * XREFs of ??1?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x18012B3A8
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$9 @ 0x1801EEA45 (_ViewEventDispatcher--_HandleWindowCreatedWithNoView_--_1_--dtor$9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_enum_LegacyViewWrapper::ViewLifetimePolicy_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x1801EED63 (_Microsoft--WRL--Details--MakeAndInitialize_LegacyViewWrapper_IViewWrapperInternal__ea_1801EED63.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_180127B90.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::~ComPtr<LegacyViewWrapper>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(result);
  }
  return result;
}
