/*
 * XREFs of ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x18007CC18
 * Callers:
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x18007CF68 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x18007D204 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180018390 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_InstallAttribution@@@wil@@CA.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x18007C6A0 (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x18007E4A8 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800C0F2C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C0F98 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=2
__int64 __fastcall CreativeFramework::Actions::GetEntitlementForRecord(
        _QWORD *a1,
        WCHAR *a2,
        WCHAR *a3,
        const WCHAR **a4,
        const WCHAR **a5,
        char a6)
{
  CreativeFramework::Actions *v10; // rcx
  char v11; // cl
  __int64 v12; // r13
  HRESULT v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // r13
  __int64 v19; // r12
  HRESULT v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 result; // rax
  int v26; // [rsp+28h] [rbp-140h]
  char v27; // [rsp+40h] [rbp-128h] BYREF
  __int64 v28; // [rsp+48h] [rbp-120h] BYREF
  const WCHAR *v29[3]; // [rsp+50h] [rbp-118h] BYREF
  const WCHAR **v30; // [rsp+68h] [rbp-100h]
  __int64 v31; // [rsp+70h] [rbp-F8h]
  _QWORD *v32; // [rsp+78h] [rbp-F0h]
  __int64 v33; // [rsp+80h] [rbp-E8h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-E0h] BYREF
  HSTRING string; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v36[32]; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v37[32]; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v38[32]; // [rsp+E8h] [rbp-80h] BYREF
  _BYTE v39[32]; // [rsp+108h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v33 = -2LL;
  v32 = a1;
  v29[2] = a2;
  v29[1] = a3;
  v30 = a5;
  if ( a6 )
    goto LABEL_7;
  if ( dword_18017C308 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18017C308);
    if ( dword_18017C308 == -1 )
    {
      byte_18017C30C = CreativeFramework::Actions::IsMsaConnected(v10);
      Init_thread_footer(&dword_18017C308);
    }
  }
  if ( !byte_18017C30C )
LABEL_7:
    v11 = 1;
  else
    v11 = 0;
  v27 = v11;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_InstallAttribution>::GetCachedFeatureEnabledState();
    v11 = v27;
  }
  v29[0] = *a4;
  if ( v11 )
    goto LABEL_14;
  v12 = *a1;
  v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, v29);
  v31 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, a5);
  string = 0LL;
  v13 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_20;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, (const WCHAR **)a3);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, (const WCHAR **)a2);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HSTRING, _QWORD, char, _QWORD))(*(_QWORD *)v12 + 80LL))(
          v12,
          *(_QWORD *)(v15 + 24),
          *(_QWORD *)(v14 + 24),
          string,
          *(_QWORD *)(v31 + 24),
          v27,
          *(_QWORD *)(v28 + 24));
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x79,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_21;
  }
  if ( !v27 )
    goto LABEL_16;
LABEL_14:
  v18 = *a1;
  v30 = (const WCHAR **)Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, v29);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, a5);
  string = 0LL;
  v20 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
  if ( v20 < 0 )
  {
LABEL_21:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    goto LABEL_22;
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, (const WCHAR **)a3);
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, (const WCHAR **)a2);
  LOBYTE(v26) = v27;
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HSTRING, _QWORD, int, const WCHAR *))(*(_QWORD *)v18 + 80LL))(
          v18,
          *(_QWORD *)(v22 + 24),
          *(_QWORD *)(v21 + 24),
          string,
          *(_QWORD *)(v19 + 24),
          v26,
          v30[3]);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x8F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v23);
    JUMPOUT(0x18007CF64LL);
  }
LABEL_16:
  LODWORD(v28) = 0;
  result = ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
             (_DWORD)a2,
             (_DWORD)a3,
             (unsigned int)&v27,
             (unsigned int)&v28,
             (__int64)v29);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
