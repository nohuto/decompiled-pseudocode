/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180257AB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::Run @ 0x180259690 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___ @ 0x180256F20 (CreateAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___(
        __int64 a1,
        __int128 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = *a2;
    v10 = *((_QWORD *)a2 + 2);
    CreateAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_(&v13, (__int64)&v9);
    if ( v13 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v12 + 24LL))(v12);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v13);
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
      (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"internal\\onecoreuapshell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v4;
}
