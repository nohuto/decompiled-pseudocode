/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1400501C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140049F4C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004ABA0 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x14004B240 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14004F520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14004F520.c)
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
  struct Windows::Storage::Streams::IBuffer *v12[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  PVOID v14; // [rsp+40h] [rbp-20h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *v15; // [rsp+48h] [rbp-18h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+98h] [rbp+38h] BYREF

  v6 = CoInitializeEx(0LL, 0) >= 0;
  if ( Context )
  {
    v17 = 0;
    while ( (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)Context + 26) + 56LL))(*((_QWORD *)Context + 26), &v17) >= 0
         && v17 )
    {
      v12[0] = 0LL;
      v7 = *((_QWORD *)Context + 26);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v12);
      (*(void (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v7 + 48LL))(
        v7,
        0LL,
        v12);
      if ( v12[0] )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Context + 26) + 96LL))(*((_QWORD *)Context + 26), 0LL);
        v8 = v12[0];
        v9 = 0LL;
        v10 = (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)operator new(
                                                                                        0x50uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
          v9 = Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                 v10,
                 v8);
        if ( v9 )
        {
          *(_QWORD *)&v13 = 0LL;
          *(_QWORD *)&v16 = &v14;
          v15 = v9;
          *((_QWORD *)&v16 + 1) = &v15;
          v14 = Context;
          AcquireSRWLockExclusive((PSRWLOCK)Context + 18);
          Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
            (volatile signed __int32 **)&v13,
            (volatile signed __int32 **)Context + 17);
          if ( Context != (PVOID)-144LL )
            ReleaseSRWLockExclusive((PSRWLOCK)Context + 18);
          v11 = (volatile signed __int32 *)v13;
          if ( (_QWORD)v13 )
          {
            v13 = v16;
            Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___(
              (_QWORD **)&v13,
              (__int64)v11,
              (__int64)Context + 136);
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11);
          }
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v9);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v12);
    }
    AcquireSRWLockExclusive((PSRWLOCK)Context + 22);
    if ( !*((_BYTE *)Context + 200) )
      SetThreadpoolWait(Wait, *((HANDLE *)Context + 24), 0LL);
    if ( Context != (PVOID)-176LL )
      ReleaseSRWLockExclusive((PSRWLOCK)Context + 22);
  }
  if ( v6 )
    CoUninitialize();
}
