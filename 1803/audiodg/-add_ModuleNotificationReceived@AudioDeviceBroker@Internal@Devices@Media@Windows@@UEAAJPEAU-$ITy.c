/*
 * XREFs of ?add_ModuleNotificationReceived@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x140018AB0
 * Callers:
 *     ?RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ @ 0x1400162EC (-RegisterBrokerEvents@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140015C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x140015CC4 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@P.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x140018880 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::add_ModuleNotificationReceived(
        RTL_SRWLOCK *a1,
        __int64 a2,
        _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  void (*v8)(void); // rax
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return (unsigned int)-2147024809;
  v10 = 0LL;
  v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>>(
         a2,
         &v10);
  if ( v6 < 0 )
    goto LABEL_5;
  if ( !v10 )
    return (unsigned int)-2147024809;
  v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
         a1 + 16,
         v10,
         *(_QWORD *)(*(_QWORD *)a2 + 24LL),
         a3);
LABEL_5:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::FtmBase>::Release(v7);
    else
      v8();
  }
  return (unsigned int)v6;
}
