/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x14004807C
 * Callers:
 *     ?add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x14004F440 (-add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU-$ITyp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x140048FB4 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v4; // rbx
  void *v5; // rax
  signed int AgileReference; // edi
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = (__int64 *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>(v5);
  AgileReference = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    v7 = v4 + 5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4 + 5);
    AgileReference = 0;
    if ( a1 )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      AgileReference = RoGetAgileReference(0LL, &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1, a1, &v10);
      if ( AgileReference >= 0 )
      {
        v8 = *v7;
        *v7 = v10;
        v10 = v8;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    }
    if ( AgileReference >= 0 )
      AgileReference = (*(__int64 (__fastcall **)(__int64 *, GUID *, _QWORD *))*v4)(
                         v4,
                         &GUID_b2f6b1fd_7092_5724_b2ce_91b1176e80e1,
                         a2);
    (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  }
  return (unsigned int)AgileReference;
}
