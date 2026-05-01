/*
 * XREFs of _lambda_f4b46c9c4eb1558b25bb27c2a9448747_::__lambda_f4b46c9c4eb1558b25bb27c2a9448747_ @ 0x18017972C
 * Callers:
 *     _XamlBaseViewController::[IXamlMultitaskingViewController]::CloseSwitchItem_::_1_::dtor$2 @ 0x1801F5322 (_XamlBaseViewController--[IXamlMultitaskingViewController]--CloseSwitchItem_--_1_--dtor$2.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____::_1_::dtor$0 @ 0x1801F532E (_CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____::_1_::dtor$0 @ 0x1801F535E (_CreationThreadDispatcher--RunSync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f4b46c9c4eb1558b25bb27c2a9448747_::__lambda_f4b46c9c4eb1558b25bb27c2a9448747_(_QWORD *a1)
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
