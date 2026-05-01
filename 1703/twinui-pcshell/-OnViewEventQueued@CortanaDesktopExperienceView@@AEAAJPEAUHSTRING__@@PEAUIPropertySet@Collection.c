/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C4124
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1800C4030 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x1800179F8 (--$_GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BAC4 (--1-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009C6B8 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009CAC8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x18009E9C0 (--$Start@PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@SA-AV01@$$QEAPEB.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800C211C (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800C6524 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800C7A78 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C82DC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C8318 (-EnsureForegroundRightsForAmbientModeIfNeeded@CortanaDesktopExperienceView@@AEAAXXZ.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800C8520 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaDesktopExperienceView *this,
        HSTRING string1,
        WCHAR *a3)
{
  HSTRING_HEADER *v6; // rax
  HRESULT v7; // eax
  __int64 v8; // rdx
  HSTRING_HEADER *v9; // rax
  HRESULT v10; // eax
  HSTRING_HEADER *v11; // rax
  HRESULT v12; // eax
  HSTRING_HEADER *v13; // rax
  HRESULT v14; // eax
  HSTRING_HEADER *v15; // rax
  HRESULT v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  HSTRING_HEADER *v20; // rax
  HRESULT v21; // eax
  void (*v22)(void); // rax
  HSTRING_HEADER *v23; // rax
  HRESULT v24; // eax
  HSTRING_HEADER *v25; // rdi
  struct Windows::Foundation::IPropertyValue *v26; // r8
  int v27; // edi
  HSTRING_HEADER *v28; // rax
  HRESULT v29; // eax
  HSTRING_HEADER *v30; // rax
  HRESULT v31; // eax
  HSTRING_HEADER *v32; // rax
  HRESULT v33; // eax
  HSTRING_HEADER *v34; // rax
  HRESULT v35; // eax
  HSTRING_HEADER *v36; // rax
  HRESULT v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  PCWSTR result; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int8 v41[8]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-D0h]
  HSTRING_HEADER v43; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v44[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v42 = -2LL;
  result = WindowsGetStringRawBuffer(string1, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::Start<unsigned short const *>(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v44,
    &result);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD178);
  LODWORD(result) = 0;
  v7 = WindowsCompareStringOrdinal(string1, (HSTRING)v6[1].Reserved.Reserved1, (INT32 *)&result);
  if ( v7 >= 0 )
  {
    if ( !(_DWORD)result )
    {
      v8 = 0LL;
LABEL_13:
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 80LL))(*((_QWORD *)this + 12), v8);
      goto LABEL_52;
    }
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD180);
    LODWORD(result) = 0;
    v10 = WindowsCompareStringOrdinal(string1, (HSTRING)v9[1].Reserved.Reserved1, (INT32 *)&result);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      __debugbreak();
    }
    if ( !(_DWORD)result )
    {
      v8 = 1LL;
      goto LABEL_13;
    }
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD168);
    LODWORD(result) = 0;
    v12 = WindowsCompareStringOrdinal(string1, (HSTRING)v11[1].Reserved.Reserved1, (INT32 *)&result);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      __debugbreak();
    }
    if ( !(_DWORD)result )
    {
      v8 = 2LL;
      goto LABEL_13;
    }
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD170);
    LODWORD(result) = 0;
    v14 = WindowsCompareStringOrdinal(string1, (HSTRING)v13[1].Reserved.Reserved1, (INT32 *)&result);
    if ( v14 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      __debugbreak();
    }
    if ( !(_DWORD)result )
    {
      v8 = 3LL;
      goto LABEL_13;
    }
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD158);
    LODWORD(result) = 0;
    v16 = WindowsCompareStringOrdinal(string1, (HSTRING)v15[1].Reserved.Reserved1, (INT32 *)&result);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      __debugbreak();
    }
    if ( !(_DWORD)result )
    {
      v17 = CortanaDesktopExperienceView::DismissCortanaApp(this);
      if ( v17 >= 0 )
        goto LABEL_52;
      v18 = (unsigned int)v17;
      v19 = 972LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v18);
