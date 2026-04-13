/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001EB00
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncCausalityOptions@$1?EnableContextualSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001F3A0 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001F7F0 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800206C8 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18000654C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180006620 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x1800200B0 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180020764 (--$CopyLocal@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAct.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r14d
  __int64 *v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rcx
  LPSTREAM v6; // rcx
  struct IUnknown *v7; // rcx
  __int64 v8; // rcx
  signed __int32 v10[8]; // [rsp+0h] [rbp-59h] BYREF
  __int64 v11; // [rsp+40h] [rbp-19h] BYREF
  struct IRpcOptions *v12[3]; // [rsp+48h] [rbp-11h] BYREF
  LPSTREAM pStm; // [rsp+60h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+Fh]
  GUID v15; // [rsp+70h] [rbp+17h] BYREF
  GUID v16; // [rsp+80h] [rbp+27h] BYREF
  signed __int32 v17; // [rsp+C0h] [rbp+67h] BYREF
  signed __int32 v18; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v19; // [rsp+D0h] [rbp+77h] BYREF
  struct IUnknown *v20; // [rsp+D8h] [rbp+7Fh] BYREF

  v12[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v17 = -2;
  _InterlockedCompareExchange(&v17, *(_DWORD *)(a1 + 48), -2);
  if ( !v17 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v12[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v11 = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v18, *(_DWORD *)(a1 + 48), v18);
      v15 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v15,
        a1,
        v18);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b, &v11) >= 0 )
    {
      v19 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v19, *(_DWORD *)(a1 + 48), -2);
      v20 = 0LL;
      v3 = (__int64 *)(a1 + 120);
      if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::CopyLocal<Windows::Foundation::IAsyncActionCompletedHandler>(
                  a1 + 120,
                  &v20) >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v16 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v16,
            a1,
            0);
        }
        v12[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v20, v12);
        BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm);
        v4 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v20->lpVtbl[1].QueryInterface)(v20, v11, v19);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v4,
               (__int64)v20);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v10, 0);
          v5 = *v3;
          if ( *v3 )
          {
            *v3 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v14 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(pStm);
        }
        v6 = pStm;
        if ( pStm )
        {
          pStm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v6 + 16LL))(v6);
        }
        if ( v12[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v12[0]->lpVtbl->Release)(v12[0]);
      }
      v7 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
      }
    }
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
