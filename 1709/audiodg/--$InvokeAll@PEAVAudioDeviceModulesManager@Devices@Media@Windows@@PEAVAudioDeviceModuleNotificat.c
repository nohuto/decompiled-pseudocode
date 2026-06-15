/*
 * XREFs of ??$InvokeAll@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@456@@Z @ 0x140049EB8
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004EA70 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x14004A08C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Wind.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x14004B240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v11 = a3;
  v10 = a2;
  v8[0] = &v10;
  v4 = a1 + 1;
  v5 = 0;
  v8[1] = &v11;
  v9 = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v6 = v9;
  if ( v9 )
  {
    v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___(
           v8,
           v9,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  return v5;
}
