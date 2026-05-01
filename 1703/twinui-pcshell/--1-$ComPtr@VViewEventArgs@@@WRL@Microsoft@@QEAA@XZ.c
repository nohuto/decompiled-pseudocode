/*
 * XREFs of ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DC5C0
 * Callers:
 *     _HolographicPositioner::_HandleControlLostForView_::_1_::dtor$1 @ 0x18019D656 (_HolographicPositioner--_HandleControlLostForView_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x18019EA48 (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD0F0 (-Release@-$RuntimeClass@U-$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
