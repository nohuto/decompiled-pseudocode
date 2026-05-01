/*
 * XREFs of ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802B49B8
 * Callers:
 *     ?PopulateViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@0@Z @ 0x1802B4D8C (-PopulateViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@0@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x180095A90 (-SetTargetViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800F5EF4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18011EC4C (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1801217D4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A0310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet_____ptr64_ @ 0x1802B4184 (Microsoft--WRL--Details--Make__ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_47_--Launch.c)
 *     ?GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA?AW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAUIUnknown@@@Z @ 0x1802B492C (-GetTargetViewSizePreferenceOrDefault@ViewSizePreferenceHelpers@@YA-AW4APPLICATION_VIEW_SIZE_PRE.c)
 *     ?TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@AEAPEAUHWND__@@@Z @ 0x1802B53D0 (-TryGetSourceViewSizePreference@ViewSizePreferenceHelpers@@YA_NPEAUIUnknown@@AEAW4APPLICATION_VI.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ViewSizePreferenceHelpers::GetViewValueSetFromSite(
        IUnknown *punk,
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet **a3)
{
  int v5; // eax
  HWND *v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rdx
  void *v9; // rbx
  HSTRING_HEADER *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  unsigned int TargetViewSizePreferenceOrDefault; // eax
  HRESULT v15; // eax
  struct IUnknownVtbl *v16; // rbx
  volatile int *v17; // rdx
  int v18; // eax
  int v19; // eax
  const WCHAR *v21; // [rsp+28h] [rbp-59h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-51h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  void *v24; // [rsp+40h] [rbp-41h] BYREF
  void *v25; // [rsp+48h] [rbp-39h] BYREF
  struct IUnknown v26; // [rsp+50h] [rbp-31h] BYREF
  __int64 v27; // [rsp+58h] [rbp-29h] BYREF
  const WCHAR *v28; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-19h] BYREF
  HSTRING_HEADER v30; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v31[32]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29[1] = -2LL;
  a2->lpVtbl = 0LL;
  v21 = 0LL;
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v21);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = 227LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5);
    goto LABEL_33;
  }
  if ( ViewSizePreferenceHelpers::TryGetSourceViewSizePreference(
         punk,
         &v26,
         (enum APPLICATION_VIEW_SIZE_PREFERENCE *)v29,
         v6) )
  {
    v5 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
           v29[0],
           (unsigned int)v26.lpVtbl);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = 233LL;
      goto LABEL_18;
    }
LABEL_15:
    TargetViewSizePreferenceOrDefault = ViewSizePreferenceHelpers::GetTargetViewSizePreferenceOrDefault(punk);
    if ( TargetViewSizePreferenceOrDefault )
    {
      v5 = ViewSizePreferenceHelpers::SetTargetViewSizePreference(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
             TargetViewSizePreferenceOrDefault);
      v7 = v5;
      if ( v5 < 0 )
      {
        v8 = 253LL;
        goto LABEL_18;
      }
    }
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    v15 = IUnknown_QueryService(
            punk,
            &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
            &GUID_0d12c4c8_a3d9_4e24_94c1_0e20c5a956c4,
            &v25);
    v16 = (struct IUnknownVtbl *)v21;
    if ( v15 >= 0 )
    {
      v28 = v21;
      Microsoft::WRL::Details::Make__ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_47_::LaunchUIContext_Windows::Foundation::Collections::IPropertySet_____ptr64_(
        (__int64 *)&ppvOut,
        &v28);
      if ( !ppvOut )
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x116,
          (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
          (const char *)0x8007000ELL);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        goto LABEL_33;
      }
      (*(void (__fastcall **)(void *, void *))(*(_QWORD *)v25 + 24LL))(v25, ppvOut);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
        (__int64)ppvOut,
        v17);
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    if ( IUnknown_QueryService(punk, &stru_1803B3AA0, &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836, &v24) >= 0 )
      (*(void (__fastcall **)(void *, struct IUnknownVtbl *))(*(_QWORD *)v24 + 24LL))(v24, v16);
    v27 = 0LL;
    v18 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v21,
            &v27);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        288LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 56LL))(v27, (char *)&v26.lpVtbl + 4);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        290LL,
        (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
    if ( !HIDWORD(v26.lpVtbl) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      v16 = (struct IUnknownVtbl *)v21;
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21);
    a2->lpVtbl = v16;
    v7 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_32;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(
         punk,
         (const GUID *const)&SID_LaunchSourceAppUserModelId,
         &GUID_989191ac_28ff_4cf0_9584_e0d078bc2396,
         &ppvOut) < 0 )
  {
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_15;
  }
  pv = 0LL;
  v9 = ppvOut;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  if ( (*(int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v9 + 24LL))(v9, &pv) < 0
    || (v28 = (const WCHAR *)pv,
        v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v28),
        v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, (const WCHAR **)&off_18034C740),
        v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
                *(HSTRING *)(v11 + 24),
                v12,
                (__int64)v10[1].Reserved.Reserved1),
        v7 = v13,
        v13 >= 0) )
  {
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF5,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)v13);
  if ( pv )
    CoTaskMemFree(pv);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  return v7;
}
