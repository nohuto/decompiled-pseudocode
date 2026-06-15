/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14004C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140015384 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400300A8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, __int64 a3)
{
  HRESULT v6; // esi
  __int64 v7; // rdi
  __int64 v8; // rbx
  void *v9; // rax
  __int64 v10; // rdx
  char v11; // r8
  int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+50h] BYREF
  INT32 result; // [rsp+98h] [rbp+58h] BYREF

  v19 = 0;
  v17 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      v17 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v9
        && (v8 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>(
                   (__int64)v9,
                   v10,
                   v11)) != 0 )
      {
        v12 = 0;
      }
      else
      {
        v12 = -1;
      }
      v6 = -2147024882;
      if ( v12 != -1 )
      {
        v6 = 0;
        v7 = v8;
        v8 = 0LL;
        v17 = v7;
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( v12 != -1 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(*(_QWORD *)(a1 + 112), &v19);
        v13 = 0;
        if ( v19 )
        {
          while ( 1 )
          {
            v16 = 0LL;
            result = 0;
            v14 = *(_QWORD *)(a1 + 112);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
            v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 48LL))(v14, v13, &v16);
            if ( v6 < 0 )
              break;
            (*(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 48LL))(v16, string1);
            v6 = WindowsCompareStringOrdinal(string1[0], a2, &result);
            if ( v6 < 0 )
              break;
            if ( !result )
            {
              v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v16);
              if ( v6 < 0 )
                break;
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
            if ( ++v13 >= v19 )
              goto LABEL_20;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        }
        else
        {
LABEL_20:
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return (unsigned int)v6;
}
