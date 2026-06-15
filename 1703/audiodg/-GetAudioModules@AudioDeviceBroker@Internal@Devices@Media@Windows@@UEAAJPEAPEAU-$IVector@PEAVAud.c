/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140017050
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?QueryInterface@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019C10 (-QueryInterface@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicat.c)
 *     ?Release@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140019D70 (-Release@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14002F724 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKQEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEBQEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x140048998 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKQEAVAud.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004C720 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14004EF44 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        _QWORD *a2)
{
  _QWORD **v4; // rdi
  _DWORD *v5; // rsi
  HRESULT Interface; // r15d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  signed int LastError; // eax
  _QWORD *v13; // r8
  __int64 (__fastcall *v14)(_QWORD **, GUID *, _QWORD *); // rax
  _QWORD **v15; // rcx
  __int64 (__fastcall *v16)(void *); // rax
  void *v18; // rax
  __int64 v19; // rdx
  struct _GUID *v20; // r15
  const unsigned __int16 *v21; // r13
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  HRESULT v24; // eax
  HRESULT v25; // eax
  __int64 v26; // rcx
  bool v27; // sf
  void (__fastcall *v28)(__int64); // rax
  HSTRING v29; // [rsp+48h] [rbp-29h] BYREF
  HSTRING string; // [rsp+50h] [rbp-21h] BYREF
  __int64 v31; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 length; // [rsp+60h] [rbp-11h] BYREF
  struct _GUID v33; // [rsp+68h] [rbp-9h] BYREF
  struct KSIDENTIFIER InBuffer; // [rsp+78h] [rbp+7h] BYREF
  DWORD BytesReturned; // [rsp+E0h] [rbp+6Fh] BYREF
  APTTYPE pAptType; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *pAptQualifier; // [rsp+F0h] [rbp+7Fh] BYREF

  BytesReturned = 0;
  v4 = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  string = 0LL;
  if ( !a2 )
  {
    Interface = -2147467261;
    goto LABEL_29;
  }
  *a2 = 0LL;
  Interface = 0;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    v7[4] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( v9 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
    v8[5] = 0LL;
    *v8 = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable';
    *((_DWORD *)v8 + 12) = 0;
    v8[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable'{for `IWeakReferenceSource'};
    v8[7] = 0LL;
    v8[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( CoGetApartmentType(&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier) < 0 )
    {
      pAptType = APTTYPE_MTA;
    }
    else if ( pAptType == APTTYPE_MAINSTA || pAptType == APTTYPE_STA )
    {
      *((_DWORD *)v8 + 18) = 1;
      if ( v8 != (_QWORD *)-80LL )
        *((_DWORD *)v8 + 20) = 0;
      goto LABEL_10;
    }
    *((_DWORD *)v8 + 18) = 0;
    if ( v8 != (_QWORD *)-80LL )
      InitializeSRWLock((PSRWLOCK)v8 + 10);
LABEL_10:
    *((_DWORD *)v8 + 22) = 0;
    v4 = (_QWORD **)v8;
    *((_DWORD *)v8 + 24) = 0;
    goto LABEL_11;
  }
  Interface = -2147024882;
LABEL_11:
  if ( Interface >= 0 )
  {
    if ( !*((_BYTE *)this + 200) )
    {
      v13 = a2;
      v15 = v4;
      v14 = (__int64 (__fastcall *)(_QWORD **, GUID *, _QWORD *))**v4;
      goto LABEL_40;
    }
    v10 = *((_QWORD *)this + 9);
    v11 = 0;
    *(&InBuffer.Alignment + 2) = 0x100000001LL;
    InBuffer.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
    if ( v10 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, struct KSIDENTIFIER *, __int64))(*(_QWORD *)v10 + 24LL))(
              v10,
              &InBuffer,
              32LL);
    }
    else
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 18);
      if ( *((_BYTE *)this + 152) )
      {
        if ( this != (Windows::Media::Devices::Internal::AudioDeviceBroker *)-144LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
        goto LABEL_23;
      }
      if ( !DeviceIoControl(*((HANDLE *)this + 11), 0x2F0003u, &InBuffer, 0x20u, 0LL, 0, &BytesReturned, 0LL) )
      {
        if ( GetLastError() )
        {
          LastError = GetLastError();
          v11 = LastError;
          if ( LastError > 0 )
            v11 = (unsigned __int16)LastError | 0x80070000;
        }
      }
      if ( this != (Windows::Media::Devices::Internal::AudioDeviceBroker *)-144LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
    }
    if ( ((int)(v11 + 0x80000000) < 0 || v11 == -2147024662) && BytesReturned )
    {
      if ( BytesReturned <= 0x7FFFFFFFuLL && (v18 = CoTaskMemAlloc(BytesReturned), (v5 = v18) != 0LL) )
      {
        Interface = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
                      this,
                      &InBuffer,
                      0x20u,
                      v18,
                      BytesReturned,
                      &BytesReturned);
        if ( Interface >= 0 )
        {
          if ( BytesReturned < 8 || (v19 = (unsigned int)v5[1], BytesReturned < (unsigned __int64)(8 * v19 + 8)) )
          {
            Interface = -2147418113;
          }
          else
          {
            pAptType = APTTYPE_STA;
            v20 = (struct _GUID *)(v5 + 2);
            pAptQualifier = v5 + 2;
            if ( (_DWORD)v19 )
            {
              v21 = (const unsigned __int16 *)(v5 + 9);
              while ( 1 )
              {
                v33 = *v20;
                Interface = GuidToHString(&v33, &v29);
                if ( Interface < 0 )
                  break;
                Interface = StringCchLengthW(v21, v22, &length);
                if ( Interface < 0 )
                  break;
                Interface = WindowsCreateString(v21, length, &string);
                if ( Interface < 0 )
                  break;
                *(_QWORD *)&v33.Data1 = this;
                Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ * &,unsigned long &,HSTRING__ * &,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBroker * const>(
                  (unsigned int)&v31,
                  (unsigned int)&v29,
                  (_DWORD)v21 - 12,
                  (unsigned int)&string,
                  (__int64)(v21 - 4),
                  (__int64)(v21 - 2),
                  (__int64)&v33);
                v23 = v31;
                if ( !v31 )
                {
                  Interface = -2147024882;
                  goto LABEL_25;
                }
                ((void (__fastcall *)(_QWORD **, __int64))(*v4)[13])(v4, v31);
                v24 = WindowsDeleteString(v29);
                v29 = 0LL;
                Interface = v24;
                if ( v24 < 0 )
                {
                  v26 = v23;
                  v28 = *(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL);
LABEL_63:
                  v28(v26);
                  goto LABEL_25;
                }
                v25 = WindowsDeleteString(string);
                string = 0LL;
                v26 = v23;
                Interface = v25;
                v27 = v25 < 0;
                v28 = *(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL);
                if ( v27 )
                  goto LABEL_63;
                v21 += 142;
                v20 = (struct _GUID *)(pAptQualifier + 71);
                v31 = 0LL;
                pAptQualifier += 71;
                v28(v23);
                if ( (unsigned int)++pAptType >= v5[1] )
                  goto LABEL_59;
              }
            }
            else
            {
LABEL_59:
              Interface = ((__int64 (__fastcall *)(_QWORD **, GUID *, _QWORD *))**v4)(
                            v4,
                            &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                            a2);
              if ( Interface >= 0 )
                Interface = 0;
            }
          }
        }
      }
      else
      {
        Interface = -2147024882;
      }
      goto LABEL_25;
    }
LABEL_23:
    v13 = a2;
    v14 = (__int64 (__fastcall *)(_QWORD **, GUID *, _QWORD *))**v4;
    v15 = v4;
    if ( (char *)v14 == (char *)Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface )
    {
      Interface = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface(
                    v4,
                    &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                    a2);
      goto LABEL_25;
    }
LABEL_40:
    Interface = v14(v15, &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9, v13);
  }
LABEL_25:
  if ( v29 )
  {
    WindowsDeleteString(v29);
    v29 = 0LL;
  }
  if ( string )
  {
    WindowsDeleteString(string);
    string = 0LL;
  }
LABEL_29:
  CoTaskMemFree(v5);
  if ( v4 )
  {
    v16 = (__int64 (__fastcall *)(void *))(*v4)[2];
    if ( v16 == Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release(v4);
    else
      v16(v4);
  }
  return (unsigned int)Interface;
}
