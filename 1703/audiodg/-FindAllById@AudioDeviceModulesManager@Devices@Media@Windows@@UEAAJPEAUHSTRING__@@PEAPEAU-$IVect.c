/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004AAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x14002F53C (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, __int64 a3)
{
  HRESULT v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdi
  void *v9; // rax
  bool v10; // dl
  int v11; // r14d
  unsigned int v12; // r14d
  __int64 v13; // rdi
  __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 result; // [rsp+98h] [rbp+58h] BYREF

  v18 = 0;
  v16 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      v7 = 0LL;
      result = 0LL;
      v16 = 0LL;
      v8 = 0LL;
      v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9
        && (result = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                       (__int64)v9,
                       v10),
            (v8 = result) != 0) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v6 = -2147024882;
      if ( v11 != -1 )
      {
        v6 = 0;
        v7 = v8;
        result = 0LL;
        v16 = v8;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&result);
      if ( v11 != -1 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 96) + 56LL))(*(_QWORD *)(a1 + 96), &v18);
        v12 = 0;
        if ( v18 )
        {
          while ( 1 )
          {
            v15 = 0LL;
            LODWORD(result) = 0;
            v13 = *(_QWORD *)(a1 + 96);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
            v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, v12, &v15);
            if ( v6 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 48LL))(v15, string1);
            v6 = WindowsCompareStringOrdinal(string1[0], a2, (INT32 *)&result);
            if ( v6 < 0 )
              break;
            if ( !(_DWORD)result )
            {
              v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v15);
              if ( v6 < 0 )
                break;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
            if ( ++v12 >= v18 )
              goto LABEL_18;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        }
        else
        {
LABEL_18:
          v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, a3);
        }
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return (unsigned int)v6;
}
