/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180032990
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180032F90 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180033220 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x180034154 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180023AB0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180026038 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  struct IRpcOptions *v3; // rdi
  int v4; // r14d
  IUnknown *v5; // rdi
  struct IUnknown *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  struct IUnknown *v10; // rcx
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
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
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
      v3 = *(struct IRpcOptions **)(a1 + 112);
      v14[3] = v3;
      if ( v3 )
      {
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->AddRef)(v3);
        v4 = ((__int64 (__fastcall *)(struct IRpcOptions *, GUID *, struct IUnknown **))v3->lpVtbl->Set)(
               v3,
               &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
               &v19);
        ((void (__fastcall *)(struct IRpcOptions *))v3->lpVtbl->Release)(v3);
      }
      else
      {
        v19 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        v14[0] = 0LL;
        RpcOptionsHelper::GetRpcOptions(v19, v14);
        v5 = pUnk;
        ppstm = 0LL;
        v16 = 0;
        v6 = v19;
        if ( v14[0] && v19 )
        {
          v16 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v16 >= 0 )
            v16 = CoMarshalInterface(ppstm, &IID_IUnknown, v5, 0, 0LL, 1u);
          v6 = v19;
        }
        else
        {
          v16 = -2147467262;
        }
        v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v6->lpVtbl[1].QueryInterface)(v6, pUnk, v18);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
               v7,
               (__int64)v19);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v13, 0);
          v8 = *(_QWORD *)(a1 + 112);
          if ( v8 )
          {
            *(_QWORD *)(a1 + 112) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
        if ( v16 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v9 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v14[0] )
          ((void (__fastcall *)(struct IRpcOptions *))v14[0]->lpVtbl->Release)(v14[0]);
      }
      v10 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
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
