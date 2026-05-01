/*
 * XREFs of ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180056DE0
 * Callers:
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x180052140 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x180052F50 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d820d6b9e20a12d04c7d2f78ab269bb6___ @ 0x18005C6DC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d820d6b9e20a12d04c7d2f78ab269bb6___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
wil::details::in1diag3 **__fastcall CImmersiveApp::_QueuePresentationChangeNotification(__int64 a1, int a2)
{
  wil::details::in1diag3 **result; // rax
  __int64 v5; // rbx
  int v6; // edi
  IUnknown **v7; // rax
  int v8; // edi
  __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h]
  __int64 v15; // [rsp+88h] [rbp+20h]

  result = &retaddr;
  v5 = *(_QWORD *)(a1 + 656);
  if ( v5 )
  {
    v14 = *(_QWORD *)(a1 + 656);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v15 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10[0] = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v10[1] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v11 = a2;
    v6 = *(_DWORD *)(a1 + 664);
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_d820d6b9e20a12d04c7d2f78ab269bb6___(
                        &v13,
                        v10);
    v8 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v6, 0, *v7, 0LL);
    v9 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x134A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
