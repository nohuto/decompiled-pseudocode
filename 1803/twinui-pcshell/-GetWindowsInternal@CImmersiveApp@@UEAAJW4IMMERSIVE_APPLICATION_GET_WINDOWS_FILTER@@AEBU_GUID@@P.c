/*
 * XREFs of ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0
 * Callers:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4 (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewPropertyChangedArgs@3456@@Z @ 0x18003EE20 (-_HandleViewPropertyChanged@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x180040EF4 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18004BD00 (-GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA-AW4FRAMEWORK_VIEW_TYPE@@XZ.c)
 *     ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D0D0 (-GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?IsApplicationRunning@CImmersiveApp@@UEBA_NXZ @ 0x180049880 (-IsApplicationRunning@CImmersiveApp@@UEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x180131B38 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180135268 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveApp::GetWindowsInternal(CImmersiveApp *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  int v5; // r15d
  CImmersiveApp *v6; // r14
  void *v7; // rsi
  const struct _GUID *v8; // rdx
  int v9; // ecx
  int v10; // ebx
  __int64 (__fastcall *v11)(CImmersiveApp *); // rax
  char v12; // al
  __int64 (__fastcall *v13)(CImmersiveApp *); // rax
  char IsApplicationRunning; // al
  bool v15; // r12
  __int64 (__fastcall *v16)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  CFrameApplicationPresentation *v19; // rcx
  int v20; // edi
  __int64 (__fastcall *v21)(CImmersiveApp *); // rax
  char v22; // al
  __int64 v23; // r15
  __int64 (__fastcall ***v24)(__int64, GUID *, void **); // rdi
  volatile int *v25; // rdx
  _QWORD *v26; // rbx
  _QWORD *v27; // r9
  _QWORD *v28; // r14
  __int64 v29; // rcx
  LPUNKNOWN v30; // rcx
  void (__fastcall *v31)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  __int64 (__fastcall *v32)(__int64, GUID *, void **); // rax
  void *v33; // r9
  __int64 v34; // r9
  __int64 (__fastcall *v35)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  _DWORD *v36; // rcx
  CImmersiveApplicationWindow *(__fastcall *v37)(CImmersiveApplicationWindow *, char); // rax
  __int64 v38; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v39; // rcx
  void *v40; // rcx
  __int64 v41; // rcx
  HWND v42; // rdi
  const struct _GUID *v43; // rdx
  void *v44; // rdx
  char v45; // al
  unsigned __int64 v46; // rcx
  struct ITaskWindow *v47; // rdi
  char v48; // r12
  void *v49; // rcx
  struct ITaskWindow *v50; // rcx
  _QWORD *v51; // r14
  __int64 v52; // r15
  __int64 (__fastcall ***v53)(_QWORD, GUID *, void **); // rdi
  _QWORD *v54; // rbx
  __int64 v55; // rcx
  LPUNKNOWN v56; // rcx
  void *v57; // rdi
  void *v58; // rcx
  __int64 (__fastcall **v59)(void *, _QWORD *, _QWORD *); // rax
  struct ITaskWindow *v60; // rcx
  void *v61; // rcx
  int v63; // [rsp+28h] [rbp-79h]
  void *v64; // [rsp+30h] [rbp-71h] BYREF
  __int64 v65; // [rsp+38h] [rbp-69h] BYREF
  struct ITaskWindow *v66; // [rsp+40h] [rbp-61h] BYREF
  void *v67; // [rsp+48h] [rbp-59h] BYREF
  void *v68; // [rsp+50h] [rbp-51h] BYREF
  void *v69; // [rsp+58h] [rbp-49h] BYREF
  void *v70; // [rsp+60h] [rbp-41h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+68h] [rbp-39h] BYREF
  LPUNKNOWN v72; // [rsp+70h] [rbp-31h] BYREF
  __int64 v73; // [rsp+78h] [rbp-29h] BYREF
  _QWORD *v74; // [rsp+80h] [rbp-21h]
  unsigned __int64 v75; // [rsp+88h] [rbp-19h]
  unsigned __int64 v76; // [rsp+90h] [rbp-11h]
  __int64 v77; // [rsp+98h] [rbp-9h] BYREF
  __int64 v78[2]; // [rsp+A0h] [rbp-1h] BYREF
  unsigned __int64 v79[9]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  int v82; // [rsp+110h] [rbp+6Fh]

  v82 = a2;
  v78[1] = -2LL;
  v5 = a2;
  v6 = a1;
  *a4 = 0LL;
  v69 = 0LL;
  v7 = 0LL;
  v68 = 0LL;
  v66 = 0LL;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1
    && a3[1] == *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v69);
    v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v69);
  }
  else if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1
         && a3[1] == *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4 )
  {
    v11 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)a1 + 408LL);
    if ( v11 == CImmersiveApp::IsApplicationRunning )
      v12 = *((_BYTE *)a1 + 424) & 1;
    else
      v12 = v11(a1);
    if ( v12 || v5 == 5 )
      v10 = 0;
    else
      v10 = -2147019873;
  }
  else
  {
    if ( *a3 != *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
      || a3[1] != *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
    {
      v10 = -2147467262;
      goto LABEL_155;
    }
    v13 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)a1 + 408LL);
    if ( v13 == CImmersiveApp::IsApplicationRunning )
      IsApplicationRunning = CImmersiveApp::IsApplicationRunning(a1);
    else
      IsApplicationRunning = v13(a1);
    v10 = 0;
    if ( !IsApplicationRunning )
      v10 = -2147019873;
  }
  if ( v10 < 0 )
    goto LABEL_155;
  v15 = v5 != 3;
  if ( (unsigned int)(v5 - 2) > 1 )
  {
    if ( v5 != 4 && v5 != 5 )
      goto LABEL_101;
    v15 = 0;
    v65 = 0LL;
    v16 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v6 + 496LL);
    if ( v16 == CImmersiveApp::GetFrameInternal )
    {
      v17 = *((_QWORD *)v6 + 36);
      v16 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v17 + 128LL);
      if ( v16 == CFrameApplicationPresentation::GetFrame )
      {
        if ( *(_DWORD *)(v17 + 56) == 2 )
        {
          v10 = -2147019873;
        }
        else
        {
          v18 = *(_QWORD *)(v17 + 120);
          if ( v18 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
            v18 = *(_QWORD *)(v17 + 120);
          }
          v65 = v18;
          v10 = 0;
        }
LABEL_34:
        v63 = v10;
        v20 = v10;
        if ( v10 < 0 )
          goto LABEL_89;
        v21 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v6 + 408LL);
        if ( v21 == CImmersiveApp::IsApplicationRunning )
          v22 = *((_BYTE *)v6 + 424) & 1;
        else
          v22 = v21(v6);
        if ( !v22 && !(*(unsigned __int8 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v6 + 192LL))(v6) )
        {
          v10 = -2147019873;
          v20 = -2147019873;
LABEL_89:
          if ( v5 == 4 && v20 < 0 )
          {
            v10 = 0;
            v5 = 0;
            v82 = 0;
            v15 = 1;
          }
          v41 = v65;
          if ( v65 )
          {
            v65 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
          }
          goto LABEL_101;
        }
        if ( *(__int64 (__fastcall **)(CApplicationFrameWrapper *, HWND *))(*(_QWORD *)v65 + 24LL) == CApplicationFrameWrapper::GetFrameWindow )
        {
          v73 = 0LL;
          if ( *(_BYTE *)(v65 + 72) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x96,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              (const char *)0x8007139FLL,
              v10);
            v10 = -2147019873;
          }
          else if ( *(_QWORD *)(v65 + 80) )
          {
            v73 = *(_QWORD *)(v65 + 80);
            v10 = 0;
          }
          else
          {
            v10 = -2147023728;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x97,
              (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
              (const char *)0x80070490LL,
              v63);
          }
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v65 + 24LL))(v65, &v73);
        }
        v20 = v10;
        if ( v10 < 0 )
          goto LABEL_89;
        v23 = v73;
        v64 = 0LL;
        v24 = 0LL;
        v74 = 0LL;
        v26 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = 0LL;
        v28 = 0LL;
        if ( v26 )
        {
          *v26 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
          v26[3] = 0LL;
          ppunkMarshal = 0LL;
          if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
          {
            v29 = v26[3];
            if ( v29 )
            {
              v26[3] = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            }
            ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
              ppunkMarshal,
              &GUID_00000003_0000_0000_c000_000000000046,
              v26 + 3);
          }
          v30 = ppunkMarshal;
          if ( ppunkMarshal )
          {
            ppunkMarshal = 0LL;
            ((void (__fastcall *)(LPUNKNOWN))v30->lpVtbl->Release)(v30);
          }
          *((_DWORD *)v26 + 11) = 1;
          *v26 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v26[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
          {
            v31 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                      + 8LL);
            v25 = (volatile int *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount;
            if ( (char *)v31 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
            {
              _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
              v7 = v68;
            }
            else
            {
              v31(Microsoft::WRL::Details::ModuleBase::module_);
            }
          }
          *v26 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v26[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
          v26[6] = v23;
          v27 = v26;
          v24 = (__int64 (__fastcall ***)(__int64, GUID *, void **))v26;
          v74 = v26;
          v28 = v26;
        }
        if ( !v27 )
        {
          v10 = -2147024882;
          goto LABEL_71;
        }
        v32 = **v24;
        if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::QueryInterface )
        {
          v64 = 0LL;
          if ( InlineIsEqualGUID(&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &GUID_00000000_0000_0000_c000_000000000046)
            || InlineIsEqualGUID(&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &GUID_00000003_0000_0000_c000_000000000046) )
          {
            goto LABEL_68;
          }
          if ( InlineIsEqualGUID(&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891) )
          {
            v33 = (void *)(v34 + 32);
LABEL_68:
            v64 = v33;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 8LL))(v33);
            v10 = 0;
            goto LABEL_71;
          }
          v10 = -2147467262;
        }
        else
        {
          v10 = v32((__int64)v27, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v64);
        }
LABEL_71:
        v20 = v10;
        if ( v28 )
        {
          v74 = 0LL;
          v35 = *(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*v28 + 16LL);
          if ( (char *)v35 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::Release )
          {
            if ( Microsoft::WRL::Details::SafeUnknownDecrementReference(
                   (Microsoft::WRL::Details *)((char *)v28 + 44),
                   v25) )
            {
              goto LABEL_84;
            }
            v37 = *(CImmersiveApplicationWindow *(__fastcall **)(CImmersiveApplicationWindow *, char))(*v28 + 72LL);
            if ( v37 == CImmersiveApplicationWindow::`vector deleting destructor' )
            {
              *v28 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              v28[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              *v36 = -1073741823;
              v38 = v28[3];
              if ( v38 )
              {
                v28[3] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
              operator delete(v28, (const struct std::nothrow_t *)0x38);
            }
            else
            {
              v37((CImmersiveApplicationWindow *)v28, 1);
            }
            v39 = Microsoft::WRL::Details::ModuleBase::module_;
            if ( !Microsoft::WRL::Details::ModuleBase::module_ )
              goto LABEL_84;
            v35 = *(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL);
            if ( (char *)v35 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
            {
              _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
              v7 = v68;
              goto LABEL_84;
            }
          }
          else
          {
            v39 = (struct Microsoft::WRL::Details::ModuleBase *)v28;
          }
          v35(v39);
        }
LABEL_84:
        if ( v10 >= 0 )
        {
          v7 = v64;
          v64 = 0LL;
          v68 = v7;
        }
        v40 = v64;
        if ( v64 )
        {
          v64 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
        }
        v5 = v82;
        v6 = a1;
        goto LABEL_89;
      }
      v19 = (CFrameApplicationPresentation *)*((_QWORD *)v6 + 36);
    }
    else
    {
      v19 = v6;
    }
    v10 = v16(v19, (struct IApplicationFrameProxy **)&v65);
    goto LABEL_34;
  }
  v42 = (HWND)*((_QWORD *)v6 + 34);
  if ( !v42 )
    goto LABEL_101;
  if ( *a3 != *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
    || a3[1] != *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
  {
    v70 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
    v10 = CImmersiveApplicationWindow_CreateInstance(v42, v43, &v70);
    if ( v10 >= 0 )
    {
      v44 = v70;
      v70 = 0LL;
      Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v68, v44);
      v15 = 0;
      v7 = v68;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v70);
LABEL_101:
    if ( v15 )
    {
      v45 = 1;
      v76 = *((_QWORD *)v6 + 39);
      v46 = 0LL;
      v75 = 0LL;
      if ( v76 )
      {
        while ( 1 )
        {
          if ( !v45 )
            goto LABEL_109;
          v47 = *(struct ITaskWindow **)(*((_QWORD *)v6 + 38) + 8 * v46);
          v48 = 1;
          if ( v5 && (unsigned int)(v5 - 1) >= 2 )
          {
            v10 = -2147418113;
          }
          else if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
                 && a3[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
          {
            if ( v66 != v47 )
            {
              if ( v47 )
                (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v47 + 8LL))(v47);
              v50 = v66;
              v66 = v47;
              if ( v50 )
                (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v50 + 16LL))(v50);
            }
          }
          else
          {
            v51 = 0LL;
            v67 = 0LL;
            v52 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v47 + 32LL))(v47);
            v67 = 0LL;
            v53 = 0LL;
            v79[1] = 0LL;
            v54 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v54 )
            {
              *v54 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
              v54[3] = 0LL;
              v72 = 0LL;
              if ( CoCreateFreeThreadedMarshaler(0LL, &v72) >= 0 )
              {
                v55 = v54[3];
                if ( v55 )
                {
                  v54[3] = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
                }
                ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))v72->lpVtbl->QueryInterface)(
                  v72,
                  &GUID_00000003_0000_0000_c000_000000000046,
                  v54 + 3);
              }
              v56 = v72;
              if ( v72 )
              {
                v72 = 0LL;
                ((void (__fastcall *)(LPUNKNOWN))v56->lpVtbl->Release)(v56);
              }
              *((_DWORD *)v54 + 11) = 1;
              *v54 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              v54[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
              *v54 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              v54[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
              v54[6] = v52;
              v51 = v54;
              v53 = (__int64 (__fastcall ***)(_QWORD, GUID *, void **))v54;
            }
            if ( v51 )
            {
              v10 = (**v53)(v53, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v67);
              (*(void (__fastcall **)(_QWORD *))(*v51 + 16LL))(v51);
            }
            else
            {
              v10 = -2147024882;
            }
            if ( v10 >= 0 )
            {
              if ( v69 )
              {
                v10 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v69 + 40LL))(v69, v67);
              }
              else
              {
                v57 = v67;
                v67 = 0LL;
                if ( v7 )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
                v7 = v57;
                v68 = v57;
                v48 = 0;
              }
            }
            v58 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(void *))(*(_QWORD *)v58 + 16LL))(v58);
            }
            if ( v48 && v10 >= 0 )
            {
              v45 = 1;
              goto LABEL_108;
            }
          }
          v45 = 0;
LABEL_108:
          v46 = v75 + 1;
          v75 = v46;
          v6 = a1;
          v5 = v82;
          if ( v46 >= v76 )
            goto LABEL_109;
        }
      }
    }
    goto LABEL_109;
  }
  v77 = *((_QWORD *)v6 + 34);
  v78[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v66);
  CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
    (CImmersiveApp *)((char *)v6 + 152),
    (const struct CTaskWindowFinder *)&v77,
    &v66,
    v79);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v78);
LABEL_109:
  if ( v10 < 0 )
    goto LABEL_155;
  if ( *a3 == *(_QWORD *)&GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data1
    && a3[1] == *(_QWORD *)GUID_5632b1a4_e38a_400a_928a_d4cd63230295.Data4 )
  {
    v49 = v69;
LABEL_152:
    v59 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v49;
    goto LABEL_153;
  }
  if ( *a3 == *(_QWORD *)&GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data1
    && a3[1] == *(_QWORD *)GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891.Data4 )
  {
    if ( v7 )
    {
      v59 = *(__int64 (__fastcall ***)(void *, _QWORD *, _QWORD *))v7;
      v49 = v7;
LABEL_153:
      v10 = (*v59)(v49, a3, a4);
      goto LABEL_155;
    }
    goto LABEL_148;
  }
  if ( *a3 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
    && a3[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
  {
    v49 = v66;
    if ( v66 )
      goto LABEL_152;
LABEL_148:
    v10 = -2147019873;
  }
LABEL_155:
  v60 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v60 + 16LL))(v60);
  }
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  v61 = v69;
  if ( v69 )
  {
    v69 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v61 + 16LL))(v61);
  }
  return (unsigned int)v10;
}
