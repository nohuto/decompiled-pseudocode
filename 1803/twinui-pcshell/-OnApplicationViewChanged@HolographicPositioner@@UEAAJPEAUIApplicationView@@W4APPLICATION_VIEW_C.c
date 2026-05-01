/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021470
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?GetCurrentPositioner@PositionerPriority@@UEAA?AW4SHELL_POSITIONER_TYPE@@XZ @ 0x180024A60 (-GetCurrentPositioner@PositionerPriority@@UEAA-AW4SHELL_POSITIONER_TYPE@@XZ.c)
 *     ?GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x180024AB0 (-GetPositionerPriority@CApplicationViewBase@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18002A4B0 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8490 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801408FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CAX_NW4Repor.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B2FDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3448 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3508 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B35C8 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, CApplicationViewBase *a2, int a3)
{
  __int64 (__fastcall *v6)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **); // rax
  int PositionerPriority; // eax
  __int64 (*v8)(void); // rax
  int CurrentPositioner; // eax
  int v10; // r14d
  bool v11; // al
  struct IShellPositionerPriority *v13; // rcx
  unsigned int (__fastcall *v14)(__int64); // rax
  __int64 (__fastcall *v15)(CWin32ApplicationView *__hidden, const struct _GUID *, void **); // rax
  int v16; // eax
  void *v17; // rcx
  __int64 (__fastcall *v18)(CWinRTApplicationView *); // rax
  __int64 (__fastcall *v19)(CWin32ApplicationView *__hidden, enum FRAMEWORK_VIEW_TYPE *); // rax
  int FrameworkViewType; // eax
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  void *v24; // [rsp+20h] [rbp-30h] BYREF
  CWinRTApplicationView *v25; // [rsp+28h] [rbp-28h] BYREF
  __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  CWinRTApplicationView *v27[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IShellPositionerPriority *v29; // [rsp+70h] [rbp+20h] BYREF

  v27[1] = (CWinRTApplicationView *)-2LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return 0LL;
  if ( a2 )
  {
    v29 = 0LL;
    v6 = *(__int64 (__fastcall **)(CApplicationViewBase *__hidden, struct IShellPositionerPriority **))(*(_QWORD *)a2 + 264LL);
    if ( v6 == CApplicationViewBase::GetPositionerPriority )
      PositionerPriority = CApplicationViewBase::GetPositionerPriority(a2, &v29);
    else
      PositionerPriority = v6(a2, &v29);
    if ( PositionerPriority < 0 )
    {
      v13 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v11 = 0;
    }
    else
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)v29 + 24LL);
      if ( v8 == PositionerPriority::GetCurrentPositioner )
        CurrentPositioner = PositionerPriority::GetCurrentPositioner();
      else
        CurrentPositioner = v8();
      v10 = CurrentPositioner;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v29);
      v11 = v10 == 4;
    }
    if ( v11 )
    {
      if ( a3 == 1 )
      {
        HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 184), a2);
        return 0LL;
      }
      if ( a3 <= 6 )
        return 0LL;
      if ( a3 > 8 )
      {
        if ( a3 == 9 )
          HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 184), a2);
        return 0LL;
      }
      v21 = (*(__int64 (__fastcall **)(CApplicationViewBase *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      v22 = v21;
      if ( v21 >= 0 )
      {
        v25 = a2;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v25);
        v27[0] = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v25, v27) >= 0 )
        {
          HolographicPositioner::_FindViewHostItem(a1 - 184, &v26, a2);
          LODWORD(v24) = 6;
          LOBYTE(v29) = 0;
          if ( (*(int (__fastcall **)(CApplicationViewBase *, void **))(*(_QWORD *)a2 + 400LL))(a2, &v24) >= 0
            && (_DWORD)v24 == 1
            && v26
            && (*(int (__fastcall **)(__int64, struct IShellPositionerPriority **))(*(_QWORD *)v26 + 80LL))(v26, &v29) >= 0
            && !(_BYTE)v29 )
          {
            HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 184), a2);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        }
        HolographicPositioner::_RaiseViewFocusGained((HolographicPositioner *)(a1 - 184), a2);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v27);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v21,
        (int)v24);
    }
    else
    {
      if ( a3 )
        return 0LL;
      v27[0] = a2;
      v14 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL);
      if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef(a2);
      }
      else if ( v14 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef((__int64)a2);
      }
      else
      {
        v14((__int64)a2);
      }
      v24 = 0LL;
      v15 = **(__int64 (__fastcall ***)(CWin32ApplicationView *__hidden, const struct _GUID *, void **))a2;
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
      {
        v16 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
                a2,
                &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                &v24);
      }
      else if ( v15 == CWin32ApplicationView::QueryInterface )
      {
        v16 = CWin32ApplicationView::QueryInterface(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v24);
      }
      else
      {
        v16 = v15(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v24);
      }
      if ( v16 < 0
        || ((LODWORD(v29) = 6,
             v19 = *(__int64 (__fastcall **)(CWin32ApplicationView *__hidden, enum FRAMEWORK_VIEW_TYPE *))(*(_QWORD *)a2 + 400LL),
             v19 != CWin32ApplicationView::GetFrameworkViewType)
          ? (FrameworkViewType = v19(a2, (enum FRAMEWORK_VIEW_TYPE *)&v29))
          : (FrameworkViewType = CWin32ApplicationView::GetFrameworkViewType(a2, (enum FRAMEWORK_VIEW_TYPE *)&v29)),
            FrameworkViewType < 0
         || (_DWORD)v29 != 1
         || (wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::ReportUsageToService(),
             v23 = (*(__int64 (__fastcall **)(_QWORD, CApplicationViewBase *, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(
                     *(_QWORD *)(a1 + 72),
                     a2,
                     4LL),
             v22 = v23,
             v23 >= 0)) )
      {
        v17 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)a2 + 16LL);
        if ( v18 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(a2);
        }
        else if ( v18 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(a2);
        }
        else
        {
          v18(a2);
        }
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D7,
        (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v23,
        (int)v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v27);
    }
    return v22;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D6,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL,
      (int)v24);
    return 2147942487LL;
  }
}
