/*
 * XREFs of ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180047B90
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x18005CD9C (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&___ptr64_::Invoke @ 0x18008CB60 (CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__-___ptr64_--Invoke.c)
 * Callees:
 *     ?EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ @ 0x18004FAF0 (-EnsurePositionOffset@ViewWrapperBase@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskWindow::EnsurePositionOffset(CTaskWindow *this)
{
  __int64 (__fastcall *v1)(ViewWrapperBase *__hidden); // rax
  unsigned int v2; // eax
  unsigned int v3; // ebx
  ViewWrapperBase *v4; // rcx
  ViewWrapperBase *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, ViewWrapperBase **))this + 6))(
    *((_QWORD *)this + 6),
    &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
    &v6);
  v1 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v6 + 64LL);
  if ( v1 == ViewWrapperBase::EnsurePositionOffset )
    v2 = ViewWrapperBase::EnsurePositionOffset(v6);
  else
    v2 = v1(v6);
  v3 = v2;
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
