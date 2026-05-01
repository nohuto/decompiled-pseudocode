/*
 * XREFs of ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180178080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180018630 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x18006CB74 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$ActivateInstance@V?$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180174DB8 (--$ActivateInstance@V-$ComPtr@UIJumpViewParams@JumpView@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x180175C28 (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180175E08 (--4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x180176024 (-BeginJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1801760A0 (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18017664C (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?Split@ShowJumpViewActivity@JumpViewProvider@@QEAA?AV12@XZ @ 0x180178484 (-Split@ShowJumpViewActivity@JumpViewProvider@@QEAA-AV12@XZ.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180178688 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803072C0 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CJumpViewExperienceManager::Show(CJumpViewExperienceManager *this, HSTRING a2)
{
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v21; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h]
  _BYTE v26[320]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v27[320]; // [rsp+1D8h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+340h] [rbp+238h]

  v23[1] = -2LL;
  v21 = a2;
  if ( *((_DWORD *)this + 42) != 2 )
  {
    v4 = (_QWORD *)((char *)this + 328);
    v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 41, &v21);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v20 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.JumpView.JumpViewParams",
      0x2Fu,
      0x2Eu);
    v8 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::JumpView::IJumpViewParams>>(
           v25,
           &v20);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 287LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 56LL))(v20, *v4);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 288LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 272LL))(v20, (char *)this + 468);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 289LL;
      goto LABEL_13;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 304LL))(v20, v23);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 292LL;
      goto LABEL_13;
    }
    v10 = 6;
    if ( SLODWORD(v23[0]) > 0 )
      v10 = v23[0];
    *((_DWORD *)this + 118) = v10;
    CJumpViewExperienceManager::BeginTelemetryActivity((__int64)this, (struct wil::details::IFailureCallback *)v26, v20);
    v11 = JumpViewProvider::ShowJumpViewActivity::Split(v26, v27);
    JumpViewProvider::ShowJumpViewActivity::operator=((__int64)this + 496, v11);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v27);
    CJumpViewExperienceManager::BeginJumpViewTelemetryTimeout((struct _TP_TIMER **)this);
    v12 = CJumpViewExperienceManager::EnsureActivationArgs((HSTRING *)this);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x132,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_31:
      JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v26);
      goto LABEL_32;
    }
    v22 = 0LL;
    v25 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v13 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v25,
            (__int64 *)&v22);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
LABEL_30:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      goto LABEL_31;
    }
    v21 = v22;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v21);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&JumpViewExperienceEvents::Param_LaunchArgumentString);
    v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
            *(HSTRING *)(v14 + 24),
            v15,
            (__int64)a2);
    v6 = v16;
    if ( v16 < 0 )
    {
      v17 = 311LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      goto LABEL_30;
    }
    v18 = (char *)this + 128;
    if ( *((_DWORD *)this + 42) )
    {
      v16 = CSingleViewShellExperience::NavigateView(v18, 3LL);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 321LL;
        goto LABEL_29;
      }
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)&JumpViewExperienceEvents::NotifyLaunchArguments);
      v16 = ExperienceManagerUtils::RaiseReactivatedEvent(
              *((ExperienceManagerUtils **)this + 19),
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 64),
              *((HSTRING *)this + 17),
              *((HSTRING *)this + 18),
              *(HSTRING *)(v19 + 24),
              v22);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 323LL;
        goto LABEL_29;
      }
      *((_BYTE *)this + 476) = 1;
    }
    else
    {
      v16 = CSingleViewShellExperience::Show(
              (__int64)v18,
              (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
      v6 = v16;
      if ( v16 < 0 )
      {
        v17 = 316LL;
        goto LABEL_29;
      }
    }
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  return 0LL;
}
