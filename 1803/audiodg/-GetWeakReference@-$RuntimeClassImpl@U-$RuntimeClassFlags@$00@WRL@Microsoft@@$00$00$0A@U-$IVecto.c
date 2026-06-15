/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x14004BED0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049870 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140049AB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IT_ea_140049AB0.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x14004A280 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x14004C858 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  struct IUnknownVtbl *v6; // r10
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // r8
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  a2->lpVtbl = 0LL;
  v4 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v4;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v4);
    for ( i = v4 == v12; ; i = v12 == v13 )
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
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1);
    v14 = 2 * v13;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::AddRef(v14);
    a2->lpVtbl = (struct IUnknownVtbl *)v14;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::InternalAddRef(2 * v2);
    a2->lpVtbl = v6;
  }
  return 0LL;
}
