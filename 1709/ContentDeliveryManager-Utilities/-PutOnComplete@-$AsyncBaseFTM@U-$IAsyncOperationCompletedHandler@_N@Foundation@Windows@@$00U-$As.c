/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180070530
 * Callers:
 *     ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x180070A80 (-put_Completed@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int AgileReference; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rax
  signed __int32 v10; // ecx
  signed __int32 v12[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+20h] [rbp-30h]
  int v14; // [rsp+28h] [rbp-28h]
  GUID v15; // [rsp+40h] [rbp-10h] BYREF
  signed __int32 v16; // [rsp+70h] [rbp+20h] BYREF
  signed __int32 v17; // [rsp+80h] [rbp+30h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v16 = -2;
  _InterlockedCompareExchange(&v16, v2, -2);
  if ( v16 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 120) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    AgileReference = 0;
    if ( a2 )
    {
      v18 = 0LL;
      AgileReference = RoGetAgileReference(0LL, &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a, a2, &v18);
      if ( AgileReference < 0 )
      {
        v7 = v18;
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 120) = v18;
        v18 = v7;
      }
      if ( v7 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    if ( AgileReference >= 0 )
    {
      if ( Microsoft::WRL::gCausality )
      {
        v8 = *(_QWORD *)Microsoft::WRL::gCausality;
        v14 = 0;
        v13 = a1;
        v9 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(v8 + 64);
        v15 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v9(Microsoft::WRL::gCausality, 2LL, 2LL, &v15, a1, 0);
      }
      if ( a2 )
      {
        *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
      }
      _InterlockedOr(v12, 0);
      v10 = *(_DWORD *)(a1 + 48);
      v17 = -2;
      _InterlockedCompareExchange(&v17, v10, -2);
      if ( (unsigned int)(v17 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)AgileReference;
}
