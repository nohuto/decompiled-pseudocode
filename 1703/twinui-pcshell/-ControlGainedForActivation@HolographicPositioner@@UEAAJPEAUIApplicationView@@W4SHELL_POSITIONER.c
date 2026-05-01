/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800D6ABC (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800D7154 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800D9400 (-PurloinForeground@HolographicPositioner@@UEAAJXZ.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DAE34 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DB18C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800DC2F0 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800DD3C0 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800DDAE8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ??$Start@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@ControlGainedForActivation@HolographicPositionerTelemetry@@SA?AV01@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@Z @ 0x1800DE4A0 (--$Start@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@ControlGainedForActivation@HolographicPositi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        __int64 (__fastcall ***a4)(struct IApplicationView *, GUID *, __int64 *))
{
  PositionerPropertySetHelpers *v7; // rcx
  enum PositionerPropertySetHelpers::ActivationPropertyFlags *v8; // r9
  int DetailsForActivation; // eax
  bool *v10; // r8
  unsigned int v11; // ebx
  unsigned int lpVtbl; // edi
  __int64 (__fastcall **v13)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  struct IApplicationView *v15; // rdx
  HolographicPositioner *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  HRESULT v19; // eax
  struct IApplicationView *v20; // rdx
  int v22; // eax
  struct Windows::Foundation::Collections::IPropertySet *v23; // rcx
  struct IUnknown v25; // [rsp+20h] [rbp-E0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v26; // [rsp+28h] [rbp-D8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v32[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v29 = -2LL;
  *(_QWORD *)v28 = a2;
  v27 = (struct Windows::Foundation::Collections::IPropertySet *)a4;
  LODWORD(v25.lpVtbl) = 0;
  HolographicPositionerTelemetry::ControlGainedForActivation::Start<IApplicationView * &,IUnknown * &>((HolographicPositionerTelemetry::ControlGainedForActivation *)v32);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v7, a4, &v25, v8);
  v11 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    goto LABEL_42;
  }
  v26 = 0LL;
  lpVtbl = (unsigned int)v25.lpVtbl;
  if ( a4 )
  {
    v13 = *a4;
    v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v26);
    if ( (int)(*v13)((struct IApplicationView *)a4, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v14) >= 0 )
    {
      if ( (lpVtbl & 8) != 0 )
      {
        v17 = HolographicPositioner::_HandleAppActivationResponse(v16, v15, v26);
        v11 = v17;
        if ( v17 < 0 )
        {
          v18 = 640LL;
LABEL_37:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v18,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_40;
        }
      }
      v27 = v26;
      if ( v26 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v26 + 8LL))(v26);
      string = 0LL;
      v19 = WindowsCreateStringReference(L"ClientRequestedNavigationType", 0x1Du, &hstringHeader, &string);
      if ( v19 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
      LODWORD(v25.lpVtbl) = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v27,
                  string,
                  v28) >= 0
        && v28[0] == 1 )
      {
        v22 = HolographicPositioner::_HandleSwitchAsyncActivation((HolographicPositioner *)(a1 - 152), v20, v26);
        v11 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x288,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v22);
          if ( v27 )
            (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
          goto LABEL_40;
        }
      }
      if ( v27 )
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  if ( *(_DWORD *)(a1 - 152 + 408) )
  {
    v17 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 152), a2, v10);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 653LL;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
  v17 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 152), a2, v26);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 659LL;
    goto LABEL_37;
  }
  v17 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 152), a2);
  v11 = v17;
  if ( v17 < 0 )
  {
    v18 = 665LL;
    goto LABEL_37;
  }
  if ( (lpVtbl & 1) == 0 )
  {
    if ( (~(lpVtbl >> 1) & 1) != 0 && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 32LL))(a2) < 0 )
    {
      v17 = HolographicPositioner::PurloinForeground((HolographicPositioner *)(a1 - 8));
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = 677LL;
        goto LABEL_37;
      }
      v17 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 32LL))(a2);
      v11 = v17;
      if ( v17 < 0 )
      {
        v18 = 678LL;
        goto LABEL_37;
      }
    }
LABEL_38:
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v32);
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
  v32[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v32);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v32);
  return v11;
}
