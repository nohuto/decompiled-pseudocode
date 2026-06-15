/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004AC84
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004D2E0 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x14002F53C (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        __int64 a4)
{
  HRESULT v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  void *v10; // rax
  bool v11; // dl
  int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // rdi
  int v16; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+58h] BYREF

  v22 = 0;
  v19 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      v8 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v9 = 0LL;
      v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10
        && (v18 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                    (__int64)v10,
                    v11),
            (v9 = v18) != 0) )
      {
        v12 = 0;
      }
      else
      {
        v12 = -1;
      }
      v7 = -2147024882;
      if ( v12 != -1 )
      {
        v7 = 0;
        v8 = v9;
        v18 = 0LL;
        v19 = v9;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      if ( v12 != -1 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96), &v22);
        v13 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            v18 = 0LL;
            result = 0;
            v16 = 0;
            v14 = *(_QWORD *)(a1 + 96);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
            v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, v13, &v18);
            if ( v7 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 48LL))(v18, &string1);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 64LL))(v18, &v16);
            if ( v16 == a3 )
            {
              v7 = WindowsCompareStringOrdinal(string1, a2, &result);
              if ( v7 < 0 )
                break;
              if ( !result )
              {
                v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, v18);
                if ( v7 < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
            if ( ++v13 >= v22 )
              goto LABEL_19;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
        }
        else
        {
LABEL_19:
          v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, a4);
        }
      }
    }
    else
    {
      v7 = -2147024809;
    }
  }
  else
  {
    v7 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return (unsigned int)v7;
}
