/*
 * XREFs of ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18001E4E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800B346C (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ??1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ @ 0x1800BC31C (--1ShowJumpViewActivity@JumpViewProvider@@QEAA@XZ.c)
 *     ??4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BC40C (--4ShowJumpViewActivity@JumpViewProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x1800BEE28 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1800BF06C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BFB80 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??0?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800BFCAC (--0-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C0D2C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0E74 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Intern.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CJumpViewExperienceManager::Show(char *pv, HSTRING a2)
{
  HSTRING *v4; // rsi
  HRESULT v5; // eax
  int v6; // ebx
  HRESULT v8; // eax
  PSRWLOCK v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  struct _TP_TIMER **v17; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v19; // r9
  struct _TP_TIMER *v20; // rcx
  int v21; // eax
  HRESULT v22; // eax
  int v23; // eax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  struct Windows::Foundation::Collections::IPropertySet *v28; // r9
  struct Windows::Foundation::Collections::IPropertySet *v29; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v30; // rcx
  PSRWLOCK v31; // rcx
  PSRWLOCK v32; // rcx
  int v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-D8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-C8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v39[48]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v40; // [rsp+A8h] [rbp-60h]
  _QWORD v41[40]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v36[1] = -2LL;
  if ( *((_DWORD *)pv + 42) != 2 )
  {
    v4 = (HSTRING *)(pv + 328);
    if ( !a2 || a2 != *v4 )
    {
      WindowsDeleteString(*v4);
      *v4 = 0LL;
      v5 = WindowsDuplicateString(a2, v4);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x123,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        return (unsigned int)v6;
      }
    }
    *(_QWORD *)v33 = 0LL;
    string = 0LL;
    v8 = WindowsCreateStringReference(L"Windows.Internal.Shell.JumpView.JumpViewParams", 0x2Eu, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    *(_QWORD *)v33 = 0LL;
    v6 = RoActivateInstance(string, &SRWLock);
    if ( v6 < 0
      || (*(_QWORD *)&GUID_3f799ae7_6b98_4382_8cff_efce332ffbfc.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
       || *(_QWORD *)GUID_3f799ae7_6b98_4382_8cff_efce332ffbfc.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
        ? (v6 = (*(__int64 (__fastcall **)(PSRWLOCK, GUID *, int *))SRWLock->Ptr)(
                  SRWLock,
                  &GUID_3f799ae7_6b98_4382_8cff_efce332ffbfc,
                  v33),
           (*((void (__fastcall **)(PSRWLOCK))SRWLock->Ptr + 2))(SRWLock),
           v9 = *(PSRWLOCK *)v33)
        : (PSRWLOCK)(v9 = SRWLock, *(_QWORD *)v33 = SRWLock),
          v6 < 0) )
    {
      v11 = (unsigned int)v6;
      v12 = 294LL;
      goto LABEL_62;
    }
    v10 = (*((__int64 (__fastcall **)(PSRWLOCK, HSTRING))v9->Ptr + 7))(v9, *v4);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 295LL;
LABEL_62:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)v11);
LABEL_63:
      v32 = *(PSRWLOCK *)v33;
      if ( *(_QWORD *)v33 )
      {
        *(_QWORD *)v33 = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v32->Ptr + 2))(v32);
      }
      return (unsigned int)v6;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)v33 + 272LL))(*(_QWORD *)v33, pv + 468);
    v6 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 296LL;
      goto LABEL_62;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v33 + 304LL))(*(_QWORD *)v33, v36);
    v6 = v14;
    if ( v14 < 0 )
    {
      v11 = (unsigned int)v14;
      v12 = 299LL;
      goto LABEL_62;
    }
    v15 = 6;
    if ( SLODWORD(v36[0]) > 0 )
      v15 = v36[0];
    *((_DWORD *)pv + 118) = v15;
    CJumpViewExperienceManager::BeginTelemetryActivity(pv, v39, *(_QWORD *)v33);
    if ( *v40 != 1 )
      __fastfail(7u);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)v39,
      &SRWLock);
    ++v40[18];
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v41,
      v39);
    v41[0] = &JumpViewProvider::ShowJumpViewActivity::`vftable';
    JumpViewProvider::ShowJumpViewActivity::operator=((__int64)(pv + 496), (__int64)v41, v16);
    JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v41);
    v17 = (struct _TP_TIMER **)(pv + 808);
    if ( !*((_QWORD *)pv + 101) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(lambda_89df0ffbe2c53d06adbb7fd818281742_::_lambda_invoker_cdecl_, pv, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)pv + 101,
        ThreadpoolTimer);
      if ( !*v17 )
        wil::details::in1diag3::_Log_NullAlloc(
          retaddr,
          (void *)0x33E,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
          v19);
      v20 = *v17;
      if ( *v17 )
      {
        SRWLock = (PSRWLOCK)-50000000LL;
        SetThreadpoolTimer(v20, (PFILETIME)&SRWLock, 0, 0x3E8u);
      }
    }
    v21 = CJumpViewExperienceManager::EnsureActivationArgs((CJumpViewExperienceManager *)pv);
    v6 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x139,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v21);
LABEL_53:
      JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v39);
      goto LABEL_63;
    }
    v35 = 0LL;
    string = 0LL;
    v22 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v22 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v35);
    v6 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v23);
LABEL_51:
      v29 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_53;
    }
    SRWLock = (PSRWLOCK)v35;
    if ( v35 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v35 + 8LL))(v35);
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&JumpViewExperienceEvents::Param_LaunchArgumentString);
    v25 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&SRWLock,
            *(HSTRING *)(v24 + 24),
            a2);
    v6 = v25;
    if ( v25 < 0 )
    {
      v26 = 318LL;
      goto LABEL_49;
    }
    if ( !*((_DWORD *)pv + 42) )
    {
      v25 = CSingleViewShellExperience::Show(pv + 128, 4LL);
      v6 = v25;
      if ( v25 < 0 )
      {
        v26 = 323LL;
        goto LABEL_49;
      }
      goto LABEL_55;
    }
    v25 = CSingleViewShellExperience::NavigateView(pv + 128, 3LL);
    v6 = v25;
    if ( v25 >= 0 )
    {
      v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)&JumpViewExperienceEvents::NotifyLaunchArguments);
      v25 = CSingleViewShellExperience::Reactivate(
              (CSingleViewShellExperience *)(pv + 128),
              *(HSTRING *)(v27 + 24),
              v35,
              v28);
      v6 = v25;
      if ( v25 >= 0 )
      {
        pv[476] = 1;
LABEL_55:
        wil::ActivityBase<JumpViewProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((JumpViewProvider::ShowJumpViewActivity *)v39);
        if ( SRWLock )
          (*((void (__fastcall **)(PSRWLOCK))SRWLock->Ptr + 2))(SRWLock);
        v30 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
        }
        JumpViewProvider::ShowJumpViewActivity::~ShowJumpViewActivity((JumpViewProvider::ShowJumpViewActivity *)v39);
        v31 = *(PSRWLOCK *)v33;
        if ( *(_QWORD *)v33 )
        {
          *(_QWORD *)v33 = 0LL;
          (*((void (__fastcall **)(PSRWLOCK))v31->Ptr + 2))(v31);
        }
        return 0LL;
      }
      v26 = 330LL;
    }
    else
    {
      v26 = 328LL;
    }
LABEL_49:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
    if ( SRWLock )
      (*((void (__fastcall **)(PSRWLOCK))SRWLock->Ptr + 2))(SRWLock);
    goto LABEL_51;
  }
  return 0LL;
}
