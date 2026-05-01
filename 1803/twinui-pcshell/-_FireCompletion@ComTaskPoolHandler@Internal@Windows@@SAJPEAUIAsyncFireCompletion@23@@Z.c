/*
 * XREFs of ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z @ 0x1801A79AC
 * Callers:
 *     ?FireCompletion@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1801A4550 (-FireCompletion@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResult.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___ @ 0x1801A2388 (Windows--Internal--ComTaskPool--QueueTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPoolHandler::_FireCompletion(
        struct Windows::Internal::IAsyncFireCompletion *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  bool v4; // bp
  __int64 v5; // rcx
  struct Windows::Internal::IAsyncFireCompletion *v7; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::Internal::IAsyncFireCompletion *v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v4 = *(_DWORD *)(v3 + 8) > 4;
  if ( *(int *)(v3 + 8) > 4 )
  {
    v8 = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    v7 = a1;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
    v4 = (int)Windows::Internal::ComTaskPool::QueueTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___(v5, &v7) >= 0;
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( a1 )
      (*(void (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  if ( !v4 )
  {
    ++*(_DWORD *)(v3 + 8);
    v2 = (*(__int64 (__fastcall **)(struct Windows::Internal::IAsyncFireCompletion *))(*(_QWORD *)a1 + 24LL))(a1);
    --*(_DWORD *)(v3 + 8);
  }
  return v2;
}
