/*
 * XREFs of ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC
 * Callers:
 *     ??1CRefThread@@MEAA@XZ @ 0x18018A974 (--1CRefThread@@MEAA@XZ.c)
 *     ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x18018AB20 (--_GCThreadRefHost@@UEAAPEAXI@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7640 (-UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D8740 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D9BD0 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x1801DAB40 (-v_ShutdownServices@WindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     _lambda_27c488e7e724f5c55d6bceab808aefe7_::operator() @ 0x1801EA074 (_lambda_27c488e7e724f5c55d6bceab808aefe7_--operator().c)
 *     _lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator() @ 0x1801EA6B8 (_lambda_3c23c103e221e9d7edb5a529b76dd87c_--operator().c)
 *     _lambda_5507c52a3c96750a474d626313f63385_::operator() @ 0x1801EABE8 (_lambda_5507c52a3c96750a474d626313f63385_--operator().c)
 *     _lambda_9c9ba8c2b9036433d089e83cee6c1008_::operator() @ 0x1801EB7B0 (_lambda_9c9ba8c2b9036433d089e83cee6c1008_--operator().c)
 *     _lambda_a7914316c04637f4e251a3ddd59c2e1b_::operator() @ 0x1801EBA60 (_lambda_a7914316c04637f4e251a3ddd59c2e1b_--operator().c)
 *     _lambda_d40e3235fe7936b35ba580e7f9781c22_::operator() @ 0x1801EBE0C (_lambda_d40e3235fe7936b35ba580e7f9781c22_--operator().c)
 *     _lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator() @ 0x1801EFEFC (_lambda_56c6782606ebfbd5986f99ce5cf01b42_--operator().c)
 *     ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1801F4770 (-WindowRemoved@WindowWrapperBase@@UEAAJXZ.c)
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180224338 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x180224D80 (-SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z.c)
 *     ??$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x1802345D8 (--$com_weak_query@AEAPEAUIApplicationViewChangeListener@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@.c)
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x180234D18 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ?Unregister@?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@QEAAXXZ @ 0x180237BCC (-Unregister@-$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SafeRelease<IShellItemArray>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
