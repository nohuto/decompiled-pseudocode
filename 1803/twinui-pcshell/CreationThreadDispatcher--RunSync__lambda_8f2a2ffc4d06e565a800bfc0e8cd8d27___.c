/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x18018CE8C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::Run @ 0x18018D820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18018C8B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___ @ 0x18018C94C (CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___(__int64 a1, int *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int v9; // [rsp+28h] [rbp-18h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  void *v13; // [rsp+50h] [rbp+10h] BYREF
  void *v14; // [rsp+60h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = *a2;
    v10 = *((_QWORD *)a2 + 1);
    v11 = (std::_Ref_count_base *)*((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    CreateAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330_((__int64 *)&v14, (__int64)&v9);
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    if ( v14 )
    {
      v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13 + 24LL))(v13);
      v4 = v7;
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v14);
        goto LABEL_11;
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
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x48,
    (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return v4;
}
