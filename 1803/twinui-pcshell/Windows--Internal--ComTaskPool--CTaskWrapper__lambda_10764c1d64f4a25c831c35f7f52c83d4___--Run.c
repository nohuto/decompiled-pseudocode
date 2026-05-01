/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___::Run @ 0x18008B730
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180054224 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x1801E3BEC (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windo.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rdi
  __int64 v2; // rbx
  int v3; // edi
  volatile int *v4; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v8 = 0LL;
  v7 = 1;
  AcquireSRWLockExclusive(v1 + 40);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v8, &v1[39].Ptr);
  if ( v1 != (RTL_SRWLOCK *)-320LL )
    ReleaseSRWLockExclusive(v1 + 40);
  v2 = v8;
  if ( v8 )
  {
    v3 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_(
           &v7,
           v8,
           &v1[39]);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v2, v4);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x363,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v3,
        v5);
  }
}
