/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180129AB8
 * Callers:
 *     ?SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x180128910 (-SetTaskbarData@XamlTaskbarProxy@@QEAAXPE$AAVTaskbarData@Desktop@ComposableShell@WindowsInternal.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___ @ 0x18012A7E0 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___(
        volatile signed __int32 *a1,
        __int64 a2)
{
  signed __int32 i; // eax
  volatile signed __int32 *v5; // rdx
  bool j; // zf
  signed __int32 v7; // eax
  __int64 v8; // rcx
  bool k; // zf
  signed __int32 v10; // eax
  IUnknown *v11; // rbx
  DWORD CurrentThreadId; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+70h] [rbp+20h] BYREF
  __int64 v23; // [rsp+78h] [rbp+28h]
  volatile signed __int32 *v24; // [rsp+80h] [rbp+30h]

  v23 = a2;
  v24 = a1;
  if ( a1 )
  {
    for ( i = *((_DWORD *)a1 + 7);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 7, i + 1, i);
          i = *((_DWORD *)a1 + 7) )
    {
      ;
    }
  }
  v5 = *(volatile signed __int32 **)a2;
  v18 = v5;
  for ( j = v5 == 0LL; !j; j = v7 == _InterlockedCompareExchange(v5 + 9, v7 + 1, v7) )
  {
    v7 = *((_DWORD *)v5 + 9);
    if ( v7 == 0x7FFFFFFF )
      break;
  }
  v8 = *(_QWORD *)(a2 + 8);
  v19 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v20 = a1;
  for ( k = a1 == 0LL; !k; k = v10 == _InterlockedCompareExchange(a1 + 7, v10 + 1, v10) )
  {
    v10 = *((_DWORD *)a1 + 7);
    if ( v10 == 0x7FFFFFFF )
      break;
  }
  v11 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___(
                        &v22,
                        &v18);
  CurrentThreadId = GetCurrentThreadId();
  v13 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v11, 0LL);
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v13);
  if ( v20 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v20);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v18 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(a1);
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *(volatile signed __int32 **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v16);
  }
  return (unsigned int)v13;
}
