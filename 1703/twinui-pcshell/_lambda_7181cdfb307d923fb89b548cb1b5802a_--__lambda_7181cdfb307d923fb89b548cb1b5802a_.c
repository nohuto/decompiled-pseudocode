/*
 * XREFs of _lambda_7181cdfb307d923fb89b548cb1b5802a_::__lambda_7181cdfb307d923fb89b548cb1b5802a_ @ 0x180142BCC
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____::_1_::dtor$2 @ 0x1801A3884 (_CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79____--_1_--dtor$2.c)
 *     _XamlBaseViewController::DismissView_::_1_::dtor$7 @ 0x1801A3B38 (_XamlBaseViewController--DismissView_--_1_--dtor$7.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_7181cdfb307d923fb89b548cb1b5802a_::__lambda_7181cdfb307d923fb89b548cb1b5802a_(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = (volatile signed __int32 *)a1[2];
  if ( v2 )
  {
    a1[2] = 0LL;
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
