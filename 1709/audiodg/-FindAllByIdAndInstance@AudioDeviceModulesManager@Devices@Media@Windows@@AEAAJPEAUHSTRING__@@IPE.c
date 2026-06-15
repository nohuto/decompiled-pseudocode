/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004C3A4
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004EA70 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140015384 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        __int64 a4)
{
  HRESULT v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  char v12; // r8
  int v13; // r14d
  unsigned int v14; // r14d
  __int64 v15; // rbx
  int v17; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+58h] BYREF

  v23 = 0;
  v20 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      v20 = 0LL;
      v8 = 0LL;
      v9 = 0LL;
      v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v10
        && (v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                   (__int64)v10,
                   v11,
                   v12)) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v13 = -1;
      }
      v7 = -2147024882;
      if ( v13 != -1 )
      {
        v7 = 0;
        v8 = v9;
        v9 = 0LL;
        v20 = v8;
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v13 != -1 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(*(_QWORD *)(a1 + 112), &v23);
        v14 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            result = 0;
            v17 = 0;
            v15 = *(_QWORD *)(a1 + 112);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, v14, &v19);
            if ( v7 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL))(v19, &string1);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 64LL))(v19, &v17);
            if ( v17 == a3 )
            {
              v7 = WindowsCompareStringOrdinal(string1, a2, &result);
              if ( v7 < 0 )
                break;
              if ( !result )
              {
                v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, v19);
                if ( v7 < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
            if ( ++v14 >= v23 )
              goto LABEL_21;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
        }
        else
        {
LABEL_21:
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return (unsigned int)v7;
}
