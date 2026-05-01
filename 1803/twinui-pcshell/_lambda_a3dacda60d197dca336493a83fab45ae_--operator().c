/*
 * XREFs of _lambda_a3dacda60d197dca336493a83fab45ae_::operator() @ 0x180104DB4
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_a3dacda60d197dca336493a83fab45ae___::operator() @ 0x180105060 (CDelayIAMOperations--CDelayedOperation__lambda_a3dacda60d197dca336493a83fab45ae___--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___ @ 0x1801030F8 (CIAMGlobals--QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_a3dacda60d197dca336493a83fab45ae_::operator()(_QWORD *a1)
{
  PVOID v2; // rcx
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v5; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (void *)*a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v5);
  v3 = CIAMGlobals::QueueViewManagementTask__lambda_c9baf6cc87053ec6873845fdd211487a___(v2, &v5);
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v5);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x11CB,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v3,
      -2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 24LL))(*a1, (unsigned int)v3);
  }
}
