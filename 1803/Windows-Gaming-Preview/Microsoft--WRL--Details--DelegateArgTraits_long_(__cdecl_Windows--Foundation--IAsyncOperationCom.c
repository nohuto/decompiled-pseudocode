/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64_Windows::Storage::Streams::IRandomAccessStreamWithContentType_____ptr64___::_)(Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64___lambda_1494309b4973c40498f54f51ef4e6d63___1_Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x1800141F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64_Windows::Storage::Streams::IRandomAccessStreamWithContentType_____ptr64___::___Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64___lambda_1494309b4973c40498f54f51ef4e6d63___1_Windows::Foundation::IAsyncOperation_Windows::Storage::FileProperties::StorageItemThumbnail_____ptr64______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = _Mtx_lock((_Mtx_t)(v6 + 88));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v8 + 168) )
  {
    v5 = *(_QWORD *)(v8 + 168);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v9 = _Mtx_unlock((_Mtx_t)(v6 + 88));
  if ( v9 )
    std::_Throw_C_error(v9);
  if ( v5 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, *(_QWORD *)(a1 + 16), a3);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return 0LL;
}
