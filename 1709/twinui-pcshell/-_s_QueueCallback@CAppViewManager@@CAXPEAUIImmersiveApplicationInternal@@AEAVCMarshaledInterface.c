/*
 * XREFs of ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1800445C4
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180044284 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800446C8 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_ @ 0x180046914 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CAppViewManager::_s_QueueCallback(
        struct IImmersiveApplicationInternal *a1,
        struct CMarshaledInterface *a2,
        int a3)
{
  __int64 v5; // rdi
  int v6; // ebx
  IUnknown **v7; // rax
  IUnknown *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v11 = *(_QWORD *)a2;
  v5 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = a3;
  if ( a1 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a1 + 248LL))(a1);
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_(
                        &v13,
                        &v11);
    Windows::Internal::ComTaskPool::RunTask(0, 2u, v6, 0, *v7, 0LL);
  }
  else
  {
    v8 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_(
                         &v13,
                         &v11);
    CurrentThreadId = GetCurrentThreadId();
    Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, 0, v8, 0LL);
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
