/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177740 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F81A0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800F9DC8 (--1RoVariant@@QEAA@XZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x1800F9E00 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ?VerifyPV@Accessor@RoVariant@@AEBAJXZ @ 0x1800F9F00 (-VerifyPV@Accessor@RoVariant@@AEBAJXZ.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x180176204 (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180176E14 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180176E50 (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x180309520 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  struct tagPOINT v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int Int32; // eax
  int v20; // r15d
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ebx
  int MonitorInformation; // eax
  struct tagRECT v28; // xmm6
  int v29; // eax
  int v30; // eax
  int *v32; // [rsp+28h] [rbp-99h]
  struct tagRECT v33; // [rsp+48h] [rbp-79h] BYREF
  int v34; // [rsp+58h] [rbp-69h] BYREF
  struct tagPOINT v35; // [rsp+60h] [rbp-61h] BYREF
  LONG v36; // [rsp+68h] [rbp-59h]
  int v37[2]; // [rsp+70h] [rbp-51h] BYREF
  int v38; // [rsp+78h] [rbp-49h]
  __int64 v39; // [rsp+80h] [rbp-41h] BYREF
  struct tagPOINT v40; // [rsp+88h] [rbp-39h] BYREF
  LONG x; // [rsp+90h] [rbp-31h]
  struct Windows::Foundation::Size *v42[2]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v43[24]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-1h]
  struct tagRECT v45; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v42[1] = (struct Windows::Foundation::Size *)-2LL;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v39 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v39);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 635LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_33;
  }
  v35 = 0LL;
  v36 = 0;
  v8 = v39;
  *(_QWORD *)&v33.left = &v35;
  *(_QWORD *)&v33.right = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)v43,
         (const WCHAR **)&JumpViewExperienceEvents::Param_Position);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, LONG *))(*(_QWORD *)v8 + 48LL))(v8, *(_QWORD *)(v9 + 24), &v33.right);
  v44 = 0LL;
  RoVariant::RoVariant((RoVariant *)&v40, *(struct IInspectable **)&v33.right);
  v10 = v35;
  v35 = v40;
  v40 = v10;
  v10.x = v36;
  v36 = x;
  x = v10.x;
  RoVariant::~RoVariant((RoVariant *)&v40);
  if ( v5 >= 0 )
  {
    *(struct tagPOINT *)&v33.left = v35;
    v33.right = v36;
    v40 = 0LL;
    *(_QWORD *)v37 = 0LL;
    v5 = RoVariant::Accessor::VerifyPV((RoVariant::Accessor *)&v33);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 184LL))(v12, v37);
    if ( v5 < 0 )
    {
      v11 = 641LL;
      goto LABEL_10;
    }
    v40.x = (int)*(float *)v37;
    v40.y = (int)*(float *)&v37[1];
    RoVariant::~RoVariant((RoVariant *)&v35);
    v35 = 0LL;
    v36 = 0;
    v13 = v39;
    *(_QWORD *)&v33.left = &v35;
    *(_QWORD *)&v33.right = 0LL;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v43,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, LONG *))(*(_QWORD *)v13 + 48LL))(
           v13,
           *(_QWORD *)(v14 + 24),
           &v33.right);
    v44 = 0LL;
    v15 = *(__int64 **)&v33.left;
    RoVariant::RoVariant((RoVariant *)v37, *(struct IInspectable **)&v33.right);
    v16 = *v15;
    *v15 = *(_QWORD *)v37;
    *(_QWORD *)v37 = v16;
    LODWORD(v16) = *((_DWORD *)v15 + 2);
    *((_DWORD *)v15 + 2) = v38;
    v38 = v16;
    RoVariant::~RoVariant((RoVariant *)v37);
    if ( v5 < 0 )
    {
      v17 = (unsigned int)v5;
      v18 = 650LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)v17);
      goto LABEL_16;
    }
    *(struct tagPOINT *)&v33.left = v35;
    v33.right = v36;
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v33, &v34);
    v5 = Int32;
    if ( Int32 < 0 )
    {
      v17 = (unsigned int)Int32;
      v18 = 653LL;
      goto LABEL_15;
    }
    v20 = v34;
    RoVariant::~RoVariant((RoVariant *)&v35);
    v35 = 0LL;
    v36 = 0;
    v21 = v39;
    *(_QWORD *)&v33.left = &v35;
    *(_QWORD *)&v33.right = 0LL;
    v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)v43,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, LONG *))(*(_QWORD *)v21 + 48LL))(
           v21,
           *(_QWORD *)(v22 + 24),
           &v33.right);
    v44 = 0LL;
    v23 = *(__int64 **)&v33.left;
    RoVariant::RoVariant((RoVariant *)v37, *(struct IInspectable **)&v33.right);
    v24 = *v23;
    *v23 = *(_QWORD *)v37;
    *(_QWORD *)v37 = v24;
    LODWORD(v24) = *((_DWORD *)v23 + 2);
    *((_DWORD *)v23 + 2) = v38;
    v38 = v24;
    RoVariant::~RoVariant((RoVariant *)v37);
    if ( v5 < 0 )
    {
      v17 = (unsigned int)v5;
      v18 = 660LL;
      goto LABEL_15;
    }
    *(struct tagPOINT *)&v33.left = v35;
    v33.right = v36;
    v25 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v33, &v34);
    v5 = v25;
    if ( v25 < 0 )
    {
      v17 = (unsigned int)v25;
      v18 = 663LL;
      goto LABEL_15;
    }
    v26 = v34;
    RoVariant::~RoVariant((RoVariant *)&v35);
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v40,
                           &v33,
                           (unsigned int *)v42,
                           (CJumpViewExperienceManager *)((char *)this + 464));
    v5 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v6 = (unsigned int)MonitorInformation;
      v7 = 672LL;
      goto LABEL_32;
    }
    v28 = v33;
    *((struct tagRECT *)this + 30) = v33;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)LODWORD(v42[0]),
      (int)&v34,
      v37,
      v32);
    if ( v34 <= 0 || v37[0] <= 0 )
    {
      v5 = -2147024809;
      v6 = 2147942487LL;
      v7 = 682LL;
      goto LABEL_32;
    }
    v33 = v28;
    v29 = CJumpViewExperienceManager::CalcWindowPosition(&v33.left, *(_QWORD *)&v40, v34, v37[0], v20, v26, &v45);
    v5 = v29;
    if ( v29 < 0 )
    {
      v6 = (unsigned int)v29;
      v7 = 685LL;
      goto LABEL_32;
    }
    v30 = CSingleViewShellExperience::SetPosition(a2, &v45);
    v5 = v30;
    if ( v30 < 0 )
    {
      v6 = (unsigned int)v30;
      v7 = 686LL;
      goto LABEL_32;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
    return 0LL;
  }
  v11 = 638LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_16:
  RoVariant::~RoVariant((RoVariant *)&v35);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v39);
  return (unsigned int)v5;
}
