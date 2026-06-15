/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14004EFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140048860 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Wind.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x140049368 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1400499FC (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004E190 (-Release@-$RuntimeClass@U-$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Intern_ea_14004E190.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  BOOL v6; // r15d
  __int64 v7; // rbx
  struct Windows::Storage::Streams::IBuffer *v8; // rdi
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v9; // rbx
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rdx
  struct Windows::Storage::Streams::IBuffer *v13[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+88h] [rbp+38h] BYREF

  v6 = CoInitializeEx(0LL, 0) >= 0;
  if ( Context )
  {
    v16 = 0;
    while ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)Context + 24) + 56LL))(*((_QWORD *)Context + 24), &v16) >= 0
         && v16 )
    {
      v13[0] = 0LL;
      v7 = *((_QWORD *)Context + 24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
      (*(void (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v7 + 48LL))(
        v7,
        0LL,
        v13);
      if ( v13[0] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Context + 24) + 96LL))(*((_QWORD *)Context + 24), 0LL);
        v8 = v13[0];
        v9 = 0LL;
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x40uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v9 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                 v10,
                 v8);
        if ( v9 )
        {
          *(_QWORD *)&v14 = 0LL;
          *(_QWORD *)&v15 = Context;
          *((_QWORD *)&v15 + 1) = v9;
          AcquireSRWLockExclusive((PSRWLOCK)Context + 16);
          Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
            (volatile signed __int32 **)&v14,
            (volatile signed __int32 **)Context + 15);
          if ( Context != (PVOID)-128LL )
            ReleaseSRWLockExclusive((PSRWLOCK)Context + 16);
          v11 = (volatile signed __int32 *)v14;
          if ( (_QWORD)v14 )
          {
            v12 = v14;
            v14 = v15;
            Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___(
              &v14,
              v12,
              (RTL_SRWLOCK *)Context + 15);
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
          }
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v9);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v13);
    }
    AcquireSRWLockExclusive((PSRWLOCK)Context + 20);
    if ( !*((_BYTE *)Context + 184) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 22), 0LL);
    if ( Context != (PVOID)-160LL )
      ReleaseSRWLockExclusive((PSRWLOCK)Context + 20);
  }
  if ( v6 )
    CoUninitialize();
}
