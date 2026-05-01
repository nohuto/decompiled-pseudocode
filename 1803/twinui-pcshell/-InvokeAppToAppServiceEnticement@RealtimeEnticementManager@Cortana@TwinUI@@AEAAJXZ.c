/*
 * XREFs of ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x180189658
 * Callers:
 *     ?s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180189E20 (-s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANC.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180188FC4 (--$ActivateInstance@V-$ComPtr@UIAppServiceConnection@AppService@ApplicationModel@Windows@@@WRL@M.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180189170 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Wi.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180189294 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationMo.c)
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x180189558 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator().c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TwinUI::Cortana::RealtimeEnticementManager::InvokeAppToAppServiceEnticement(
        TwinUI::Cortana::RealtimeEnticementManager *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  DWORD v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  const WCHAR *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  DWORD v21; // edx
  int v22; // r8d
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v28; // [rsp+28h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-71h] BYREF
  int v30; // [rsp+34h] [rbp-6Dh] BYREF
  __int64 v31; // [rsp+38h] [rbp-69h] BYREF
  __int64 v32; // [rsp+40h] [rbp-61h] BYREF
  __int64 v33; // [rsp+48h] [rbp-59h] BYREF
  int v34; // [rsp+50h] [rbp-51h] BYREF
  __int64 v35; // [rsp+58h] [rbp-49h] BYREF
  const WCHAR *v36; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v37[2]; // [rsp+68h] [rbp-39h] BYREF
  HSTRING_HEADER v38; // [rsp+78h] [rbp-29h] BYREF
  __int64 v39; // [rsp+90h] [rbp-11h]
  HSTRING string; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-1h] BYREF
  _BYTE v42[32]; // [rsp+B8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v37[1] = -2LL;
  v28 = 0LL;
  v39 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v38,
    L"Windows.ApplicationModel.AppService.AppServiceConnection",
    0x39u,
    0x38u);
  v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceConnection>>(
         v39,
         &v28);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v28;
    v39 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v38,
      L"Cortana-AppToApp-CortanaEnticement",
      0x23u,
      0x22u);
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, v39);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 60LL;
      goto LABEL_11;
    }
    v29 = 0;
    if ( SHRegGetDWORD(
           HKEY_LOCAL_MACHINE,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
           L"PrereleaseExperience",
           &v29) >= 0
      && v29 )
    {
      v6 = v28;
      v39 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &v38,
        L"Microsoft.Cortana_8wekyb3d8bbwe",
        0x20u,
        0x1Fu);
      v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, v39);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 65LL;
        goto LABEL_11;
      }
    }
    else
    {
      v7 = v28;
      v39 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &v38,
        L"Microsoft.Windows.Cortana_cw5n1h2txyewy",
        0x28u,
        0x27u);
      v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 72LL))(v7, v39);
      v3 = v2;
      if ( v2 < 0 )
      {
        v4 = 69LL;
        goto LABEL_11;
      }
    }
    v33 = 0LL;
    v8 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v33);
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_46:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      goto LABEL_47;
    }
    v38.Reserved.Reserved1 = &v28;
    *(_WORD *)&v38.Reserved.Reserved2[8] = 258;
    v12 = v33;
    v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::AppService::AppServiceConnectionStatus> *>(
           v33,
           v10,
           v11);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 64LL))(v12, &v34);
    if ( v3 < 0 )
    {
      v13 = 84LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_45:
      wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()((__int64)&v38);
      goto LABEL_46;
    }
    if ( v34 )
    {
      v3 = -2147023660;
      v13 = 85LL;
      goto LABEL_20;
    }
    v32 = 0LL;
    if ( WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string) < 0 )
      RaiseException(0xC000000D, 1u, 0, 0LL);
    v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            &v32);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_44:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_45;
    }
    v35 = v32;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v35);
    v15 = (const WCHAR *)((char *)this + 24);
    if ( *((_QWORD *)this + 6) >= 8uLL )
      v15 = *(const WCHAR **)v15;
    v36 = v15;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v42, &v36);
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference((HSTRING_HEADER *)&string, L"Enticement", 0xBu, 0xAu);
    v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v35,
            *(HSTRING *)&hstringHeader.Reserved.Reserved2[16],
            v17,
            *(_QWORD *)(v16 + 24));
    v3 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_43:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      goto LABEL_44;
    }
    v31 = 0LL;
    v19 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 88LL))(v19, v32, &v31);
    v3 = v20;
    if ( v20 < 0 )
    {
      v23 = (unsigned int)v20;
      v24 = 93LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)v23);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
      goto LABEL_43;
    }
    v25 = v31;
    v3 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *>(
           v31,
           v21,
           v22);
    if ( v3 >= 0 )
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 64LL))(v25, v37);
    if ( v3 >= 0 )
    {
      v30 = 3;
      v26 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v37[0] + 56LL))(v37[0], &v30);
      v3 = v26;
      if ( v26 < 0 )
      {
        v23 = (unsigned int)v26;
        v24 = 99LL;
        goto LABEL_40;
      }
      if ( !v30 )
      {
        v3 = 0;
        goto LABEL_42;
      }
      v3 = -2147467259;
      v24 = 100LL;
    }
    else
    {
      v24 = 96LL;
    }
    v23 = (unsigned int)v3;
    goto LABEL_40;
  }
  v4 = 59LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
    (const char *)(unsigned int)v2);
LABEL_47:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return (unsigned int)v3;
}
