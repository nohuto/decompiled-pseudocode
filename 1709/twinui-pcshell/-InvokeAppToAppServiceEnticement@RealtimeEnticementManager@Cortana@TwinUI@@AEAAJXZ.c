/*
 * XREFs of ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1800DCC84
 * Callers:
 *     ?s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800DD230 (-s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800B346C (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x1800DD444 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator().c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800DD4C0 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationMo.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800DD724 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Wi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TwinUI::Cortana::RealtimeEnticementManager::InvokeAppToAppServiceEnticement(
        TwinUI::Cortana::RealtimeEnticementManager *this)
{
  HRESULT v2; // eax
  int v3; // edi
  __int64 v4; // rbx
  HRESULT v5; // eax
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  LSTATUS ValueW; // eax
  signed int v10; // ecx
  __int64 v11; // rbx
  HRESULT v12; // eax
  int v13; // eax
  __int64 v14; // rbx
  HRESULT v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  const WCHAR *v20; // rax
  __int64 v21; // rbx
  HRESULT StringReference; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // [rsp+48h] [rbp-79h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-71h] BYREF
  int pvData; // [rsp+58h] [rbp-69h] BYREF
  int v36; // [rsp+5Ch] [rbp-65h] BYREF
  __int64 v37; // [rsp+60h] [rbp-61h] BYREF
  __int64 v38; // [rsp+68h] [rbp-59h] BYREF
  __int64 v39; // [rsp+70h] [rbp-51h] BYREF
  int v40; // [rsp+78h] [rbp-49h] BYREF
  const WCHAR *v41; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v42[2]; // [rsp+88h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp-29h] BYREF
  HSTRING string; // [rsp+B0h] [rbp-11h] BYREF
  HSTRING v45; // [rsp+B8h] [rbp-9h] BYREF
  HSTRING_HEADER v46; // [rsp+C0h] [rbp-1h] BYREF
  _BYTE v47[32]; // [rsp+D8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v42[1] = -2LL;
  v33 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v33 = 0LL;
  v3 = RoActivateInstance(string, pcbData);
  if ( v3 < 0
    || (*(_QWORD *)&GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
     || *(_QWORD *)GUID_9dd474a2_871f_4d52_89a9_9e090531bd27.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
      ? (v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pcbData)(
                *(_QWORD *)pcbData,
                &GUID_9dd474a2_871f_4d52_89a9_9e090531bd27,
                &v33),
         (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pcbData + 16LL))(*(_QWORD *)pcbData),
         v4 = v33)
      : (v4 = *(_QWORD *)pcbData, v33 = *(_QWORD *)pcbData),
        v3 < 0) )
  {
    v7 = (unsigned int)v3;
    v8 = 59LL;
    goto LABEL_68;
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Cortana-AppToApp-CortanaEnticement", 0x22u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v4 + 56LL))(v4, string);
  v3 = v6;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 60LL;
LABEL_68:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
      (const char *)v7);
    goto LABEL_69;
  }
  pvData = 0;
  pcbData[0] = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
             L"PrereleaseExperience",
             0x10u,
             0LL,
             &pvData,
             pcbData);
  v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v10 = ValueW;
  if ( v10 >= 0 && pvData )
  {
    v11 = v33;
    string = 0LL;
    v12 = WindowsCreateStringReference(L"Microsoft.Cortana_8wekyb3d8bbwe", 0x1Fu, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v11 + 72LL))(v11, string);
    v3 = v13;
    if ( v13 < 0 )
    {
      v7 = (unsigned int)v13;
      v8 = 65LL;
      goto LABEL_68;
    }
  }
  else
  {
    v14 = v33;
    string = 0LL;
    v15 = WindowsCreateStringReference(L"Microsoft.Windows.Cortana_cw5n1h2txyewy", 0x27u, &hstringHeader, &string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v14 + 72LL))(v14, string);
    v3 = v16;
    if ( v16 < 0 )
    {
      v7 = (unsigned int)v16;
      v8 = 69LL;
      goto LABEL_68;
    }
  }
  v39 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 80LL))(v33, &v39);
  v3 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x49,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_65;
  }
  hstringHeader.Reserved.Reserved1 = &v33;
  *(_WORD *)&hstringHeader.Reserved.Reserved2[8] = 258;
  v18 = v39;
  v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus> *>(v39);
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 64LL))(v18, &v40);
  if ( v3 >= 0 )
  {
    if ( v40 )
    {
      v3 = -2147023660;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)0x800704D4LL);
      goto LABEL_64;
    }
    v37 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &v46, &v45) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v19 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)v45,
            &v37);
    v3 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x58,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v19);
LABEL_62:
      v29 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_64;
    }
    *(_QWORD *)pcbData = v37;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    v20 = (const WCHAR *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    v41 = v20;
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v47, &v41);
    *(_QWORD *)&v46.Reserved.Reserved2[16] = 0LL;
    StringReference = WindowsCreateStringReference(
                        L"Enticement",
                        0xAu,
                        (HSTRING_HEADER *)&v45,
                        (HSTRING *)&v46.Reserved.Reserved2[16]);
    if ( StringReference < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    v23 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)pcbData,
            *(HSTRING *)&v46.Reserved.Reserved2[16],
            *(HSTRING *)(v21 + 24));
    v3 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x5A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v23);
LABEL_60:
      if ( *(_QWORD *)pcbData )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pcbData + 16LL))(*(_QWORD *)pcbData);
      goto LABEL_62;
    }
    v38 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v33 + 88LL))(v33, v37, &v38);
    v3 = v24;
    if ( v24 >= 0 )
    {
      v26 = v38;
      v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *>(v38);
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 64LL))(v26, v42);
      if ( v3 < 0 )
      {
        v27 = (unsigned int)v3;
        v25 = 96LL;
LABEL_54:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v25,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
          (const char *)v27);
        goto LABEL_58;
      }
      v36 = 3;
      v24 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v42[0] + 56LL))(v42[0], &v36);
      v3 = v24;
      if ( v24 >= 0 )
      {
        if ( v36 )
        {
          v3 = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x64,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
            (const char *)0x80004005LL);
        }
        else
        {
          v3 = 0;
        }
LABEL_58:
        v28 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        goto LABEL_60;
      }
      v25 = 99LL;
    }
    else
    {
      v25 = 93LL;
    }
    v27 = (unsigned int)v24;
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x54,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_64:
  wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()(&hstringHeader);
LABEL_65:
  v30 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_69:
  v31 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v3;
}
