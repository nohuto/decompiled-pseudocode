/*
 * XREFs of ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004CC80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x1400472C4 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140047490 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140047CA4 (--$GetActivationFactory@V-$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@.c)
 *     ??$InvokeAll@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@456@@Z @ 0x140047D58 (--$InvokeAll@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificat.c)
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140048114 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004A23C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004A55C (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004C070 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004DCA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004DCA0.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged(
        RTL_SRWLOCK *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  PVOID Reserved1; // rbx
  int AllByIdAndInstance; // edi
  const unsigned __int16 *v7; // rdx
  LPVOID v8; // rsi
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  HSTRING_HEADER *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int cb; // [rsp+20h] [rbp-59h] BYREF
  int cb_4; // [rsp+24h] [rbp-55h] BYREF
  void *v19; // [rsp+28h] [rbp-51h] BYREF
  __int64 v20; // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  struct Windows::Storage::Streams::IBuffer *v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h] BYREF
  __int64 v24; // [rsp+50h] [rbp-29h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  __int64 v26; // [rsp+60h] [rbp-19h] BYREF
  HSTRING v27; // [rsp+68h] [rbp-11h] BYREF
  struct Windows::Storage::Streams::IBuffer *v28; // [rsp+70h] [rbp-9h] BYREF
  HSTRING_HEADER string; // [rsp+80h] [rbp+7h] BYREF
  __int64 v30; // [rsp+98h] [rbp+1Fh]

  v25 = 0LL;
  v24 = 0LL;
  Reserved1 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  cb_4 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  AllByIdAndInstance = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *, __int64 *))(*(_QWORD *)a3 + 48LL))(
                         a3,
                         &v21);
  if ( AllByIdAndInstance < 0 )
    goto LABEL_27;
  AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &cb);
  if ( AllByIdAndInstance < 0 || cb < 0x28 )
    goto LABEL_27;
  v8 = CoTaskMemAlloc(cb);
  if ( !v8 )
  {
    AllByIdAndInstance = -2147024882;
    goto LABEL_27;
  }
  v9 = (__int64 *)Windows::Internal::StringReference::StringReference(
                    (HSTRING *)&string,
                    (const unsigned __int16 (*)[35])v7);
  AllByIdAndInstance = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReaderStatics>>(
                         *v9,
                         &v25);
  if ( AllByIdAndInstance >= 0 )
  {
    v10 = v25;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 48LL))(
                           v10,
                           v21,
                           &v24);
    if ( AllByIdAndInstance >= 0 )
    {
      AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID))(*(_QWORD *)v24 + 112LL))(v24, cb, v8);
      if ( AllByIdAndInstance >= 0 )
      {
        *(_OWORD *)&string.Reserved.Reserved1 = *((_OWORD *)v8 + 1);
        AllByIdAndInstance = GuidToHString((struct _GUID *)&string, &v27);
        if ( AllByIdAndInstance >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
          AllByIdAndInstance = Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
                                 (__int64)this,
                                 v27,
                                 *((_DWORD *)v8 + 8),
                                 (__int64)&v20);
          if ( AllByIdAndInstance >= 0 )
          {
            AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &cb_4);
            if ( AllByIdAndInstance >= 0 )
            {
              if ( cb_4 != 1 )
              {
LABEL_13:
                AllByIdAndInstance = -2147467259;
                goto LABEL_25;
              }
              v11 = v20;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
              AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v11 + 48LL))(
                                     v11,
                                     0LL,
                                     &v19);
              if ( AllByIdAndInstance >= 0 )
              {
                if ( v19 )
                {
                  v30 = 0LL;
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &string,
                    L"Windows.Storage.Streams.DataWriter",
                    0x23u,
                    0x22u);
                  AllByIdAndInstance = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
                                         v30,
                                         &v23);
                  if ( AllByIdAndInstance >= 0 )
                  {
                    if ( !v23
                      || (AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v23 + 96LL))(
                                                 v23,
                                                 cb - 40,
                                                 (__int64)v8 + 40),
                          AllByIdAndInstance >= 0)
                      && (v12 = v23,
                          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22),
                          AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v12 + 248LL))(
                                                 v12,
                                                 &v22),
                          AllByIdAndInstance >= 0) )
                    {
                      v28 = v22;
                      string.Reserved.Reserved1 = v19;
                      v13 = (HSTRING_HEADER *)Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
                                                &v26,
                                                (struct Windows::Media::Devices::IAudioDeviceModule **)&string,
                                                &v28);
                      v14 = 0LL;
                      if ( &string != v13 )
                      {
                        Reserved1 = v13->Reserved.Reserved1;
                        v14 = (__int64)v13->Reserved.Reserved1;
                        v13->Reserved.Reserved1 = 0LL;
                      }
                      v15 = v26;
                      if ( v26 )
                      {
                        v26 = 0LL;
                        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(v15);
                      }
                      AllByIdAndInstance = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>(
                                             this + 9,
                                             (__int64)this,
                                             v14);
                    }
                  }
                  goto LABEL_25;
                }
                goto LABEL_13;
              }
            }
          }
        }
      }
    }
  }
LABEL_25:
  CoTaskMemFree(v8);
  if ( Reserved1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(Reserved1);
LABEL_27:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  return (unsigned int)AllByIdAndInstance;
}
