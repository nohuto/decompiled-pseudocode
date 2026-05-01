/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180143480
 * Callers:
 *     <none>
 * Callees:
 *     ?FireCompletionErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x1801459EC (-FireCompletionErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@S.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<enum Windows::Internal::Shell::ViewManagerInterop::AppRequestHandledResult>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  IUnknown *v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  LPSTREAM v11; // rcx
  LPUNKNOWN v12; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-99h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-59h] BYREF
  __int64 v16; // [rsp+48h] [rbp-51h] BYREF
  LPSTREAM ppstm; // [rsp+50h] [rbp-49h] BYREF
  HRESULT v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  _QWORD v20[5]; // [rsp+68h] [rbp-31h] BYREF
  GUID v21; // [rsp+90h] [rbp-9h] BYREF
  GUID v22; // [rsp+A0h] [rbp+7h] BYREF
  signed __int32 v23; // [rsp+100h] [rbp+67h] BYREF
  signed __int32 v24; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v25; // [rsp+110h] [rbp+77h] BYREF
  __int64 v26; // [rsp+118h] [rbp+7Fh] BYREF

  v20[1] = -2LL;
  v2 = 0;
  v23 = -2;
  _InterlockedCompareExchange(&v23, *(_DWORD *)(a1 + 48), -2);
  if ( !v23 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v20[2] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      _InterlockedCompareExchange(&v24, *(_DWORD *)(a1 + 48), v24);
      v21 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL))(
        Microsoft::WRL::gCausality,
        0LL,
        2LL,
        &v21,
        a1,
        v24);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_3843809c_1f21_5d40_a51f_f6963ca8d259,
           &pUnk) >= 0 )
    {
      v25 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v25, *(_DWORD *)(a1 + 48), -2);
      v26 = 0LL;
      v3 = *(_QWORD *)(a1 + 120);
      v20[3] = v3;
      if ( v3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
        v4 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL))(
               v3,
               &GUID_10e84b15_acbe_5d0c_b7e4_204bf733bbe5,
               &v26);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        v5 = v26;
      }
      else
      {
        v5 = 0LL;
        v26 = 0LL;
        v4 = -2147024809;
      }
      if ( v4 >= 0 )
      {
        if ( Microsoft::WRL::gCausality )
        {
          v22 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 72LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL,
            &v22,
            a1,
            0);
          v5 = v26;
        }
        v6 = 0LL;
        v19 = 0LL;
        if ( v5 )
        {
          v16 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
                 v5,
                 &GUID_00000144_0000_0000_c000_000000000046,
                 &v16) >= 0
            && (*(int (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v16 + 32LL))(v16, v5, 2LL, v20) >= 0
            && v20[0] == 1LL )
          {
            v6 = v16;
            v7 = 0LL;
            v16 = 0LL;
            v19 = v6;
          }
          else
          {
            v7 = v16;
          }
          if ( v7 )
          {
            v16 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          }
          v5 = v26;
        }
        v8 = pUnk;
        ppstm = 0LL;
        v18 = 0;
        if ( v6 && v5 )
        {
          v18 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
          if ( v18 >= 0 )
            v18 = CoMarshalInterface(ppstm, &IID_IUnknown, v8, 0, 0LL, 1u);
          v5 = v26;
        }
        else
        {
          v18 = -2147467262;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, LPUNKNOWN, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, pUnk, v25);
        v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireCompletionErrorPropagationPolicyFilter(
               v9,
               v26,
               *(_QWORD *)(a1 + 128));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v14, 0);
          v10 = *(_QWORD *)(a1 + 120);
          if ( v10 )
          {
            *(_QWORD *)(a1 + 120) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
        if ( Microsoft::WRL::gCausality )
          (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
            Microsoft::WRL::gCausality,
            0LL,
            2LL);
        if ( v18 >= 0 )
        {
          (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
          CoReleaseMarshalData(ppstm);
        }
        v11 = ppstm;
        if ( ppstm )
        {
          ppstm = 0LL;
          (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v5 = v26;
      }
      if ( v5 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    v12 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
