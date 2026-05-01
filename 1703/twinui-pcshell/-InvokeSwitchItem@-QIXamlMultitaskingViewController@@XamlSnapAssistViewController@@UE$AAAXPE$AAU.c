/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1801444A8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180144FD0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_ @ 0x180144794 (_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_--_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_3bd6e62926fdb44f17182f5492fdd21c___ @ 0x180144B04 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_3bd6e62926fdb44f17182f5492fdd21c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___Z(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // r15
  volatile signed __int32 *v5; // r14
  bool i; // zf
  signed __int32 v7; // eax
  bool j; // zf
  signed __int32 v9; // eax
  IUnknown *v10; // rbx
  DWORD CurrentThreadId; // eax
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  _QWORD v17[3]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v18[24]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h] BYREF
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int64 v21; // [rsp+80h] [rbp+17h]
  volatile signed __int32 *v22; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v24; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+6Fh]
  _QWORD *v26; // [rsp+E0h] [rbp+77h]
  _QWORD *v27; // [rsp+E8h] [rbp+7Fh]

  v25 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v25 = a2;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v26 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v17[0] = a1;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v17[1] = a2;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v17[2] = a1;
  v4 = (_QWORD *)lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(v18, v17);
  v27 = v4;
  v5 = (volatile signed __int32 *)a1[11];
  for ( i = v5 == 0LL; !i; i = v7 == _InterlockedCompareExchange(v5 + 7, v7 + 1, v7) )
  {
    v7 = *((_DWORD *)v5 + 7);
    if ( v7 == 0x7FFFFFFF )
      break;
  }
  lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_::_lambda_3ad9b2bd2098a0fa1df82e2a87fa8baa_(&v19, v4);
  v22 = v5;
  for ( j = v5 == 0LL; !j; j = v9 == _InterlockedCompareExchange(v5 + 7, v9 + 1, v9) )
  {
    v9 = *((_DWORD *)v5 + 7);
    if ( v9 == 0x7FFFFFFF )
      break;
  }
  v10 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_3bd6e62926fdb44f17182f5492fdd21c___(
                        &v24,
                        &v19);
  CurrentThreadId = GetCurrentThreadId();
  v12 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v10, 0LL);
  v13 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v12);
  if ( v22 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  v14 = v4[2];
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v4[1];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( *v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v12);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  return result;
}
