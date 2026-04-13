/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x180072450
 * Callers:
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z @ 0x1800726A4 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z @ 0x18007291C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180071F00 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI@Z @ 0x1800739F4 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NI@ContentDeliveryManagerTelemetry@Back.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800B4038 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800B4098 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        __int64 **a1,
        const WCHAR **a2,
        const WCHAR **a3,
        char a4)
{
  const WCHAR **v4; // r15
  const WCHAR **v5; // r14
  __int64 **v6; // rsi
  int v7; // ecx
  CreativeFramework::Actions *v8; // rcx
  __int64 *v9; // r12
  HRESULT v10; // eax
  __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // r8d
  wil *v16; // rcx
  __int64 *v17; // r12
  HRESULT v18; // eax
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r8d
  wil *v24; // rcx
  __int64 result; // rax
  _BYTE v26[32]; // [rsp+0h] [rbp-E8h] BYREF
  int v27; // [rsp+20h] [rbp-C8h]
  int v28; // [rsp+30h] [rbp-B8h] BYREF
  int v29; // [rsp+34h] [rbp-B4h] BYREF
  const WCHAR **v30; // [rsp+38h] [rbp-B0h]
  const WCHAR **v31; // [rsp+40h] [rbp-A8h]
  __int64 **v32; // [rsp+48h] [rbp-A0h]
  __int64 v33; // [rsp+50h] [rbp-98h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-90h] BYREF
  HSTRING string; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v36[32]; // [rsp+78h] [rbp-70h] BYREF
  _BYTE v37[32]; // [rsp+98h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v33 = -2LL;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v32 = a1;
  v31 = a2;
  v30 = a3;
  if ( a4 )
    goto LABEL_13;
  v7 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
  if ( dword_18015DF08 > v7 )
  {
    Init_thread_header(&dword_18015DF08);
    if ( dword_18015DF08 == -1 )
    {
      byte_18015DF0C = CreativeFramework::Actions::IsMsaConnected(v8);
      Init_thread_footer(&dword_18015DF08);
    }
  }
  if ( !byte_18015DF0C )
  {
LABEL_13:
    LOBYTE(v28) = 1;
LABEL_26:
    try
    {
      v17 = *v6;
      string = 0LL;
      v18 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
      if ( v18 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, v4);
      v20 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, v5) + 24);
      v21 = *v17;
      LOBYTE(v27) = v28;
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, HSTRING, int))(v21 + 80))(
              v17,
              v20,
              *(_QWORD *)(v19 + 24),
              string,
              v27);
      v24 = retaddr;
      if ( v22 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x87,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v22);
    }
    catch ( ... )
    {
      v29 = wil::ResultFromCaughtException(v24, v26, v23);
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
        v31,
        v30,
        &v28,
        &v29);
      throw;
    }
    goto LABEL_18;
  }
  LOBYTE(v28) = 0;
  try
  {
    v9 = *v6;
    string = 0LL;
    v10 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, v4);
    v12 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, v5) + 24);
    v13 = *v9;
    LOBYTE(v27) = v28;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, HSTRING, int))(v13 + 80))(
            v9,
            v12,
            *(_QWORD *)(v11 + 24),
            string,
            v27);
    v16 = retaddr;
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v14);
  }
  catch ( ... )
  {
    v29 = wil::ResultFromCaughtException(v16, v26, v15);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
      v31,
      v30,
      &v28,
      &v29);
    LOBYTE(v28) = 1;
    v6 = v32;
    v5 = v31;
    v4 = v30;
  }
  if ( (_BYTE)v28 )
    goto LABEL_26;
LABEL_18:
  v29 = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int>(
             v5,
             v4,
             &v28,
             &v29);
  if ( *v6 )
    return (*(__int64 (__fastcall **)(__int64 *))(**v6 + 16))(*v6);
  return result;
}
