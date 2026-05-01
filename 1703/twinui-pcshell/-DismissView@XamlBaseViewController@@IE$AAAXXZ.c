/*
 * XREFs of ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180145A3C
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1801459F0 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAV.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ @ 0x180145A34 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_7181cdfb307d923fb89b548cb1b5802a___ @ 0x180146434 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_7181cdfb307d923fb89b548cb1b5802a___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlBaseViewController::DismissView(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r14
  volatile signed __int32 *v4; // rsi
  signed __int32 v5; // eax
  bool i; // zf
  signed __int32 v7; // eax
  IUnknown *v8; // rbx
  DWORD CurrentThreadId; // eax
  int v10; // ebx
  __int64 v11; // rcx
  _QWORD *v13; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+40h] [rbp-38h]
  _QWORD *v15; // [rsp+48h] [rbp-30h]
  _QWORD *v16; // [rsp+50h] [rbp-28h]
  _QWORD *v17; // [rsp+58h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-18h]
  volatile signed __int32 *v19; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v21; // [rsp+B0h] [rbp+38h] BYREF
  _QWORD *v22; // [rsp+B8h] [rbp+40h]
  _QWORD *v23; // [rsp+C0h] [rbp+48h]
  volatile signed __int32 *v24; // [rsp+C8h] [rbp+50h]

  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v22 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v15 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v16 = a1;
  if ( a1 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  v2 = a1;
  v13 = a1;
  if ( a1 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    v2 = v13;
  }
  v3 = a1;
  v14 = a1;
  v23 = &v13;
  v24 = (volatile signed __int32 *)a1[10];
  v4 = v24;
  if ( v24 )
  {
    do
      v5 = *((_DWORD *)v4 + 7);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange(v4 + 7, v5 + 1, v5) );
    v3 = v14;
    v2 = v13;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    v3 = v14;
  }
  v17 = v2;
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
  v18 = v3;
  v19 = v4;
  for ( i = v4 == 0LL; !i; i = v7 == _InterlockedCompareExchange(v4 + 7, v7 + 1, v7) )
  {
    v7 = *((_DWORD *)v4 + 7);
    if ( v7 == 0x7FFFFFFF )
      break;
  }
  v8 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_7181cdfb307d923fb89b548cb1b5802a___(
                       &v21,
                       &v17);
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v8, 0LL);
  v11 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v10);
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v19);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v10);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
}
