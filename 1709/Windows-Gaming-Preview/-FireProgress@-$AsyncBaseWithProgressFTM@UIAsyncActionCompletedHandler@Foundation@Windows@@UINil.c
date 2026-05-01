/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180032CC4
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180032260 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x180020EE0 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ??$CopyLocal@UINilDelegate@Internal@Windows@@@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UINilDelegate@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800211C0 (--$CopyLocal@UINilDelegate@Internal@Windows@@@-$GitPtrSupportsAgile@UINilDelegate@I_ea_1800211C0.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x180022AE0 (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x180024EA0 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v4; // r15d
  IUnknown *v5; // rcx
  signed __int32 v6; // edx
  IUnknown *v7; // rcx
  __int64 *v8; // r14
  struct IRpcOptions *v9; // rdi
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  __int64 v12; // rcx
  struct IUnknown *v13; // rcx
  signed __int32 v15[12]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h]
  LPSTREAM pStm; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+48h] [rbp-8h]
  IUnknown *v20; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown *v21; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v22; // [rsp+98h] [rbp+48h] BYREF

  v16 = -2LL;
  v4 = 0;
  v17 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = 0LL;
  v20 = 0LL;
  v6 = *(_DWORD *)(a1 + 160);
  if ( v6 > 0 )
  {
    do
    {
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), v6 + 1, v6) )
        break;
      v6 = *(_DWORD *)(a1 + 160);
    }
    while ( v6 > 0 );
    if ( v6 > 0 )
    {
      v7 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
      }
      if ( (**(int (__fastcall ***)(__int64, GUID *, IUnknown **))a1)(
             a1,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v20) >= 0 )
      {
        v21 = 0LL;
        v8 = (__int64 *)(a1 + 144);
        if ( (int)Windows::Internal::GitPtrSupportsAgile<Windows::Internal::INilDelegate>::CopyLocal<Windows::Internal::INilDelegate>(
                    (__int64 *)(a1 + 144),
                    (__int64 *)&v21) >= 0 )
        {
          v22 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v22);
          v9 = v22;
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v22, v20, (__int64)v21);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                  v21,
                  v20,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v21);
          if ( v19 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v11 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v9 )
            ((void (__fastcall *)(struct IRpcOptions *))v9->lpVtbl->Release)(v9);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v15, 0);
          v12 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
        v13 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
        }
      }
    }
    v5 = v20;
  }
  if ( v5 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
