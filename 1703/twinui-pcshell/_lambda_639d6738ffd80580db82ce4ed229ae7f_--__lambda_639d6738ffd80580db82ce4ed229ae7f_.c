/*
 * XREFs of _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x18006FC0C
 * Callers:
 *     _CSplashScreen::add_Dismissed_::_1_::dtor$2 @ 0x18019ABAF (_CSplashScreen--add_Dismissed_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_(__int64 *a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = (volatile signed __int64 *)a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