LABEL_53:
      v44[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
      wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v44);
      wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v44);
      return;
    }
    v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD160);
    LODWORD(result) = 0;
    v21 = WindowsCompareStringOrdinal(string1, (HSTRING)v20[1].Reserved.Reserved1, (INT32 *)&result);
    if ( v21 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      __debugbreak();
    }
    if ( (_DWORD)result )
    {
      v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD148);
      LODWORD(result) = 0;
      v24 = WindowsCompareStringOrdinal(string1, (HSTRING)v23[1].Reserved.Reserved1, (INT32 *)&result);
      if ( v24 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
        __debugbreak();
      }
      if ( !(_DWORD)result )
      {
        v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD118);
        result = a3;
        if ( a3 )
          (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)a3 + 8LL))(a3);
        v27 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<unsigned char>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&result,
                (HSTRING)v25[1].Reserved.Reserved1,
                v26,
                (__int64)v41);
        if ( result )
          (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)result + 16LL))(result);
        if ( v27 >= 0 )
        {
          CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, v41[0]);
          goto LABEL_52;
        }
        v18 = (unsigned int)v27;
        v19 = 983LL;
        goto LABEL_29;
      }
      v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD150);
      LODWORD(result) = 0;
      v29 = WindowsCompareStringOrdinal(string1, (HSTRING)v28[1].Reserved.Reserved1, (INT32 *)&result);
      if ( v29 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29);
        __debugbreak();
      }
      if ( (_DWORD)result )
      {
        v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD138);
        LODWORD(result) = 0;
        v31 = WindowsCompareStringOrdinal(string1, (HSTRING)v30[1].Reserved.Reserved1, (INT32 *)&result);
        if ( v31 < 0 )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31);
          __debugbreak();
        }
        if ( (_DWORD)result )
        {
          v32 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD140);
          LODWORD(result) = 0;
          v33 = WindowsCompareStringOrdinal(string1, (HSTRING)v32[1].Reserved.Reserved1, (INT32 *)&result);
          if ( v33 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
            __debugbreak();
          }
          if ( (_DWORD)result )
          {
            v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD128);
            LODWORD(result) = 0;
            v35 = WindowsCompareStringOrdinal(string1, (HSTRING)v34[1].Reserved.Reserved1, (INT32 *)&result);
            if ( v35 < 0 )
            {
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
              __debugbreak();
            }
            if ( (_DWORD)result )
            {
              v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, (const WCHAR **)&off_1801BD130);
              LODWORD(result) = 0;
              v37 = WindowsCompareStringOrdinal(string1, (HSTRING)v36[1].Reserved.Reserved1, (INT32 *)&result);
              if ( v37 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
                __debugbreak();
              }
              if ( !(_DWORD)result )
              {
                v38 = 13;
                if ( (unsigned int)(*((_DWORD *)this + 33) - 3) <= 1 && *((_BYTE *)this + 202) )
                  v38 = CortanaHelpers::AllowCortanaAboveLock() != 0 ? 18 : 13;
                v39 = CortanaDesktopExperienceView::SetZBand(this, v38);
                if ( v39 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x49F,
                    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
                    (const char *)(unsigned int)v39);
                CortanaDesktopExperienceView::EnsureForegroundRightsForAmbientModeIfNeeded(this);
              }
              goto LABEL_52;
            }
            *((_BYTE *)this + 208) = 0;
          }
          CortanaDesktopExperienceView::ShowBorder(this, 0LL);
LABEL_52:
          wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v44);
          goto LABEL_53;
        }
        *((_BYTE *)this + 196) = 0;
        v22 = *(void (**)(void))(**((_QWORD **)this + 12) + 48LL);
      }
      else
      {
        *((_BYTE *)this + 196) = 1;
        v22 = *(void (**)(void))(**((_QWORD **)this + 12) + 40LL);
      }
    }
    else
    {
      CortanaDesktopExperienceView::SetExplicitDimissEnabled(this, 0);
      v22 = *(void (**)(void))(**((_QWORD **)this + 12) + 112LL);
    }
    v22();
    goto LABEL_52;
  }
  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
}
