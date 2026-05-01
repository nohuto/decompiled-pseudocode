/*
 * XREFs of ?ImmersiveLauncherWNFCallback@CImmersiveMode@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180032220
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_b9e009682738098b72449fb04d8aa113___ @ 0x180032CD4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_b9e009682738098b72449fb04d8aa113___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::ImmersiveLauncherWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4)
{
  int v5; // ebx
  IUnknown **v6; // rax
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v9[1] = -2LL;
  v9[2] = a4;
  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v9[0] = a4;
  if ( a4 )
    (*(void (__fastcall **)(_DWORD *, __int64, struct _WNF_TYPE_ID *))(*(_QWORD *)a4 + 8LL))(a4, a2, a3);
  v5 = a4[80];
  v6 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_b9e009682738098b72449fb04d8aa113___(
                      &v10,
                      v9,
                      a3);
  Windows::Internal::ComTaskPool::RunTask(3, 2u, v5, 0, *v6, 0LL);
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  return 0LL;
}
