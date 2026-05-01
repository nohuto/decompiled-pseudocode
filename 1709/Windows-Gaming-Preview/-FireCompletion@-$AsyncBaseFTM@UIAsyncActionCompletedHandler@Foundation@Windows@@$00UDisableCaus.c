/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180031940
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180031FE0 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180032280 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x1800330A0 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180022AE0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180024EA0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  struct IRpcOptions *v3; // rdi
  int v4; // r14d
  struct IUnknown *v5; // rcx
  IUnknown *v6; // rdi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  LPSTREAM v10; // rcx
  LPUNKNOWN v11; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-60h] BYREF
  struct IRpcOptions *v14[4]; // [rsp+30h] [rbp-30h] BYREF
  LPSTREAM ppstm; // [rsp+50h] [rbp-10h] BYREF
  HRESULT v16; // [rsp+58h] [rbp-8h]
  signed __int32 v17; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+48h] BYREF
  struct IUnknown *v19; // [rsp+B0h] [rbp+50h] BYREF
  LPUNKNOWN pUnk; // [rsp+B8h] [rbp+58h] BYREF

  v14[1] = (struct IRpcOptions *)-2LL;
  v2 = 0;
  v17 = -2;
  _InterlockedCompareExchange(&v17, *(_DWORD *)(a1 + 48), -2);
  if ( !v17 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v14[2] = (struct IRpcOptions *)a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
           &pUnk) >= 0 )
    {
      v18 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v18, *(_DWORD *)(a1 + 48), -2);
      v19 = 0LL;
      v3 = *(struct IRpcOptions **)(a1 + 120);
      v14[3] = v3;
      if ( v3 )
      {
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->AddRef)(v3);
        v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, GUID *, struct IUnknown **))v3->lpVtbl->Set)(
               v3,
               &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
               &v19);
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->Release)(v3);
        v5 = v19;
      }
      else
      {
        v5 = 0LL;
        v19 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        v14[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v5, v14);
        v6 = pUnk;
        ppstm = 0LL;
        v16 = 0;
        v7 = (__int64)v19;
        if ( v14[0] && v19 )
        {
          v16 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v16 >= 0 )
            v16 = CoMarshalInterface(ppstm, &IID_IUnknown, v6, 0, 0LL, 1u);
          v7 = (__int64)v19;
        }
        else
        {
          v16 = -2147467262;
        }
        v8 = (*(__int64 (__fastcall **)(__int64, LPUNKNOWN, _QWORD))(*(_QWORD *)v7 + 24LL))(v7, pUnk, v18);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v8,
               (__int64)v19);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v9 = *(_QWORD *)(a1 + 120);
          if ( v9 )
          {
            *(_QWORD *)(a1 + 120) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v10 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( v14[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v14[0]->lpVtbl->Release)(v14[0]);
        v5 = v19;
      }
      if ( v5 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
      }
    }
    v11 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
