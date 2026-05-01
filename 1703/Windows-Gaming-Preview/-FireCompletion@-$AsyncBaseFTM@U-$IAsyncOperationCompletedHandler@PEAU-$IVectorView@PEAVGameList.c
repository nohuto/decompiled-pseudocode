/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18000D980
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18000E0D0 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18000E520 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@Ga.c)
 *     ?_Run@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXW4AsyncStage@23@J@Z @ 0x18000EC5C (-_Run@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumeration@P.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18000EDDC (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnum.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@$00@@SA?AV?$AutoStubBias@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@@@PEAUIRpcOptions@@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAU?$IAsyncOperationCompletedHandler@_N@56@@Z @ 0x18000EB48 (-CreateBias@-$BiasHelper@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHa.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000FF44 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x1800123C4 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  struct IRpcOptions *v3; // rdi
  int v4; // r14d
  struct IUnknown *v5; // rcx
  struct IRpcOptions *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  __int64 v10; // rcx
  struct IRpcOptions *v12[4]; // [rsp+30h] [rbp-30h] BYREF
  LPSTREAM pStm; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+58h] [rbp-8h]
  signed __int32 v15; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+38h] BYREF
  struct IUnknown *v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF

  v12[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v15 = -2;
  _InterlockedCompareExchange(&v15, *(_DWORD *)(a1 + 40), -2);
  if ( !v15 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  if ( *(_QWORD *)(a1 + 88) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v12[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v18 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_721a94fb_a733_5e19_8abf_03249c29870e, &v18) >= 0 )
    {
      v16 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v16, *(_DWORD *)(a1 + 40), -2);
      v17 = 0LL;
      v3 = *(struct IRpcOptions **)(a1 + 88);
      v12[3] = v3;
      if ( v3 )
      {
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->AddRef)(v3);
        v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, GUID *, struct IUnknown **))v3->lpVtbl->Set)(
               v3,
               &GUID_eadac44b_7fdd_5589_b093_1bb73cc64f02,
               &v17);
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->Release)(v3);
        v5 = v17;
      }
      else
      {
        v5 = 0LL;
        v17 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        v12[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v5, v12);
        v6 = v12[0];
        BiasHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1>::CreateBias(&pStm);
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v17->lpVtbl[1].QueryInterface)(v17, v18, v16);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v7,
               v17,
               *(_QWORD *)(a1 + 96));
        v8 = *(_QWORD *)(a1 + 88);
        if ( v8 )
        {
          *(_QWORD *)(a1 + 88) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v9 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v6 )
          ((void (__fastcall *)(struct IRpcOptions *))v6->lpVtbl->Release)(v6);
        v5 = v17;
      }
      if ( v5 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
      }
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
