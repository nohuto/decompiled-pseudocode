/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FB940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800F9074 (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9E58 (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800FA0C8 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800FA52C (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800FC8D0 (-PurloinForeground@HolographicPositioner@@UEAAJXZ.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE680 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF5F4 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF94C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180100C44 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180101B90 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801022B8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  enum PositionerPropertySetHelpers::ActivationPropertyFlags *v8; // r9
  int DetailsForActivation; // eax
  bool *v10; // r8
  unsigned int v11; // ebx
  unsigned int lpVtbl; // edi
  struct IUnknownVtbl *v13; // rbx
  __int64 *v14; // rax
  struct IApplicationView *v15; // rdx
  HolographicPositioner *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  HRESULT v19; // eax
  struct IApplicationView *v20; // rdx
  char v21; // al
  int v22; // eax
  struct Windows::Foundation::Collections::IPropertySet *v23; // rcx
  struct IUnknown v25; // [rsp+28h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v27[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[4]; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+98h] [rbp-70h]
  int *v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-58h] BYREF
  char v36; // [rsp+B4h] [rbp-54h]
  int v37; // [rsp+D8h] [rbp-30h] BYREF
  const char *v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  char v40; // [rsp+F0h] [rbp-18h]
  __int64 v41; // [rsp+F8h] [rbp-10h]
  _BYTE v42[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v43; // [rsp+190h] [rbp+88h]
  __int64 v44; // [rsp+198h] [rbp+90h]
  __int64 v45; // [rsp+1A0h] [rbp+98h]
  __int64 v46; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v28[1] = -2LL;
  LODWORD(v25.lpVtbl) = 0;
  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "ControlGainedForActivation";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v42, 0, sizeof(v42));
  v45 = 0LL;
  v46 = 0LL;
  v31[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v31,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a4,
                           &v25,
                           v8);
  v11 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x292,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    goto LABEL_42;
  }
  v26 = 0LL;
  lpVtbl = (unsigned int)v25.lpVtbl;
  if ( a4 )
  {
    v13 = a4->lpVtbl;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v26);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v13->QueryInterface)(
           a4,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           v14) >= 0 )
    {
      if ( (lpVtbl & 8) != 0 )
      {
        v17 = HolographicPositioner::_HandleAppActivationResponse(v16, v15, v26);
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = 666LL;
LABEL_37:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v18,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_40;
        }
      }
      v28[0] = v26;
      if ( v26 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 8LL))(v26);
      string = 0LL;
      v19 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
      if ( v19 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
      LODWORD(v25.lpVtbl) = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)v28,
                  string,
                  v27) < 0
        || (v21 = 1, v27[0] != 1) )
      {
        v21 = 0;
      }
      if ( v21 )
      {
        v22 = HolographicPositioner::_HandleSwitchAsyncActivation((HolographicPositioner *)(a1 - 184), v20, v26);
        v11 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x2A2,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v22);
          if ( v28[0] )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
          goto LABEL_40;
        }
      }
      if ( v28[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
    }
  }
  if ( *(_DWORD *)(a1 - 184 + 464) )
  {
    v17 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 184), a2, v10);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 679LL;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  v17 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 184), a2, v26);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 685LL;
    goto LABEL_37;
  }
  v17 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 184), a2);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 691LL;
    goto LABEL_37;
  }
  if ( (lpVtbl & 1) == 0 )
  {
    if ( (~(lpVtbl >> 2) & 1) != 0
      && (~(lpVtbl >> 1) & 1) != 0
      && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 32LL))(a2) < 0 )
    {
      v17 = HolographicPositioner::PurloinForeground((HolographicPositioner *)(a1 - 16));
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = 711LL;
        goto LABEL_37;
      }
      v17 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 32LL))(a2);
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = 712LL;
        goto LABEL_37;
      }
    }
LABEL_38:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v31);
  }
  v11 = 0;
LABEL_40:
  v23 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v23 + 16LL))(v23);
  }
LABEL_42:
  v31[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
  return v11;
}
