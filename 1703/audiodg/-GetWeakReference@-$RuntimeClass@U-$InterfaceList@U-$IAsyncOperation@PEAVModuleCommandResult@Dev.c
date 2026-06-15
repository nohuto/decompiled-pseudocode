/*
 * XREFs of ?GetWeakReference@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@U?$InterfaceList@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004C420
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14004A060 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14004A9F0 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>,Microsoft::WRL::Details::InterfaceList<Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rdi
  __int64 v6; // rax
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // r8
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi

  v2 = *(_QWORD *)(a1 + 120);
  a2->lpVtbl = 0LL;
  v5 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v5;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v10, v5);
    for ( i = v5 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        a2->lpVtbl = v8;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      LODWORD(v8->Release) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1);
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)(2 * v13);
  }
  else
  {
    v6 = 2 * v2;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)v6;
  }
  return 0LL;
}
