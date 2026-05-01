/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223284
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e___::Run @ 0x180223AF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     CreateAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___ @ 0x180222DC0 (CreateAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___.c)
 *     _lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_ @ 0x180223388 (_lambda_a108a8c11bb5b98786bc6ab4691e60b5_--_lambda_a108a8c11bb5b98786bc6ab4691e60b5_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v11; // [rsp+50h] [rbp+8h] BYREF
  void *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_(v9, a2);
    CreateAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034_(&v12, (__int64)v9);
    __abi_winrt_ptr_dtor(v9[1]);
    __abi_winrt_ptr_dtor(v9[0]);
    if ( v12 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 24LL))(v11);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v12);
        goto LABEL_9;
      }
      v5 = (unsigned int)v7;
      v6 = 80LL;
    }
    else
    {
      v4 = -2147024882;
      v5 = 2147942414LL;
      v6 = 79LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v4;
}
