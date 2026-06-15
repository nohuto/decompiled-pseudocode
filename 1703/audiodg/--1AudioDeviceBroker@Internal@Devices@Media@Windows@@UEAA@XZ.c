/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400172F0
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x1400173E0 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1400327A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E2E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  char *v3; // rcx
  __int64 v4; // rcx
  wil::details *v5; // rcx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( *((_QWORD *)this + 12) )
    CM_Unregister_Notification();
  if ( *((_QWORD *)this + 21) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 20);
    *((_BYTE *)this + 184) = 1;
    if ( this != (Windows::Media::Devices::Internal::AudioDeviceBroker *)-160LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
    SetThreadpoolWait(*((PTP_WAIT *)this + 21), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 21), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 11);
  *((_BYTE *)this + 152) = 1;
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 11) = 0LL;
  }
  v4 = *((_QWORD *)this + 24);
  if ( v4 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (wil::details *)*((_QWORD *)this + 22);
  if ( v5 )
    wil::details::CloseHandle(v5, a2);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v6 )
  {
    *((_QWORD *)this + 15) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v9);
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
