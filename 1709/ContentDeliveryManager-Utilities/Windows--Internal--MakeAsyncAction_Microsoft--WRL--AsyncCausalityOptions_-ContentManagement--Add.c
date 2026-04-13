/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_47b0fc75c26617fafd85d8fafd598033___ @ 0x180018498
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18000EE00 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 * Callees:
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180020B20 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResul.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__ContentManagement::AddThumbnailToCacheAsyncActionName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_47b0fc75c26617fafd85d8fafd598033___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rsi
  signed int v9; // edi
  __int64 v10; // rbx
  void *v11; // rax
  __int64 v12; // r8

  v7 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = (void (__fastcall **)(_QWORD, __int64))off_1800BFAB8;
    v7[1] = *(void (__fastcall ***)(_QWORD, __int64))a4;
    *(_QWORD *)a4 = 0LL;
    *((_BYTE *)v7 + 16) = 0;
    *(_BYTE *)(a4 + 8) = 1;
    *((_DWORD *)v7 + 6) = *(_DWORD *)(a4 + 16);
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    v10 = 0LL;
    v11 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v11 )
      v10 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
              v11,
              a1,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              -2LL);
    v9 = v10 == 0 ? 0x8007000E : 0;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 272) = v8;
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
      v8 = 0LL;
    }
    if ( v9 >= 0 )
    {
      v12 = v10;
      v10 = 0LL;
      *a2 = (v12 + 184) & -(__int64)(v12 != 0);
    }
    if ( v8 )
      (**v8)(v8, 1LL);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
  }
  return (unsigned int)v9;
}
