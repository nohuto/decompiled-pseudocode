/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222390
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___::Run @ 0x1802229B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_521142a9b3d1e74a384fab04623ad1ff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___ @ 0x180222208 (CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x180222488 (_lambda_f100e3a3eb499b75a430141e91e776cf_--_lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802226AC (_lambda_f100e3a3eb499b75a430141e91e776cf_--__lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v11; // [rsp+50h] [rbp+8h] BYREF
  void *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v11);
  v4 = v3;
  if ( v3 >= 0 )
  {
    lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(v9, a2);
    CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3_(&v12, (__int64)v9);
    lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(v9);
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
