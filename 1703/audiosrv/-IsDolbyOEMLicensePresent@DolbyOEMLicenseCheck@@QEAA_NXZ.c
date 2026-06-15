/*
 * XREFs of ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180045840
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800472EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D3968 (--$As@U-$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@-$ComPtr@V-$AgileVector@PEAU.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800D4248 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Device.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800D43C4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumerat.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x1800D4968 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z @ 0x1800D5544 (-CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z.c)
 *     ?Initialize@CRSABCrypt@@QEAAJXZ @ 0x1800D64BC (-Initialize@CRSABCrypt@@QEAAJXZ.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x1800D6608 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$InterfaceList@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D6F50 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IVector@PEAUHSTRING__@@@Collections@Fou_ea_1800D6F50.c)
 */

char __fastcall DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent(DolbyOEMLicenseCheck *this)
{
  DWORD v1; // r13d
  HSTRING v3; // rbx
  void *v4; // r14
  unsigned int *v5; // r15
  char v6; // r12
  LSTATUS v7; // eax
  bool v8; // sf
  unsigned int v9; // ecx
  void *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v16; // rax
  HSTRING v17; // rax
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int *v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  LSTATUS v31; // eax
  bool v32; // sf
  signed int LastError; // eax
  bool v34; // sf
  unsigned int v35; // ecx
  __int64 i; // rdi
  unsigned int v37; // r12d
  unsigned int v38; // esi
  HSTRING *v39; // r14
  PCWSTR StringRawBuffer; // rax
  unsigned int v41; // edi
  _QWORD *v42; // rbx
  HSTRING *v43; // rsi
  __int64 v44; // r14
  __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  DWORD cbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  DWORD Type[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v48[2]; // [rsp+60h] [rbp-A8h] BYREF
  DWORD cchValueName[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  void *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h] BYREF
  __int64 v54; // [rsp+90h] [rbp-78h] BYREF
  __int64 v55; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v56; // [rsp+A0h] [rbp-68h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING v59; // [rsp+B8h] [rbp-50h]
  CRSABCrypt *v60; // [rsp+C0h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-28h]
  HSTRING_HEADER v63; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v64; // [rsp+100h] [rbp-8h]
  HSTRING_HEADER v65; // [rsp+108h] [rbp+0h] BYREF
  __int64 v66; // [rsp+120h] [rbp+18h]
  BYTE Data[512]; // [rsp+128h] [rbp+20h] BYREF
  CHAR MultiByteStr[528]; // [rsp+328h] [rbp+220h] BYREF
  WCHAR ValueName[520]; // [rsp+538h] [rbp+430h] BYREF

  v1 = 0;
  v60 = this;
  v54 = 0LL;
  v3 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v59 = 0LL;
  v55 = 0LL;
  string = 0LL;
  v62 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"System.Devices.HardwareIds",
    0x1Bu,
    0x1Au);
  v64 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v63, L"System.Devices.DeviceInstanceId", 0x20u, 0x1Fu);
  v51 = 0LL;
  HIDWORD(v45) = 0;
  hKey = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Dolby\\AtmosOEM", 0, 1u, &hKey);
  v8 = v7 < 0;
  if ( !v7 )
    goto LABEL_35;
  if ( v7 > 0 )
    v8 = 1;
  if ( !v8 )
  {
LABEL_35:
    if ( (int)CRSABCrypt::Initialize(this) >= 0 )
    {
      v66 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &v65,
        L"Windows.Devices.Enumeration.DeviceInformation",
        0x2Eu,
        0x2Du);
      if ( (int)RoGetActivationFactory(v66, &GUID_493b4f34_a84f_45fd_9167_15d1cb1bd1f9, &v54) >= 0
        && WindowsCreateString(
             L"System.Devices.InterfaceClassGuid:=\"{6994ad04-93ef-11d0-a3cc-00a0c9223196}\" AND System.Devices.InterfaceE"
              "nabled:=System.StructuredQueryType.Boolean#True",
             0x98u,
             &string) >= 0 )
      {
        v59 = 0LL;
        v16 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v16 )
        {
          v17 = (HSTRING)Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v16);
          if ( v17 )
          {
            LOBYTE(v18) = 1;
            v59 = v17;
            v56 = v17;
            v3 = v17;
            if ( (int)Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
                        v17,
                        0LL,
                        v62,
                        v18) >= 0
              && (int)Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::As<Windows::Foundation::Collections::IIterable<HSTRING__ *>>(
                        &v56,
                        &v55) >= 0
              && (*(int (__fastcall **)(__int64, HSTRING, __int64, __int64, __int64 *))(*(_QWORD *)v54 + 64LL))(
                   v54,
                   string,
                   v55,
                   1LL,
                   &v53) >= 0
              && (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection *>>(v53) >= 0
              && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 64LL))(v53, &v52) >= 0
              && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v52 + 56LL))(v52, (char *)&v45 + 4) >= 0 )
            {
              v19 = HIDWORD(v45);
              if ( HIDWORD(v45) )
              {
                v20 = 8LL * HIDWORD(v45);
                if ( !is_mul_ok(HIDWORD(v45), 8uLL) )
                  v20 = -1LL;
                v4 = operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
                v51 = v4;
                v21 = 4LL * HIDWORD(v45);
                if ( !is_mul_ok(HIDWORD(v45), 4uLL) )
                  v21 = -1LL;
                v22 = (unsigned int *)operator new[](v21, (const struct std::nothrow_t *)&std::nothrow);
                v5 = v22;
                if ( !v4 || !v22 )
                  goto LABEL_5;
                memset(v4, 0, 8LL * HIDWORD(v45));
                memset(v5, 0, 4LL * HIDWORD(v45));
                v19 = HIDWORD(v45);
              }
              v23 = 0;
              if ( v19 )
              {
                while ( 1 )
                {
                  v24 = v52;
                  *(_QWORD *)cchValueName = 0LL;
                  *(_QWORD *)cbData = 0LL;
                  *(_QWORD *)Type = 0LL;
                  v50 = 0LL;
                  *(_QWORD *)v48 = 0LL;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cbData);
                  if ( (*(int (__fastcall **)(__int64, _QWORD, DWORD *))(*(_QWORD *)v24 + 48LL))(v24, v23, cbData) < 0 )
                    break;
                  v25 = *(_QWORD *)cbData;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(Type);
                  if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v25 + 88LL))(v25, Type) < 0 )
                    break;
                  v26 = *(_QWORD *)Type;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48);
                  if ( (*(int (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v26 + 48LL))(v26, v64, v48) < 0 )
                    break;
                  if ( (*(int (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)v48 + 152LL))(*(_QWORD *)v48, &v56) < 0 )
                    break;
                  v27 = v54;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cchValueName);
                  LODWORD(v27) = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64, DWORD *))(*(_QWORD *)v27 + 56LL))(
                                   v27,
                                   v56,
                                   v55,
                                   3LL,
                                   cchValueName);
                  WindowsDeleteString(v56);
                  if ( (int)v27 < 0 )
                    break;
                  if ( (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformation *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation *>>(*(_QWORD *)cchValueName) < 0 )
                    break;
                  v28 = *(_QWORD *)cchValueName;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cbData);
                  if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v28 + 64LL))(v28, cbData) < 0 )
                    break;
                  v29 = *(_QWORD *)cbData;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(Type);
                  if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v29 + 88LL))(v29, Type) < 0 )
                    break;
                  v30 = *(_QWORD *)Type;
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48);
                  if ( (*(int (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v30 + 48LL))(v30, v62, v48) < 0
                    || (*(int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)v48 + 296LL))(
                         *(_QWORD *)v48,
                         &v5[v23],
                         (__int64)v4 + 8 * v23) < 0 )
                  {
                    break;
                  }
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v50);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(Type);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cbData);
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cchValueName);
                  if ( ++v23 >= HIDWORD(v45) )
                    goto LABEL_56;
                }
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v50);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(Type);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cbData);
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(cchValueName);
              }
              else
              {
LABEL_56:
                while ( 1 )
                {
                  memset(ValueName, 0, sizeof(ValueName));
                  cchValueName[0] = 520;
                  Type[0] = 3;
                  memset(Data, 0, sizeof(Data));
                  cbData[0] = 512;
                  memset(MultiByteStr, 0, 0x208uLL);
                  v31 = RegEnumValueW(hKey, v1, ValueName, cchValueName, 0LL, Type, Data, cbData);
                  v32 = v31 < 0;
                  if ( v31 )
                  {
                    if ( v31 > 0 )
                      v32 = 1;
                    if ( v32 )
                      break;
                  }
                  v48[0] = WideCharToMultiByte(0, 0, ValueName, cchValueName[0], MultiByteStr, 260, 0LL, 0LL);
                  if ( !v48[0] )
                  {
                    LastError = GetLastError();
                    v34 = LastError < 0;
                    if ( LastError > 0 )
                      v34 = 1;
                    if ( v34 )
                      break;
                  }
                  v35 = HIDWORD(v45);
                  for ( i = 0LL; (unsigned int)i < v35; i = (unsigned int)(i + 1) )
                  {
                    v37 = v5[i];
                    v38 = 0;
                    v39 = (HSTRING *)*((_QWORD *)v4 + i);
                    if ( v37 )
                    {
                      do
                      {
                        StringRawBuffer = WindowsGetStringRawBuffer(*v39, 0LL);
                        if ( !(unsigned int)_o__wcsicmp(ValueName, StringRawBuffer)
                          && CRSABCrypt::CheckSignature(
                               v60,
                               (const unsigned __int8 *)MultiByteStr,
                               v48[0],
                               Data,
                               cbData[0]) >= 0 )
                        {
                          v6 = 1;
                          goto LABEL_5;
                        }
                        ++v38;
                        ++v39;
                      }
                      while ( v38 < v37 );
                      v35 = HIDWORD(v45);
                    }
                    v4 = v51;
                  }
                  v4 = v51;
                  ++v1;
                }
                v6 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_5:
  if ( hKey )
    RegCloseKey(hKey);
  if ( string )
    WindowsDeleteString(string);
  v9 = HIDWORD(v45);
  v10 = v51;
  if ( HIDWORD(v45) )
  {
    if ( !v51 )
      goto LABEL_12;
    if ( v5 )
    {
      v41 = 0;
      v42 = v51;
      do
      {
        v43 = (HSTRING *)v42[v41];
        if ( v5[v41] )
        {
          v44 = v5[v41];
          do
          {
            if ( *v43 )
              WindowsDeleteString(*v43);
            ++v43;
            --v44;
          }
          while ( v44 );
          v9 = HIDWORD(v45);
        }
        ++v41;
      }
      while ( v41 < v9 );
      v3 = v59;
      v10 = v51;
    }
  }
  if ( v10 )
    operator delete(v10);
LABEL_12:
  if ( v5 )
    operator delete(v5);
  v11 = v55;
  v64 = 0LL;
  v62 = 0LL;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IVector<HSTRING__ *>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v3);
  v12 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v54;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v6;
}
