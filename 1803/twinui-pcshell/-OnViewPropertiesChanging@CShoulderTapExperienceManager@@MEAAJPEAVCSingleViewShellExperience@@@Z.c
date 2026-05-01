/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180170F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801712A8 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801719EC (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  bool v3; // si
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  bool v7; // di
  __int64 v8; // rcx
  CShoulderTapExperienceManager *v9; // rbx
  __int64 v10; // rbx
  bool v11; // di
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  bool v15; // di
  __int64 *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v20; // [rsp+28h] [rbp-29h] BYREF
  int v21; // [rsp+30h] [rbp-21h]
  __int64 *v22; // [rsp+38h] [rbp-19h]
  struct IInspectable *v23; // [rsp+40h] [rbp-11h] BYREF
  __int64 v24; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1h] BYREF
  int v26; // [rsp+58h] [rbp+7h]
  __int64 v27; // [rsp+60h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+17h] BYREF
  __int64 v29; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v27 = -2LL;
  v3 = 0;
  if ( *((_QWORD *)a2 + 3) )
  {
    v24 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           &v24);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      return v5;
    }
    v25 = 0LL;
    v26 = 0;
    v6 = v24;
    v22 = &v25;
    v23 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FirstLoadComplete", 0x12u, 0x11u);
    v7 = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v6 + 48LL))(v6, v29, &v23) >= 0;
    v29 = 0LL;
    RoVariant::RoVariant((RoVariant *)&v20, v23);
    v8 = v25;
    v25 = v20;
    v20 = v8;
    LODWORD(v8) = v26;
    v26 = v21;
    v21 = v8;
    RoVariant::~RoVariant((RoVariant *)&v20);
    if ( v7 )
    {
      v9 = (CShoulderTapExperienceManager *)((char *)this - 32);
LABEL_9:
      v5 = CShoulderTapExperienceManager::Reactivate(v9, v3);
LABEL_13:
      RoVariant::~RoVariant((RoVariant *)&v25);
      goto LABEL_14;
    }
    v10 = v24;
    v22 = &v25;
    v23 = 0LL;
    v29 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PositionShoulderTap", 0x14u, 0x13u);
    v11 = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v10 + 48LL))(v10, v29, &v23) >= 0;
    v29 = 0LL;
    v12 = v22;
    RoVariant::RoVariant((RoVariant *)&v20, v23);
    v13 = *v12;
    *v12 = v20;
    v20 = v13;
    LODWORD(v13) = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = v21;
    v21 = v13;
    RoVariant::~RoVariant((RoVariant *)&v20);
    if ( v11 )
    {
      v9 = (CShoulderTapExperienceManager *)((char *)this - 32);
      if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
      {
        v3 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v14 = v24;
      v22 = &v25;
      v23 = 0LL;
      v29 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AnimationComplete", 0x12u, 0x11u);
      v15 = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v14 + 48LL))(v14, v29, &v23) >= 0;
      v29 = 0LL;
      v16 = v22;
      RoVariant::RoVariant((RoVariant *)&v20, v23);
      v17 = *v16;
      *v16 = v20;
      v20 = v17;
      LODWORD(v17) = *((_DWORD *)v16 + 2);
      *((_DWORD *)v16 + 2) = v21;
      v21 = v17;
      RoVariant::~RoVariant((RoVariant *)&v20);
      if ( v15 )
      {
        v18 = CSingleViewShellExperience::Hide((__int64)this + 8, 0LL);
        v5 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_13;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  return 0LL;
}
