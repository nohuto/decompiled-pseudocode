/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004A55C
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x14004CC80 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140016098 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        __int64 a4)
{
  HRESULT v8; // edi
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rdi
  int v18; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v21 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      v9 = 0LL;
      v21 = 0LL;
      v10 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = 0LL;
      if ( v10 )
        v13 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                (__int64)v10,
                v11,
                v12);
      v14 = v13;
      v8 = v13 == 0 ? 0x8007000E : 0;
      if ( v13 )
      {
        v9 = v13;
        v14 = 0LL;
        v21 = v13;
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      if ( v13 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 104) + 56LL))(*(_QWORD *)(a1 + 104), &v23);
        v15 = 0;
        if ( v23 )
        {
          while ( 1 )
          {
            v20 = 0LL;
            result = 0;
            v18 = 0;
            v16 = *(_QWORD *)(a1 + 104);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, v15, &v20);
            if ( v8 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20 + 48LL))(v20, &string1);
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 64LL))(v20, &v18);
            if ( v18 == a3 )
            {
              v8 = WindowsCompareStringOrdinal(string1, a2, &result);
              if ( v8 < 0 )
                break;
              if ( !result )
              {
                v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 104LL))(v9, v20);
                if ( v8 < 0 )
                  break;
              }
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
            if ( ++v15 >= v23 )
              goto LABEL_19;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
        }
        else
        {
LABEL_19:
          v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, a4);
        }
      }
    }
    else
    {
      v8 = -2147024809;
    }
  }
  else
  {
    v8 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return (unsigned int)v8;
}
