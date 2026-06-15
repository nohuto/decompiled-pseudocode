/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIAudioDeviceBroker@3Devices@Media@4@PEAUIAudioDeviceBrokerChangedEventArgs@3674@@Z @ 0x14004CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  v6 = *(_QWORD *)(a1 + 40);
  v10 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef,
           &v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = -2147024809;
  }
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  return (unsigned int)v7;
}
