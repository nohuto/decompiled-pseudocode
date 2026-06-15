/*
 * XREFs of ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180017334
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180026B40 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800DBC00 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$As@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010E228 (--$As@U-$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@-$ComPtr@V-$AgileVector@PEAU.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformation@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18010E9A8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformation@Enumeration@Device.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVDeviceInformationCollection@Enumeration@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18010EB24 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVDeviceInformationCollection@Enumerat.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x18010F170 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z @ 0x18010FD64 (-CheckSignature@CRSABCrypt@@QEAAJPEBEK0K@Z.c)
 *     ?Initialize@CRSABCrypt@@QEAAJXZ @ 0x180110CB8 (-Initialize@CRSABCrypt@@QEAAJXZ.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180110E08 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180110FAC (-InternalRelease@-$ComPtr@V-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING_.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801118D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_1801118D0.c)
 */

char __fastcall DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent(DolbyOEMLicenseCheck *this)
{
  __int64 v2; // rbx
  HRESULT v3; // eax
  HRESULT v4; // eax
  void *v5; // r13
  unsigned int *v6; // r15
  char v7; // r12
  LSTATUS v8; // eax
  bool v9; // sf
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int *v26; // rax
  unsigned int v27; // esi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  int v35; // edi
  DWORD i; // edi
  LSTATUS v37; // eax
  bool v38; // sf
  signed int LastError; // eax
  bool v40; // sf
  unsigned int v41; // ecx
  unsigned int j; // edi
  unsigned int v43; // esi
  unsigned int v44; // r12d
  HSTRING *v45; // r14
  PCWSTR StringRawBuffer; // rax
  unsigned int v47; // edi
  HSTRING *v48; // rsi
  __int64 v49; // r14
  __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v51[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  DWORD Type[2]; // [rsp+60h] [rbp-A8h] BYREF
  DWORD cbData[2]; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cchValueName[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+80h] [rbp-88h] BYREF
  __int64 v58; // [rsp+88h] [rbp-80h] BYREF
  __int64 v59; // [rsp+90h] [rbp-78h] BYREF
  HKEY hKey; // [rsp+98h] [rbp-70h] BYREF
  HSTRING v61; // [rsp+A0h] [rbp-68h] BYREF
  HSTRING v62; // [rsp+A8h] [rbp-60h] BYREF
  CRSABCrypt *v63; // [rsp+B0h] [rbp-58h]
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER v66; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v67; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING_HEADER v68; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v69; // [rsp+110h] [rbp+8h]
  BYTE Data[512]; // [rsp+118h] [rbp+10h] BYREF
  CHAR MultiByteStr[528]; // [rsp+318h] [rbp+210h] BYREF
  WCHAR ValueName[520]; // [rsp+528h] [rbp+420h] BYREF

  v63 = this;
  v58 = 0LL;
  v2 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  *(_QWORD *)v51 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(L"System.Devices.HardwareIds", 0x1Au, &hstringHeader, &string);
  if ( v3 < 0 )
  {
    RaiseException(v3, 1u, 0, 0LL);
    JUMPOUT(0x1800763C6LL);
  }
  v67 = 0LL;
  v4 = WindowsCreateStringReference(L"System.Devices.DeviceInstanceId", 0x1Fu, &v66, &v67);
  if ( v4 < 0 )
  {
    RaiseException(v4, 1u, 0, 0LL);
    JUMPOUT(0x1800763D6LL);
  }
  HIDWORD(v50) = 0;
  hKey = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Dolby\\AtmosOEM", 0, 1u, &hKey);
  v9 = v8 < 0;
  if ( !v8 )
    goto LABEL_44;
  if ( v8 > 0 )
    v9 = 1;
  if ( !v9 )
  {
LABEL_44:
    if ( (int)CRSABCrypt::Initialize(this) >= 0 )
    {
      v69 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &v68,
        L"Windows.Devices.Enumeration.DeviceInformation",
        0x2Eu,
        0x2Du);
      v16 = v69;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
      if ( (int)RoGetActivationFactory(v16, &GUID_493b4f34_a84f_45fd_9167_15d1cb1bd1f9, &v58) >= 0
        && WindowsCreateString(
             L"System.Devices.InterfaceClassGuid:=\"{6994ad04-93ef-11d0-a3cc-00a0c9223196}\" AND System.Devices.InterfaceE"
              "nabled:=System.StructuredQueryType.Boolean#True",
             0x98u,
             &v61) >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::InternalRelease(v51);
        *(_QWORD *)v51 = 0LL;
        v17 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19 = 0LL;
        if ( v17 )
          v19 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v17);
        v20 = v19;
        if ( v19 )
        {
          v2 = v19;
          v20 = 0LL;
          *(_QWORD *)v51 = v19;
        }
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v19 )
        {
          LOBYTE(v18) = 1;
          if ( (int)Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
                      v2,
                      0LL,
                      string,
                      v18) >= 0
            && (int)Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>>::As<Windows::Foundation::Collections::IIterable<HSTRING__ *>>(
                      v51,
                      &v59) >= 0 )
          {
            v21 = v58;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v57);
            if ( (*(int (__fastcall **)(__int64, HSTRING, __int64, __int64, __int64 *))(*(_QWORD *)v21 + 64LL))(
                   v21,
                   v61,
                   v59,
                   1LL,
                   &v57) >= 0
              && (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformationCollection *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection *>>(v57) >= 0 )
            {
              v22 = v57;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v56);
              if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 64LL))(v22, &v56) >= 0
                && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v56 + 56LL))(v56, (char *)&v50 + 4) >= 0 )
              {
                v23 = HIDWORD(v50);
                if ( HIDWORD(v50) )
                {
                  v24 = 8LL * HIDWORD(v50);
                  if ( !is_mul_ok(HIDWORD(v50), 8uLL) )
                    v24 = -1LL;
                  v5 = operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
                  v25 = 4LL * HIDWORD(v50);
                  if ( !is_mul_ok(HIDWORD(v50), 4uLL) )
                    v25 = -1LL;
                  v26 = (unsigned int *)operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
                  v6 = v26;
                  if ( !v5 || !v26 )
                    goto LABEL_7;
                  memset_0(v5, 0, 8LL * HIDWORD(v50));
                  memset_0(v6, 0, 4LL * HIDWORD(v50));
                  v23 = HIDWORD(v50);
                }
                v27 = 0;
                if ( v23 )
                {
                  while ( 1 )
                  {
                    v28 = v56;
                    *(_QWORD *)cbData = 0LL;
                    v52 = 0LL;
                    *(_QWORD *)Type = 0LL;
                    *(_QWORD *)cchValueName = 0LL;
                    *(_QWORD *)v51 = 0LL;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, v27, &v52) < 0 )
                      break;
                    v29 = v52;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)Type);
                    if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v29 + 88LL))(v29, Type) < 0 )
                      break;
                    v30 = *(_QWORD *)Type;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v51);
                    if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v30 + 48LL))(
                           v30,
                           v67,
                           v51) < 0 )
                      break;
                    if ( (*(int (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)v51 + 152LL))(*(_QWORD *)v51, &v62) < 0 )
                      break;
                    v31 = v58;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)cbData);
                    LODWORD(v31) = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64, DWORD *))(*(_QWORD *)v31 + 56LL))(
                                     v31,
                                     v62,
                                     v59,
                                     3LL,
                                     cbData);
                    WindowsDeleteString(v62);
                    if ( (int)v31 < 0 )
                      break;
                    if ( (int)WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Devices::Enumeration::DeviceInformation *>,Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation *>>(*(_QWORD *)cbData) < 0 )
                      break;
                    v32 = *(_QWORD *)cbData;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 64LL))(v32, &v52) < 0 )
                      break;
                    v33 = v52;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)Type);
                    if ( (*(int (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v33 + 88LL))(v33, Type) < 0 )
                      break;
                    v34 = *(_QWORD *)Type;
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v51);
                    if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v34 + 48LL))(
                           v34,
                           string,
                           v51) < 0 )
                      break;
                    v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)v51 + 296LL))(
                            *(_QWORD *)v51,
                            &v6[v27],
                            (__int64)v5 + 8 * v27);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v51);
                    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(cchValueName);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)Type);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)cbData);
                    if ( v35 < 0 )
                      goto LABEL_7;
                    if ( ++v27 >= HIDWORD(v50) )
                      goto LABEL_65;
                  }
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v51);
                  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(cchValueName);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)Type);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v52);
                  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)cbData);
                }
                else
                {
LABEL_65:
                  for ( i = 0; ; i = v52 + 1 )
                  {
                    LODWORD(v52) = i;
                    memset_0(ValueName, 0, sizeof(ValueName));
                    cchValueName[0] = 520;
                    Type[0] = 3;
                    memset_0(Data, 0, sizeof(Data));
                    cbData[0] = 512;
                    memset_0(MultiByteStr, 0, 0x208uLL);
                    v37 = RegEnumValueW(hKey, i, ValueName, cchValueName, 0LL, Type, Data, cbData);
                    v38 = v37 < 0;
                    if ( v37 )
                    {
                      if ( v37 > 0 )
                        v38 = 1;
                      if ( v38 )
                        break;
                    }
                    v51[0] = WideCharToMultiByte(0, 0, ValueName, cchValueName[0], MultiByteStr, 260, 0LL, 0LL);
                    if ( !v51[0] )
                    {
                      LastError = GetLastError();
                      v40 = LastError < 0;
                      if ( LastError > 0 )
                        v40 = 1;
                      if ( v40 )
                        break;
                    }
                    v41 = HIDWORD(v50);
                    for ( j = 0; j < v41; ++j )
                    {
                      v43 = 0;
                      v44 = v6[j];
                      v45 = (HSTRING *)*((_QWORD *)v5 + j);
                      if ( v44 )
                      {
                        do
                        {
                          StringRawBuffer = WindowsGetStringRawBuffer(*v45, 0LL);
                          if ( !(unsigned int)_o__wcsicmp(ValueName, StringRawBuffer)
                            && CRSABCrypt::CheckSignature(
                                 v63,
                                 (const unsigned __int8 *)MultiByteStr,
                                 v51[0],
                                 Data,
                                 cbData[0]) >= 0 )
                          {
                            v7 = 1;
                            goto LABEL_7;
                          }
                          ++v43;
                          ++v45;
                        }
                        while ( v43 < v44 );
                        v41 = HIDWORD(v50);
                      }
                    }
                  }
                  v7 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  if ( v61 )
    WindowsDeleteString(v61);
  v10 = HIDWORD(v50);
  if ( HIDWORD(v50) )
  {
    if ( !v5 )
      goto LABEL_14;
    if ( v6 )
    {
      v47 = 0;
      do
      {
        v48 = (HSTRING *)*((_QWORD *)v5 + v47);
        if ( v6[v47] )
        {
          v49 = v6[v47];
          do
          {
            if ( *v48 )
              WindowsDeleteString(*v48);
            ++v48;
            --v49;
          }
          while ( v49 );
          v10 = HIDWORD(v50);
        }
        ++v47;
      }
      while ( v47 < v10 );
    }
  }
  if ( v5 )
    operator delete(v5);
LABEL_14:
  if ( v6 )
    operator delete(v6);
  v11 = v59;
  v67 = 0LL;
  string = 0LL;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::Release(v2);
  v12 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v7;
}
