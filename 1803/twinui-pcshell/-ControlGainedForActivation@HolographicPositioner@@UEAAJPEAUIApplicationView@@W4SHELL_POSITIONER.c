/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801ADB50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x18006D160 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??$?8UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@01@$$T@Z @ 0x18009EB14 (--$-8UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB90 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801AC144 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801ACF3C (--1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801B0460 (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0718 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B1868 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1CF8 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1DE4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B21A4 (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B2FDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // ebx
  struct IApplicationView *v10; // rdx
  HolographicPositioner *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  UAPViewWrapper *v14; // r8
  struct IApplicationView *v15; // rdx
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // r9
  bool v21[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v22[12]; // [rsp+24h] [rbp-DCh] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _QWORD v29[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v26 = -2LL;
  v24 = 0;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"ControlGainedForActivation");
  v29[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v29,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (struct IApplicationView *)a4,
                           (struct IUnknown *)v22,
                           0LL);
  v9 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    *(_QWORD *)&v22[4] = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22[4]);
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _BYTE *))a4->lpVtbl->QueryInterface)(
             a4,
             &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
             &v22[4]) >= 0 )
      {
        if ( (v22[0] & 8) != 0 )
        {
          v12 = HolographicPositioner::_HandleAppActivationResponse(
                  v11,
                  v10,
                  *(struct Windows::Foundation::Collections::IPropertySet **)&v22[4]);
          v9 = v12;
          if ( v12 < 0 )
          {
            v13 = 688LL;
LABEL_33:
            v19 = (unsigned int)v12;
            goto LABEL_34;
          }
        }
        v23 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v22[4];
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v23);
        v28 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"ClientRequestedNavigationType",
          0x1Eu,
          0x1Du);
        v24 = 1;
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v23, v28, v14, &v25) >= 0
          && v25 == 1 )
        {
          v17 = HolographicPositioner::_HandleSwitchAsyncActivation(
                  (HolographicPositioner *)(a1 - 176),
                  v15,
                  *(struct Windows::Foundation::Collections::IPropertySet **)&v22[4]);
          v9 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2B8,
              (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v17);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
LABEL_37:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v22[4]);
            goto LABEL_38;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      }
    }
    v21[0] = 0;
    v12 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 176), a2, v21);
    v9 = v12;
    if ( v12 < 0 )
    {
      v13 = 701LL;
      goto LABEL_33;
    }
    if ( v21[0] )
    {
      v12 = HolographicPositioner::_HandleControlGainedForView(
              (HolographicPositioner *)(a1 - 176),
              a2,
              *(struct Windows::Foundation::Collections::IPropertySet **)&v22[4]);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 707LL;
        goto LABEL_33;
      }
      v12 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 176), a2);
      v9 = v12;
      if ( v12 < 0 )
      {
        v13 = 713LL;
        goto LABEL_33;
      }
      if ( (v22[0] & 1) != 0 )
      {
LABEL_36:
        v9 = 0;
        goto LABEL_37;
      }
      if ( (v22[0] & 4) == 0
        && (v22[0] & 2) == 0
        && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0 )
      {
        if ( Microsoft::WRL::operator==<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>((_QWORD *)(a1 + 64)) )
        {
          v9 = -2147019873;
          v19 = 2147947423LL;
          v13 = 733LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)v19);
          goto LABEL_37;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 48LL))(*v18);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 734LL;
          goto LABEL_33;
        }
        v12 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 735LL;
          goto LABEL_33;
        }
      }
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_38:
  HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation((HolographicPositionerTelemetry::ControlGainedForActivation *)v29);
  return v9;
}
