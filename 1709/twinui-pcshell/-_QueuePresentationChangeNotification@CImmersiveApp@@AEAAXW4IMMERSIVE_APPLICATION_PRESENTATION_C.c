/*
 * XREFs of ?_QueuePresentationChangeNotification@CImmersiveApp@@AEAAXW4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x180059434
 * Callers:
 *     ?OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ @ 0x1800544C0 (-OnBackButtonUpdated@CImmersiveApp@@UEAAXXZ.c)
 *     ?OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z @ 0x1800551D0 (-OnPresentedWindowChanged@CImmersiveApp@@UEAAXPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___ @ 0x18005DFCC (Windows--Internal--ComTaskPool--QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
wil::details::in1diag3 **__fastcall CImmersiveApp::_QueuePresentationChangeNotification(__int64 a1, int a2)
{
  wil::details::in1diag3 **result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // esi
  _QWORD v9[2]; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_QWORD *)(a1 + 696);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v9[0] = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v9[1] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10 = a2;
    v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_102cb1b6072dd63b95fe430bfc6a8a40___(
           v7,
           v6,
           *(unsigned int *)(a1 + 704),
           v9,
           -2LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x136A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return (wil::details::in1diag3 **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
