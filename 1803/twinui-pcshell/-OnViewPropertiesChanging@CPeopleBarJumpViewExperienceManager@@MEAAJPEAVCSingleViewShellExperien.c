/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016EF20
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
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18016F3C8 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rbx
  PCWSTR StringRawBuffer; // rax
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int String; // eax
  __int64 v18; // [rsp+28h] [rbp-29h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-21h] BYREF
  int v20; // [rsp+38h] [rbp-19h]
  _QWORD *v21; // [rsp+40h] [rbp-11h] BYREF
  struct IInspectable *v22; // [rsp+48h] [rbp-9h] BYREF
  __int64 v23; // [rsp+50h] [rbp-1h] BYREF
  int v24; // [rsp+58h] [rbp+7h]
  __int64 v25; // [rsp+60h] [rbp+Fh]
  _BYTE v26[24]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v27; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v25 = -2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 74) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 75) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 27);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL))(
           v4,
           StringRawBuffer,
           (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 264LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v6 < 0 )
    {
      v7 = 265LL;
      goto LABEL_4;
    }
    v18 = 0LL;
    v9 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      return (unsigned int)v10;
    }
    v19 = 0LL;
    v20 = 0;
    v11 = v18;
    v21 = &v19;
    v22 = 0LL;
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, (const WCHAR **)&off_18034C478);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IInspectable **))(*(_QWORD *)v11 + 48LL))(
            v11,
            *(_QWORD *)(v12 + 24),
            &v22);
    v27 = 0LL;
    v13 = v21;
    RoVariant::RoVariant((RoVariant *)&v23, v22);
    v14 = *v13;
    *v13 = v23;
    v23 = v14;
    LODWORD(v14) = *((_DWORD *)v13 + 2);
    *((_DWORD *)v13 + 2) = v24;
    v24 = v14;
    RoVariant::~RoVariant((RoVariant *)&v23);
    if ( v10 < 0 )
    {
      v15 = (unsigned int)v10;
      v16 = 271LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v15);
      RoVariant::~RoVariant((RoVariant *)&v19);
      goto LABEL_18;
    }
    if ( v19 )
    {
      WindowsDeleteString(*((HSTRING *)this + 38));
      *((_QWORD *)this + 38) = 0LL;
      v21 = v19;
      LODWORD(v22) = v20;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v21, (HSTRING *)this + 38);
      v10 = String;
      if ( String < 0 )
      {
        v16 = 274LL;
LABEL_16:
        v15 = (unsigned int)String;
        goto LABEL_17;
      }
    }
    String = CSingleViewShellExperience::Show(
               (__int64)this + 8,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
    v10 = String;
    if ( String < 0 )
    {
      v16 = 277LL;
      goto LABEL_16;
    }
    RoVariant::~RoVariant((RoVariant *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  return 0LL;
}
