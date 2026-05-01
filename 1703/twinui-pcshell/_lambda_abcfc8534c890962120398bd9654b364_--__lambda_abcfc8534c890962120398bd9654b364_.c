/*
 * XREFs of _lambda_abcfc8534c890962120398bd9654b364_::__lambda_abcfc8534c890962120398bd9654b364_ @ 0x180144814
 * Callers:
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$9 @ 0x1801A39FB (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$9.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_abcfc8534c890962120398bd9654b364_::__lambda_abcfc8534c890962120398bd9654b364_(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  v4 = a1[2];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[1];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
