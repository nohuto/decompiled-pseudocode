/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x18016EB4C (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int String; // eax
  __int64 v15; // [rsp+28h] [rbp-29h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-21h] BYREF
  struct IInspectable *v17; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-11h] BYREF
  int v19; // [rsp+48h] [rbp-9h]
  __int64 v20; // [rsp+50h] [rbp-1h] BYREF
  int v21; // [rsp+58h] [rbp+7h]
  __int64 v22; // [rsp+60h] [rbp+Fh]
  _BYTE v23[24]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v24; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v22 = -2LL;
  v15 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v15);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)((char *)this - 64), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 495LL;
      goto LABEL_5;
    }
    v18 = 0LL;
    v19 = 0;
    v7 = v15;
    v16 = &v18;
    v17 = 0LL;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)v23,
           (const WCHAR **)&JumpViewExperienceEvents::Param_Title);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IInspectable **))(*(_QWORD *)v7 + 48LL))(
           v7,
           *(_QWORD *)(v8 + 24),
           &v17);
    v24 = 0LL;
    v9 = v16;
    RoVariant::RoVariant((RoVariant *)&v20, v17);
    v10 = *v9;
    *v9 = v20;
    v20 = v10;
    LODWORD(v10) = *((_DWORD *)v9 + 2);
    *((_DWORD *)v9 + 2) = v21;
    v21 = v10;
    RoVariant::~RoVariant((RoVariant *)&v20);
    if ( v5 >= 0 )
    {
      if ( v18
        && (WindowsDeleteString(*((HSTRING *)this + 41)),
            *((_QWORD *)this + 41) = 0LL,
            v16 = v18,
            LODWORD(v17) = v19,
            String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v16, (HSTRING *)this + 41),
            v5 = String,
            String < 0) )
      {
        v12 = 501LL;
      }
      else
      {
        if ( !*((_BYTE *)this + 412)
          || (*((_BYTE *)this + 412) = 0,
              String = CSingleViewShellExperience::Show(
                         (__int64)this + 64,
                         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4),
              v5 = String,
              String >= 0) )
        {
          v5 = 0;
          goto LABEL_17;
        }
        v12 = 509LL;
      }
      v11 = (unsigned int)String;
    }
    else
    {
      v11 = (unsigned int)v5;
      v12 = 498LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v11);
LABEL_17:
    RoVariant::~RoVariant((RoVariant *)&v18);
    goto LABEL_18;
  }
  v6 = 479LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return (unsigned int)v5;
}
