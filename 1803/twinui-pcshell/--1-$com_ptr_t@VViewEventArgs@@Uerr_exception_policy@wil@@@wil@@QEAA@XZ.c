/*
 * XREFs of ??1?$com_ptr_t@VViewEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801D28D0
 * Callers:
 *     _WindowEventDispatcher::RaiseViewEventWithPropertySet_::_1_::dtor$1 @ 0x1801D789D (_WindowEventDispatcher--RaiseViewEventWithPropertySet_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_180028E90.c)
 */

__int64 __fastcall wil::com_ptr_t<ViewEventArgs,wil::err_exception_policy>::~com_ptr_t<ViewEventArgs,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(v1);
  return result;
}
