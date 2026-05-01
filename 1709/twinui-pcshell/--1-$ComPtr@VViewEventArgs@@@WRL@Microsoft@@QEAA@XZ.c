/*
 * XREFs of ??1?$ComPtr@VViewEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180100F40
 * Callers:
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$1 @ 0x1801ED54C (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x1801EEBEF (_ViewEventDispatcher--_RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180101960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180101960.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(result);
  }
  return result;
}
