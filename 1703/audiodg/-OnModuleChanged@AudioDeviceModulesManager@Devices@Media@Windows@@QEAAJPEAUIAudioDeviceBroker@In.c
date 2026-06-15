/*
 * XREFs of ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x140047C98 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140047E74 (--$ActivateInstance@V-$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140048674 (--$GetActivationFactory@V-$ComPtr@UIDataReaderStatics@Streams@Storage@Windows@@@WRL@Microsoft@@@.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140048728 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Wind.c)
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x140048A40 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1400499FC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x14004A9AC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004AC84 (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004C720 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIModuleCommandResult@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E270 (-Release@-$RuntimeClass@U-$InterfaceList@UIModuleCommandResult@Devices@Media@Window_ea_14004E270.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  PVOID Reserved1; // rdi
  int AllByIdAndInstance; // esi
  const unsigned __int16 *v7; // rdx
  LPVOID v8; // r14
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  HSTRING_HEADER *v13; // rax
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rbx
  unsigned int cb; // [rsp+20h] [rbp-69h] BYREF
  int cb_4; // [rsp+24h] [rbp-65h] BYREF
  void *v19; // [rsp+28h] [rbp-61h] BYREF
  __int64 v20; // [rsp+30h] [rbp-59h] BYREF
  __int64 v21; // [rsp+38h] [rbp-51h] BYREF
  struct Windows::Storage::Streams::IBuffer *v22; // [rsp+40h] [rbp-49h] BYREF
  __int64 v23; // [rsp+48h] [rbp-41h] BYREF
  __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  struct Windows::Storage::Streams::IBuffer *v25; // [rsp+58h] [rbp-31h] BYREF
  __int64 v26; // [rsp+60h] [rbp-29h] BYREF
  __int64 v27; // [rsp+68h] [rbp-21h] BYREF
  HSTRING v28; // [rsp+70h] [rbp-19h] BYREF
  HSTRING_HEADER string; // [rsp+80h] [rbp-9h] BYREF
  __int64 v30; // [rsp+98h] [rbp+Fh]

  v26 = 0LL;
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
    goto LABEL_30;
  AllByIdAndInstance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &cb);
  if ( AllByIdAndInstance < 0 || cb < 0x28 )
    goto LABEL_30;
  v8 = CoTaskMemAlloc(cb);
  if ( !v8 )
  {
    AllByIdAndInstance = -2147024882;
    goto LABEL_30;
  }
  v9 = (__int64 *)Windows::Internal::StringReference::StringReference(
                    (HSTRING *)&string,
                    (const unsigned __int16 (*)[35])v7);
  AllByIdAndInstance = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReaderStatics>>(
                         *v9,
                         &v26);
  if ( AllByIdAndInstance >= 0 )
  {
    v10 = v26;
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
        AllByIdAndInstance = GuidToHString((struct _GUID *)&string, &v28);
        if ( AllByIdAndInstance >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
          AllByIdAndInstance = Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
                                 (__int64)this,
                                 v28,
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
                goto LABEL_28;
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
                      v25 = v22;
                      string.Reserved.Reserved1 = v19;
                      v13 = (HSTRING_HEADER *)Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
                                                &v27,
                                                (struct Windows::Media::Devices::IAudioDeviceModule **)&string,
                                                &v25);
                      if ( &string != v13 )
                      {
                        Reserved1 = v13->Reserved.Reserved1;
                        v13->Reserved.Reserved1 = 0LL;
                      }
                      v14 = v27;
                      if ( v27 )
                      {
                        v27 = 0LL;
                        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v14);
                      }
                      string.Reserved.Reserved1 = this;
                      *(_QWORD *)&string.Reserved.Reserved2[8] = Reserved1;
                      AllByIdAndInstance = 0;
                      v25 = 0LL;
                      AcquireSRWLockExclusive((PSRWLOCK)this + 9);
                      Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
                        (volatile signed __int32 **)&v25,
                        (volatile signed __int32 **)this + 8);
                      if ( this != (Windows::Media::Devices::AudioDeviceModulesManager *)-72LL )
                        ReleaseSRWLockExclusive((PSRWLOCK)this + 9);
                      v15 = (volatile signed __int32 *)v25;
                      if ( v25 )
                      {
                        AllByIdAndInstance = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___(
                                               &string,
                                               (__int64)v25,
                                               (__int64)this + 64);
                        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v15);
                      }
                    }
                  }
                  goto LABEL_28;
                }
                goto LABEL_13;
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  CoTaskMemFree(v8);
  if ( Reserved1 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::IModuleCommandResult,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(Reserved1);
LABEL_30:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  return (unsigned int)AllByIdAndInstance;
}
