/*
 * XREFs of NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x18013D6F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run @ 0x18013E000 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ?AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180017440 (-AddTask@NotificationDispatcher@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51___ @ 0x18013D518 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18013DE88 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___(
        NotificationDispatcher *this,
        __int64 *a2)
{
  __int64 v4; // rcx
  char **CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51; // rax
  volatile int *v6; // rdx
  struct IAsyncCallback *v7; // rbx
  char *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v14[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v16; // [rsp+70h] [rbp+18h] BYREF
  char *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  v14[0] = v4;
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v4);
  v14[1] = a2[1];
  CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51 = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51___((char **)&v16, (char *)v14);
  v7 = (struct IAsyncCallback *)*CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51;
  v17 = *CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51;
  *CAsyncCallbackWithLambda__lambda_e06f31f306e1f92e5da87b2d7004ab51_____lambda_e06f31f306e1f92e5da87b2d7004ab51 = 0LL;
  v8 = (char *)v16;
  if ( v16 )
  {
    v16 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
      v8,
      v6);
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(v14);
  if ( v7 )
  {
    v12 = NotificationDispatcher::AddTask(this, v7);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    v10 = (unsigned int)v12;
    v11 = 29LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 28LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\NotificationDispatcher.h",
    (const char *)v10);
LABEL_11:
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)&v17);
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(a2);
  return v9;
}
