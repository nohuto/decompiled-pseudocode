/*
 * XREFs of ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800595BC
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180052DF0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005915C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     CreateAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94___ @ 0x18005BE70 (CreateAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h]

  v2 = *((_QWORD *)this + 18);
  v6 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4[1] = this;
  CreateAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_(&v5, v4);
  v3 = v5;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 200LL))(*((_QWORD *)this + 17), v5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
