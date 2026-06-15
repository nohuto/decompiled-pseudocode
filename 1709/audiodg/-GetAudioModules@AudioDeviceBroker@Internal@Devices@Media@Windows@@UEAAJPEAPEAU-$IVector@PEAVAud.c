/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018500
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?QueryInterface@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400151B0 (-QueryInterface@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicat.c)
 *     ?Release@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140015310 (-Release@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140015384 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140018370 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x14004A1CC (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAud.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004DE78 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v5; // rbx
  _DWORD *v6; // rsi
  void *v7; // rax
  __int64 v8; // rdx
  char v9; // r8
  int v10; // r15d
  signed int v11; // r14d
  HSTRING v12; // rdi
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, const struct _GUID *, _QWORD *); // rax
  signed int Interface; // eax
  __int64 (__fastcall *v16)(_QWORD *); // rax
  void *v18; // rax
  __int64 v19; // rdx
  struct _GUID *v20; // r14
  UINT32 v21; // r15d
  const WCHAR *v22; // r13
  const WCHAR *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v27; // [rsp+48h] [rbp-31h]
  HSTRING v28; // [rsp+50h] [rbp-29h] BYREF
  struct _GUID v29; // [rsp+60h] [rbp-19h] BYREF
  KSIDENTIFIER v30; // [rsp+70h] [rbp-9h] BYREF
  SIZE_T cb; // [rsp+E8h] [rbp+6Fh] BYREF
  int v33; // [rsp+F0h] [rbp+77h]
  HSTRING v34; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  LODWORD(cb) = 0;
  v34 = 0LL;
  v5 = 0LL;
  string = 0LL;
  v6 = 0LL;
  if ( !a2 )
  {
    v11 = -2147467261;
    goto LABEL_20;
  }
  *a2 = 0LL;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7
    && (v2 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
               (__int64)v7,
               v8,
               v9),
        v7 = 0LL,
        v2) )
  {
    v10 = 0;
  }
  else
  {
    v10 = -1;
  }
  v11 = -2147024882;
  if ( v10 != -1 )
  {
    v11 = (int)v7;
    v5 = (_QWORD *)v2;
    v2 = (__int64)v7;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v12 = 0LL;
  if ( v10 == -1 )
    goto LABEL_16;
  if ( !*((_BYTE *)this + 216) )
  {
    Interface = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(
                  v5,
                  &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                  a2);
LABEL_15:
    v11 = Interface;
    goto LABEL_16;
  }
  *(&v30.Alignment + 2) = 0x100000001LL;
  v30.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  v13 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
          (RTL_SRWLOCK *)this,
          &v30,
          0x20u,
          0LL,
          0,
          (unsigned int *)&cb);
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147024662 || !(_DWORD)cb )
  {
    v14 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD *))*v5;
    if ( v14 == Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface )
      Interface = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface(
                    (__int64)v5,
                    &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                    a2);
    else
      Interface = v14((__int64)v5, &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9, a2);
    goto LABEL_15;
  }
  if ( (unsigned int)cb <= 0x7FFFFFFFuLL && (v18 = CoTaskMemAlloc((unsigned int)cb), (v6 = v18) != 0LL) )
  {
    v11 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
            (RTL_SRWLOCK *)this,
            &v30,
            0x20u,
            v18,
            cb,
            (unsigned int *)&cb);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)cb < 8 || (v19 = (unsigned int)v6[1], (unsigned int)cb < (unsigned __int64)(8 * v19 + 8)) )
      {
        v11 = -2147418113;
      }
      else
      {
        v33 = 0;
        v20 = (struct _GUID *)(v6 + 2);
        v27 = v6 + 2;
        if ( (_DWORD)v19 )
        {
          v21 = cb;
          v22 = (const WCHAR *)(v6 + 9);
          while ( 1 )
          {
            v29 = *v20;
            v11 = GuidToHString(&v29, &v34);
            if ( v11 < 0 )
              goto LABEL_16;
            if ( v22 )
            {
              v23 = v22;
              v24 = 128LL;
              do
              {
                if ( !*v23 )
                  break;
                ++v23;
                --v24;
              }
              while ( v24 );
              v11 = v24 == 0 ? 0x80070057 : 0;
              v21 = v24 ? 128 - v24 : 0;
            }
            else
            {
              v11 = -2147024809;
            }
            if ( v11 < 0 )
              goto LABEL_16;
            v11 = WindowsCreateString(v22, v21, &string);
            if ( v11 < 0 )
              goto LABEL_16;
            *(_QWORD *)&v29.Data1 = this;
            Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ * &,unsigned long &,HSTRING__ * &,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBroker *>(
              (unsigned int)&v28,
              (unsigned int)&v34,
              (_DWORD)v22 - 12,
              (unsigned int)&string,
              (__int64)(v22 - 4),
              (__int64)(v22 - 2),
              (__int64)&v29);
            v12 = v28;
            if ( !v28 )
              goto LABEL_44;
            (*(void (__fastcall **)(_QWORD *, HSTRING))(*v5 + 104LL))(v5, v28);
            v11 = WindowsDeleteString(v34);
            v34 = 0LL;
            if ( v11 < 0 )
              break;
            v11 = WindowsDeleteString(string);
            string = 0LL;
            if ( v11 < 0 )
            {
              if ( !v12 )
              {
LABEL_55:
                v12 = 0LL;
                goto LABEL_16;
              }
LABEL_57:
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16LL))(v12);
              goto LABEL_55;
            }
            v28 = 0LL;
            v20 = (struct _GUID *)(v27 + 71);
            v25 = *(_QWORD *)v12;
            v22 += 142;
            v27 += 71;
            (*(void (__fastcall **)(HSTRING))(v25 + 16))(v12);
            if ( (unsigned int)++v33 >= v6[1] )
            {
              v12 = 0LL;
              goto LABEL_59;
            }
            v12 = 0LL;
          }
          if ( v12 )
            goto LABEL_57;
          goto LABEL_18;
        }
LABEL_59:
        v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(
                v5,
                &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                a2);
        if ( v11 >= 0 )
          v11 = 0;
      }
    }
  }
  else
  {
LABEL_44:
    v11 = -2147024882;
  }
LABEL_16:
  if ( v34 )
  {
    WindowsDeleteString(v34);
    v34 = v12;
  }
LABEL_18:
  if ( string )
  {
    WindowsDeleteString(string);
    string = v12;
  }
LABEL_20:
  CoTaskMemFree(v6);
  if ( v5 )
  {
    v16 = *(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL);
    if ( v16 == Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release(v5);
    else
      v16(v5);
  }
  return (unsigned int)v11;
}
