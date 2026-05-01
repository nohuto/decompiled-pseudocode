/*
 * XREFs of ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD7C0
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD218 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1800F892C (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 *     ?_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FDBCC (-_IsPropertySetCallerProcessExplorer@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@F.c)
 *     ?_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1800FDC90 (-_IsPropertySetActivationSourceProcessIdForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1800FDE28 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@@Z @ 0x180103334 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@@HolographicPositionerTelemetry@@SAX.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1801033D0 (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall HolographicPositioner::_IsPropertySetHeuristicHolographic(
        HolographicPositioner *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  HWND ForegroundWindow; // rax
  HolographicPositioner *v5; // rcx
  HWND v6; // r15
  HRESULT v7; // eax
  HSTRING v8; // r14
  HolographicPositioner *v9; // rcx
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  HolographicPositioner *v14; // rcx
  HRESULT v16; // eax
  HSTRING v17; // rsi
  int v18; // eax
  int v19; // eax
  char v20; // al
  BOOL v22; // edi
  int v23; // eax
  int v24; // ebx
  __int64 v25; // rdx
  char v26[8]; // [rsp+20h] [rbp-50h] BYREF
  HolographicPositioner *v27; // [rsp+28h] [rbp-48h] BYREF
  int v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v30; // [rsp+38h] [rbp-38h]
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v30 = -2LL;
  ForegroundWindow = GetForegroundWindow();
  v6 = ForegroundWindow;
  if ( !ForegroundWindow
    || (int)Windows::Internal::Shell::Holographic::GetWindowDisplayContext(
              (unsigned int)ForegroundWindow,
              0,
              (__int64)&v29) < 0
    || v29 != 1 )
  {
    goto LABEL_55;
  }
  v31 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
  string = 0LL;
  v7 = WindowsCreateStringReference(L"ViewSizePreferences.SourceAumid", 0x1Fu, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = string;
  v9 = 0LL;
  v27 = 0LL;
  v10 = -2147467261;
  if ( !a2 )
  {
    v11 = -2147467261;
    goto LABEL_14;
  }
  v12 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HolographicPositioner **))a2)(
          a2,
          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
          &v27);
  v11 = v12;
  if ( v12 >= 0 )
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v12);
  v9 = v27;
  if ( v11 < 0 )
  {
LABEL_14:
    if ( v9 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_21;
  }
  v13 = (*(__int64 (__fastcall **)(HolographicPositioner *, HSTRING, char *))(*(_QWORD *)v27 + 64LL))(v27, v8, v26);
  v11 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x64,
      (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
      (const char *)(unsigned int)v13);
    v9 = v27;
    goto LABEL_14;
  }
  v14 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v11 = 0;
LABEL_21:
  if ( v11 >= 0 && v26[0] )
  {
    v28 = 0;
    if ( (int)HolographicPositioner::_IsPropertySetActivationSourceAumidForeground(this, a2, v6, &v28) >= 0 )
    {
      if ( v28 )
      {
        LODWORD(v27) = 1;
        goto LABEL_50;
      }
    }
  }
  string = 0LL;
  v16 = WindowsCreateStringReference(L"AAMShim.CallingProcessId", 0x18u, &hstringHeader, &string);
  if ( v16 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
  v17 = string;
  v5 = 0LL;
  v27 = 0LL;
  if ( a2 )
  {
    v18 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, HolographicPositioner **))a2)(
            a2,
            &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
            &v27);
    v10 = v18;
    if ( v18 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1B,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v18);
    v5 = v27;
    if ( v10 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(HolographicPositioner *, HSTRING, char *))(*(_QWORD *)v27 + 64LL))(v27, v17, v26);
      v10 = v19;
      if ( v19 >= 0 )
      {
        v5 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v10 = 0;
        goto LABEL_43;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x64,
        (__int64)"internal\\onecoreshell\\inc\\propertysethelpers.h",
        (const char *)(unsigned int)v19);
      v5 = v27;
    }
  }
  if ( v5 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(HolographicPositioner *))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_43:
  if ( v10 < 0 || (v20 = 1, !v26[0]) )
    v20 = 0;
  if ( v20 )
  {
    v28 = 0;
    if ( (int)HolographicPositioner::_IsPropertySetActivationSourceProcessIdForeground(this, a2, v6, &v28) >= 0 )
    {
      if ( v28 )
      {
        LODWORD(v27) = 0;
LABEL_50:
        HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v27);
        if ( a2 )
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 16LL))(a2);
        return 1;
      }
    }
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 16LL))(a2);
LABEL_55:
  if ( HolographicPositioner::_IsPropertySetCallerProcessExplorer(v5, a2) )
    return 0;
  v22 = 0;
  if ( *((_DWORD *)this + 116) )
    return 0;
  v28 = 0;
  v26[0] = 0;
  v23 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_DISPLAY_CONTEXT, v26, &v28);
  v24 = v23;
  if ( v23 >= 0 )
  {
    if ( v26[0] && v28 == 1 )
    {
      v23 = wil::wnf_query_nothrow<unsigned long>(&WNF_HOLO_USER_INPUT_CONTEXT, v26, &v28);
      v24 = v23;
      if ( v23 < 0 )
      {
        v25 = 1374LL;
        goto LABEL_59;
      }
      if ( v26[0] )
        v22 = v28 == 1;
    }
    v24 = 0;
    goto LABEL_67;
  }
  v25 = 1371LL;
LABEL_59:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v25,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v23);
LABEL_67:
  if ( v24 >= 0 && v22 )
  {
    LODWORD(v27) = 2;
    HolographicPositionerTelemetry::HeuristicHolographicLaunch<enum HolographicLaunchHeuristic>(&v27);
    return 1;
  }
  return 0;
}
