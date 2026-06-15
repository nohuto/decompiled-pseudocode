/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x140014FF8
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140018450 (-add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU-$ITy.c)
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140014F30 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140014FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??$Make@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@@12@XZ @ 0x140019280 (--$Make@U-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  signed int AgileReference; // edi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, const struct _GUID *, _QWORD *); // rax
  signed int Interface; // eax
  __int64 (__fastcall *v12)(volatile signed __int32 *); // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = (volatile signed __int32 **)Microsoft::WRL::Details::Make<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>,2>,>(&v15);
  v5 = 0LL;
  if ( &v14 != (__int64 *)v4 )
  {
    v5 = *v4;
    *v4 = 0LL;
  }
  v6 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  AgileReference = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 7);
    if ( v8 )
    {
      *((_QWORD *)v5 + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    AgileReference = 0;
    if ( a1 )
    {
      v14 = 0LL;
      AgileReference = RoGetAgileReference(0LL, &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef, a1, &v14);
      if ( AgileReference < 0 )
      {
        v9 = v14;
      }
      else
      {
        v9 = *((_QWORD *)v5 + 7);
        *((_QWORD *)v5 + 7) = v14;
      }
      if ( v9 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( AgileReference >= 0 )
    {
      v10 = **(__int64 (__fastcall ***)(__int64, const struct _GUID *, _QWORD *))v5;
      if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::QueryInterface(
                      (__int64)v5,
                      &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef,
                      a2);
      else
        Interface = v10((__int64)v5, &GUID_610c5f91_da25_52b0_ae7d_2d3a45cdf4ef, a2);
      AgileReference = Interface;
    }
    v12 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
    if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release(v5);
    else
      v12(v5);
  }
  return (unsigned int)AgileReference;
}
