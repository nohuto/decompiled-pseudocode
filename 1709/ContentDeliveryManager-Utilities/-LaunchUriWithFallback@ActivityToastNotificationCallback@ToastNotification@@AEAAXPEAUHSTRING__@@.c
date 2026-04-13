/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x180048B08
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4 (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B3CC (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004B48C (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004B4E0 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x18004C5B0 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        HSTRING a2,
        HSTRING a3)
{
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rcx
  int ActivationFactory; // eax
  int v16; // eax
  char v17; // bl
  const WCHAR *v18; // rcx
  __int64 v19; // rsi
  HRESULT v20; // eax
  HSTRING v21; // rcx
  char v22; // al
  __int64 v23; // rcx
  char v24; // [rsp+28h] [rbp-39h] BYREF
  bool v25[7]; // [rsp+29h] [rbp-38h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-29h]
  HSTRING v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1h] BYREF
  __int64 v33; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+98h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v34[1] = -2LL;
  v27 = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(v34);
  v32 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64 *))(*(_QWORD *)v34[0] + 48LL))(v34[0], a2, &v32);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  StringRawBuffer = L"Windows.System.LauncherOptions";
  v29 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &StringRawBuffer);
  v7 = v29;
  v29 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = RoActivateInstance(*(_QWORD *)(v6 + 24), &v29);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v8);
  string = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v29)(
         v29,
         &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
         &v33);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v27 = 6;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( WindowsGetStringLen(a3) )
  {
    StringRawBuffer = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, PCWSTR *))(*(_QWORD *)v34[0] + 48LL))(
            v34[0],
            a3,
            &StringRawBuffer);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = (*(__int64 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v33 + 128LL))(v33, StringRawBuffer);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v11);
    if ( StringRawBuffer )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
  }
  StringRawBuffer = L"Windows.System.Launcher";
  v30 = 0LL;
  v12 = 14;
  v27 = 14;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &StringRawBuffer);
  v14 = v30;
  v30 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v13 + 24), &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v30);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x65E,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  StringRawBuffer = 0LL;
  v16 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(v30, v32, v33, &StringRawBuffer);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x650,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(StringRawBuffer);
  v18 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v31 = 0LL;
  v28 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 120LL))(v32, &v31) < 0 )
    goto LABEL_32;
  v19 = v31;
  string = 0LL;
  v20 = WindowsCreateStringReference(L"mmx-scid", 8u, &hstringHeader, &string);
  if ( v20 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
  v12 = 15;
  v27 = 15;
  WindowsDeleteString(v28);
  v28 = 0LL;
  if ( (*(int (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v19 + 48LL))(v19, string, &v28) < 0 )
  {
LABEL_32:
    v21 = v28;
  }
  else
  {
    v21 = v28;
    if ( v28 )
    {
      v22 = 1;
      goto LABEL_34;
    }
  }
  v22 = 0;
LABEL_34:
  if ( (v12 & 1) != 0 )
    v27 = v12 & 0xFFFFFFFE;
  if ( v22 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v21, 0LL);
    v24 = 0;
    v25[0] = v17 != 0;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
      v25,
      &v24,
      &StringRawBuffer);
    v21 = v28;
  }
  WindowsDeleteString(v21);
  v28 = 0LL;
  v23 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v34[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v34[0] + 16LL))(v34[0]);
}
