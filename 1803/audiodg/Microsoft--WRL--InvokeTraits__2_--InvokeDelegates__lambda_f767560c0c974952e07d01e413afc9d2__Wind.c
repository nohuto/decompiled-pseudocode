/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140047F2C
 * Callers:
 *     ??$InvokeAll@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@456@@Z @ 0x140047D58 (--$InvokeAll@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004923C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004DDB0 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v6; // rbx
  __int64 *v7; // r14
  _QWORD *i; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  MatchingRestrictedErrorInfo = 0;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v12);
  v6 = v12[0];
  v7 = *(__int64 **)(v12[0] + 32LL);
  for ( i = *(_QWORD **)(v12[0] + 16LL); i != *(_QWORD **)(v6 + 24); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    MatchingRestrictedErrorInfo = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError(v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      MatchingRestrictedErrorInfo = 0;
    }
    if ( MatchingRestrictedErrorInfo < 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v10 = *v7;
        v13 = 0LL;
        v12[1] = v10;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo((unsigned int)MatchingRestrictedErrorInfo, &v13);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
        v6 = v12[0];
        break;
      }
      RoTransformError((unsigned int)MatchingRestrictedErrorInfo, 0LL, 0LL);
      MatchingRestrictedErrorInfo = 0;
    }
    ++v7;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  return (unsigned int)MatchingRestrictedErrorInfo;
}
