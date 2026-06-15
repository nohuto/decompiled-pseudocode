/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001A480
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140017410 (-AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004CA48 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        RTL_SRWLOCK **a1,
        void **a2)
{
  RTL_SRWLOCK *v3; // rdi
  RTL_SRWLOCK *v5; // rbx
  PVOID Ptr; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  signed int v8; // ebp
  void *v9; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  PVOID v12; // rcx
  signed int v13; // ebx
  signed int v14; // eax
  __int64 (__fastcall *v15)(Windows::Media::Devices::Internal::AudioDeviceBroker *); // rax
  signed __int64 v16; // rax
  signed __int32 v17; // ecx
  signed __int64 v18; // rtt
  signed int LastError; // eax
  GUID InBuffer; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  DWORD BytesReturned; // [rsp+A0h] [rbp+8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+B0h] [rbp+18h] BYREF
  RTL_SRWLOCK *v25; // [rsp+B8h] [rbp+20h]

  v3 = 0LL;
  *a1 = 0LL;
  v25 = 0LL;
  v5 = (RTL_SRWLOCK *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    v8 = -2147024882;
    goto LABEL_24;
  }
  ppunkMarshal = 0LL;
  v5[2].Ptr = &Microsoft::WRL::FtmBase::`vftable';
  v5[4].Ptr = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    Ptr = v5[4].Ptr;
    if ( Ptr )
    {
      v5[4].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, RTL_SRWLOCK *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &GUID_00000003_0000_0000_c000_000000000046,
      &v5[4]);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppunkMarshal);
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  v5->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v5[1].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v5[2].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v5[6].Ptr = (PVOID)1;
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  v5[7].Ptr = 0LL;
  v5->Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  v5[8].Ptr = 0LL;
  v5[1].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  v5[2].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v5[9].Ptr = 0LL;
  v5[10].Ptr = 0LL;
  v5[11].Ptr = 0LL;
  v5[12].Ptr = 0LL;
  v5[15].Ptr = 0LL;
  InitializeSRWLock(v5 + 16);
  InitializeSRWLock(v5 + 17);
  v5[18].Ptr = 0LL;
  v8 = 0;
  LOBYTE(v5[19].Ptr) = 0;
  v5[20].Ptr = 0LL;
  v5[21].Ptr = 0LL;
  v5[22].Ptr = 0LL;
  LOBYTE(v5[23].Ptr) = 0;
  v5[24].Ptr = 0LL;
  LOBYTE(v5[25].Ptr) = 0;
  v3 = v5;
  v9 = *a2;
  v25 = v5;
  if ( !v9 )
  {
    v8 = -2147467261;
    goto LABEL_24;
  }
  CurrentProcess = GetCurrentProcess();
  v11 = GetCurrentProcess();
  if ( !DuplicateHandle(v11, v9, CurrentProcess, &v3[11].Ptr, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_20;
  }
  v12 = v3[9].Ptr;
  BytesReturned = 0;
  v13 = 0;
  v22 = 0x100000003LL;
  InBuffer = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(PVOID, GUID *, __int64, RTL_SRWLOCK *, int, DWORD *))(*(_QWORD *)v12 + 24LL))(
            v12,
            &InBuffer,
            24LL,
            v3 + 13,
            16,
            &BytesReturned);
    goto LABEL_18;
  }
  AcquireSRWLockExclusive(v3 + 18);
  if ( !LOBYTE(v3[19].Ptr) )
  {
    if ( !DeviceIoControl(v3[11].Ptr, 0x2F0003u, &InBuffer, 0x18u, &v3[13], 0x10u, &BytesReturned, 0LL) )
    {
      if ( GetLastError() )
      {
        v14 = GetLastError();
        v13 = v14;
        if ( v14 > 0 )
          v13 = (unsigned __int16)v14 | 0x80070000;
      }
    }
    if ( v3 != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockExclusive(v3 + 18);
LABEL_18:
    if ( v13 >= 0 && BytesReturned >= 0x10 )
    {
      v8 = Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(v3);
      if ( v8 < 0 )
        goto LABEL_24;
    }
    goto LABEL_19;
  }
  if ( v3 != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(v3 + 18);
LABEL_19:
  LOBYTE(v3[25].Ptr) = 1;
LABEL_20:
  if ( v8 >= 0 )
  {
    *a1 = v3;
    v15 = (__int64 (__fastcall *)(Windows::Media::Devices::Internal::AudioDeviceBroker *))*((_QWORD *)v3->Ptr + 1);
    if ( v15 == Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef )
      Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef((Windows::Media::Devices::Internal::AudioDeviceBroker *)v3);
    else
      v15((Windows::Media::Devices::Internal::AudioDeviceBroker *)v3);
    v8 = 0;
  }
LABEL_24:
  if ( v3 )
  {
    v16 = (signed __int64)v3[6].Ptr;
    while ( v16 >= 0 )
    {
      v17 = v16 - 1;
      v18 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3[6], v16 - 1, v16);
      if ( v18 == v16 )
        goto LABEL_28;
    }
    v17 = _InterlockedDecrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_28:
    if ( !v17 )
    {
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64))v25->Ptr + 10))(v25, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v8;
}
