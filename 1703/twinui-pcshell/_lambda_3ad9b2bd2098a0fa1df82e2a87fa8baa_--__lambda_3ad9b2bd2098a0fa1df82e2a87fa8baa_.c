/*
 * XREFs of _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144744
 * Callers:
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$2 @ 0x1801A39D7 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$2.c)
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$7 @ 0x1801A39E3 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$7.c)
 *     _CreationThreadDispatcher::RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa____::_1_::dtor$0 @ 0x1801A3A13 (_CreationThreadDispatcher--RunSync__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::__lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[2];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[1];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
