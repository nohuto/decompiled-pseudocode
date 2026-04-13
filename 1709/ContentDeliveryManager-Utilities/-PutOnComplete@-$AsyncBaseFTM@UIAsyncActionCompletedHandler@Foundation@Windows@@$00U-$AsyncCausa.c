/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001EE80
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18001F770 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     ??$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@2@@Z @ 0x180020880 (--$Initialize@UIAsyncActionCompletedHandler@Foundation@Windows@@@-$GitPtrSupportsAgile@UIAsyncAc.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenOverlayOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int v5; // edi
  __int64 v6; // rax
  void (__fastcall *v7)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD); // rax
  signed __int32 v8; // ecx
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  GUID v13; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v14; // [rsp+60h] [rbp+8h] BYREF
  signed __int32 v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v14 = -2;
  _InterlockedCompareExchange(&v14, v2, -2);
  if ( v14 == 4 )
  {
    v5 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v5 = Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncActionCompletedHandler>::Initialize<Windows::Foundation::IAsyncActionCompletedHandler>(a1 + 120);
    if ( v5 >= 0 )
    {
      if ( Microsoft::WRL::gCausality )
      {
        v6 = *(_QWORD *)Microsoft::WRL::gCausality;
        v12 = 0;
        v11 = a1;
        v7 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(v6 + 64);
        v13 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v7(Microsoft::WRL::gCausality, 2LL, 2LL, &v13, a1, 0);
      }
      if ( a2 )
      {
        *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
      }
      _InterlockedOr(v10, 0);
      v8 = *(_DWORD *)(a1 + 48);
      v15 = -2;
      _InterlockedCompareExchange(&v15, v8, -2);
      if ( (unsigned int)(v15 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)v5;
}
