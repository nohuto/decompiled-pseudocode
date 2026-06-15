/*
 * XREFs of Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140047DEC
 * Callers:
 *     ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004E940 (-ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTAN.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1400187A0 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004923C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___(
        _QWORD **a1,
        __int64 a2,
        __int64 a3)
{
  int MatchingRestrictedErrorInfo; // edi
  __int64 v6; // rbx
  __int64 *v7; // r14
  struct IUnknown **i; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  MatchingRestrictedErrorInfo = 0;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v12);
  v6 = v12[0];
  v7 = *(__int64 **)(v12[0] + 32LL);
  for ( i = *(struct IUnknown ***)(v12[0] + 16LL); i != *(struct IUnknown ***)(v6 + 24); ++i )
  {
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*i)->lpVtbl[1].QueryInterface)(*i, **a1, *a1[1]);
    MatchingRestrictedErrorInfo = v9;
    if ( v9 == -2147417848 || v9 == -2147023174 || v9 == -1996357631 || v9 == -2147418105 || v9 == -2147418094 )
    {
      RoTransformError(v9, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
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
