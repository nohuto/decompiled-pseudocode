/*
 * XREFs of ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801437AC
 * Callers:
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$5 @ 0x1801A3AB9 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

__int64 __fastcall wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
  return result;
}
