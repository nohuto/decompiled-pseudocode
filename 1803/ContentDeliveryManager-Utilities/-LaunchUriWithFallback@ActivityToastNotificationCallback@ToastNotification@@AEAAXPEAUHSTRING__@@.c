/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x18004C7EC
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004EFD0 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004F090 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004F18C (--$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherStati.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004F24C (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004F2A8 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x1800505C0 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        HSTRING a2,
        HSTRING a3)
{
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  PCWSTR v11; // rcx
  __int64 v12; // rdi
  HRESULT v13; // eax
  char v14; // bl
  HSTRING v15; // rcx
  __int64 v16; // rcx
  char v17; // [rsp+28h] [rbp-29h] BYREF
  char v18; // [rsp+29h] [rbp-28h] BYREF
  bool v19[6]; // [rsp+2Ah] [rbp-27h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-21h] BYREF
  HSTRING v21; // [rsp+38h] [rbp-19h] BYREF
  __int64 v22; // [rsp+40h] [rbp-11h] BYREF
  __int64 v23; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h] BYREF
  __int64 v25; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v26[1] = -2LL;
  LODWORD(StringRawBuffer) = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(&v25);
  v23 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, a2, &v23);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_31;
  }
  wil::ActivateInstance<Windows::System::ILauncherOptions>(&v24);
  if ( !WindowsGetStringLen(a3) )
    goto LABEL_7;
  StringRawBuffer = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, PCWSTR *))(*(_QWORD *)v25 + 48LL))(v25, a3, &StringRawBuffer);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xF8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v24 + 128LL))(v24, StringRawBuffer);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_33;
  }
  if ( StringRawBuffer )
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
LABEL_7:
  wil::GetActivationFactory<Windows::System::ILauncherStatics>(v26);
  StringRawBuffer = 0LL;
  v9 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(v26[0], v23, v24, &StringRawBuffer);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v9);
    goto LABEL_34;
  }
  wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(&v17, StringRawBuffer);
  v11 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v22 = 0LL;
  v21 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 120LL))(v23, &v22) < 0 )
    goto LABEL_15;
  v12 = v22;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"mmx-scid", 8u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
LABEL_34:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    JUMPOUT(0x18004CADELL);
  }
  v14 = 1;
  LODWORD(StringRawBuffer) = 1;
  WindowsDeleteString(v21);
  v21 = 0LL;
  if ( (*(int (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v12 + 48LL))(v12, string, &v21) < 0 )
  {
LABEL_15:
    v15 = v21;
    goto LABEL_16;
  }
  v15 = v21;
  if ( !v21 )
LABEL_16:
    v14 = 0;
  if ( v14 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v15, 0LL);
    v18 = 0;
    v19[0] = v17 != 0;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
      v19,
      &v18,
      &StringRawBuffer);
    v15 = v21;
  }
  WindowsDeleteString(v15);
  v21 = 0LL;
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
}
