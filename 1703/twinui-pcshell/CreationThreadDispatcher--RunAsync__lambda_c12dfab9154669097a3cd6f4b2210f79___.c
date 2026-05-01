/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142A44
 * Callers:
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x1801428CC (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXPE$AA.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___ @ 0x180142E7C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___(
        volatile signed __int32 *a1,
        _QWORD *a2)
{
  signed __int32 i; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx
  bool j; // zf
  signed __int32 v8; // eax
  IUnknown *v9; // rbx
  DWORD CurrentThreadId; // eax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  _QWORD *v20; // [rsp+88h] [rbp+38h]
  volatile signed __int32 *v21; // [rsp+90h] [rbp+40h]

  v20 = a2;
  v21 = a1;
  if ( a1 )
  {
    for ( i = *((_DWORD *)a1 + 7);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 7, i + 1, i);
          i = *((_DWORD *)a1 + 7) )
    {
      ;
    }
  }
  v5 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*a2);
  v15 = v5;
  v6 = a2[1];
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(a2[1]);
  v16 = v6;
  v17 = a1;
  for ( j = a1 == 0LL; !j; j = v8 == _InterlockedCompareExchange(a1 + 7, v8 + 1, v8) )
  {
    v8 = *((_DWORD *)a1 + 7);
    if ( v8 == 0x7FFFFFFF )
      break;
  }
  v9 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___(
                       &v19,
                       &v15);
  CurrentThreadId = GetCurrentThreadId();
  v11 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v9, 0LL);
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"internal\\Shell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v11);
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v17);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(a1);
  v13 = a2[1];
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return (unsigned int)v11;
}
