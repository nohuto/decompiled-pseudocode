/*
 * XREFs of ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18000E390
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@_N@56@@Z @ 0x18000EB48 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHa.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000F1C4 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@I_ea_18000F1C4.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000FF44 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800123C4 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::SetProgress(
        __int64 a1,
        unsigned int a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  struct IRpcOptions *v5; // rdi
  unsigned int v6; // eax
  LPSTREAM v7; // rcx
  struct IUnknown *v8; // rcx
  LPSTREAM pStm; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+48h] [rbp-8h]
  struct IUnknown *v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  struct IRpcOptions *v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = (_QWORD *)(a1 + 8);
  if ( a1 != -8 )
    (*(void (__fastcall **)(__int64))(*v3 + 8LL))(a1 + 8);
  v4 = 0LL;
  v13 = 0LL;
  if ( v3[13] )
  {
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v3)(v3, &GUID_00000000_0000_0000_c000_000000000046, &v13) >= 0 )
    {
      v12 = 0LL;
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                  v3 + 13,
                  &v12) >= 0 )
      {
        v14 = 0LL;
        RpcOptionsHelper::GetRpcOptions(v12, &v14);
        v5 = v14;
        BiasHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1>::CreateBias(&pStm);
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v12->lpVtbl[1].QueryInterface)(v12, v13, a2);
        Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(v6, v12, v3[14]);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v7 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( v5 )
          ((void (__fastcall *)(struct IRpcOptions *))v5->lpVtbl->Release)(v5);
      }
      v8 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
      }
    }
    v4 = v13;
  }
  if ( v4 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  return 0LL;
}
