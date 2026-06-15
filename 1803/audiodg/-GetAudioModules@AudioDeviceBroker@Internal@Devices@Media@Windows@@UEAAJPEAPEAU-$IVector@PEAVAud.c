/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018B60
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?QueryInterface@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015E80 (-QueryInterface@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicat.c)
 *     ?Release@?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x140016000 (-Release@-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVA.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140016098 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x1400189D0 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAudioDeviceBroker@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@AEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@@Z @ 0x14004806C (--$Make@VAudioDeviceModule@Devices@Media@Windows@@AEAPEAUHSTRING__@@AEAKAEAPEAU5@AEAKAEAKPEAVAud.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x14004C070 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        _QWORD *a2)
{
  __int64 v2; // r14
  _QWORD *v5; // rbx
  _DWORD *v6; // rdi
  void *v7; // rax
  __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // rcx
  signed int v11; // esi
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, const struct _GUID *, _QWORD *); // rax
  signed int Interface; // eax
  __int64 (__fastcall *v15)(_QWORD *); // rax
  void *v17; // rax
  __int64 v18; // rdx
  struct _GUID *v19; // rsi
  UINT32 v20; // r15d
  const WCHAR *v21; // r13
  const WCHAR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r14
  HRESULT v25; // eax
  HRESULT v26; // eax
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v28; // [rsp+48h] [rbp-31h]
  __int64 v29; // [rsp+50h] [rbp-29h] BYREF
  struct _GUID v30; // [rsp+60h] [rbp-19h] BYREF
  KSIDENTIFIER v31; // [rsp+70h] [rbp-9h] BYREF
  SIZE_T cb; // [rsp+E8h] [rbp+6Fh] BYREF
  int v34; // [rsp+F0h] [rbp+77h]
  HSTRING v35; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  LODWORD(cb) = 0;
  v35 = 0LL;
  v5 = 0LL;
  string = 0LL;
  v6 = 0LL;
  if ( !a2 )
  {
    v11 = -2147467261;
    goto LABEL_19;
  }
  *a2 = 0LL;
  v7 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v2 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
           (__int64)v7,
           v8,
           v9);
  v10 = v2;
  v11 = v2 == 0 ? 0x8007000E : 0;
  if ( v2 )
  {
    v5 = (_QWORD *)v2;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( !v2 )
    goto LABEL_15;
  if ( !*((_BYTE *)this + 208) )
  {
    Interface = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v5)(
                  v5,
                  &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                  a2);
LABEL_14:
    v11 = Interface;
    goto LABEL_15;
  }
  *(&v31.Alignment + 2) = 0x100000001LL;
  v31.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  v12 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
          (RTL_SRWLOCK *)this,
          &v31,
          0x20u,
          0LL,
          0,
          (unsigned int *)&cb);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147024662 || !(_DWORD)cb )
  {
    v13 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _QWORD *))*v5;
    if ( v13 == Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface )
      Interface = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::QueryInterface(
                    (__int64)v5,
                    &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
                    a2);
    else
      Interface = v13((__int64)v5, &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9, a2);
    goto LABEL_14;
  }
  if ( (unsigned int)cb <= 0x7FFFFFFFuLL && (v17 = CoTaskMemAlloc((unsigned int)cb), (v6 = v17) != 0LL) )
  {
    v11 = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
            (RTL_SRWLOCK *)this,
            &v31,
            0x20u,
            v17,
            cb,
            (unsigned int *)&cb);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)cb < 8 || (v18 = (unsigned int)v6[1], (unsigned int)cb < (unsigned __int64)(8 * v18 + 8)) )
      {
        v11 = -2147418113;
      }
      else
      {
        v34 = 0;
        v19 = (struct _GUID *)(v6 + 2);
        v28 = v6 + 2;
        if ( (_DWORD)v18 )
        {
          v20 = cb;
          v21 = (const WCHAR *)(v6 + 9);
          while ( 1 )
          {
            v30 = *v19;
            v11 = GuidToHString(&v30, &v35);
            if ( v11 < 0 )
              goto LABEL_15;
            if ( v21 )
            {
              v22 = v21;
              v23 = 128LL;
              do
              {
                if ( !*v22 )
                  break;
                ++v22;
                --v23;
              }
              while ( v23 );
              v11 = v23 == 0 ? 0x80070057 : 0;
              v20 = v23 ? 128 - v23 : 0;
            }
            else
            {
              v11 = -2147024809;
            }
            if ( v11 < 0 )
              goto LABEL_15;
            v11 = WindowsCreateString(v21, v20, &string);
            if ( v11 < 0 )
              goto LABEL_15;
            *(_QWORD *)&v30.Data1 = this;
            Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ * &,unsigned long &,HSTRING__ * &,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBroker *>(
              (unsigned int)&v29,
              (unsigned int)&v35,
              (_DWORD)v21 - 12,
              (unsigned int)&string,
              (__int64)(v21 - 4),
              (__int64)(v21 - 2),
              (__int64)&v30);
            v24 = v29;
            if ( !v29 )
            {
              v11 = -2147024882;
              goto LABEL_15;
            }
            (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 104LL))(v5, v29);
            v25 = WindowsDeleteString(v35);
            v35 = 0LL;
            v11 = v25;
            if ( v25 < 0 )
              break;
            v26 = WindowsDeleteString(string);
            string = 0LL;
            v11 = v26;
            if ( v26 < 0 )
            {
              if ( !v24 )
                goto LABEL_15;
              goto LABEL_54;
            }
            v29 = 0LL;
            v19 = (struct _GUID *)(v28 + 71);
            v21 += 142;
            v28 += 71;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            if ( (unsigned int)++v34 >= v6[1] )
              goto LABEL_58;
          }
          if ( v24 )
          {
LABEL_54:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            goto LABEL_15;
          }
          goto LABEL_17;
        }
LABEL_58:
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
    v11 = -2147024882;
  }
LABEL_15:
  if ( v35 )
  {
    WindowsDeleteString(v35);
    v35 = 0LL;
  }
LABEL_17:
  if ( string )
  {
    WindowsDeleteString(string);
    string = 0LL;
  }
LABEL_19:
  CoTaskMemFree(v6);
  if ( v5 )
  {
    v15 = *(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL);
    if ( v15 == Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release )
      Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Release(v5);
    else
      v15(v5);
  }
  return (unsigned int)v11;
}
