/*
 * XREFs of ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180170D04
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801712A8 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801719EC (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
        CShoulderTapExperienceManager *this,
        enum EDGEUI_TRAYSTUCKPLACE *a2)
{
  __int64 v4; // rbx
  PCWSTR StringRawBuffer; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  HMONITOR v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v15[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  UINT32 length; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v18 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  length = 0;
  v4 = *((_QWORD *)this + 31);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 32), &length);
  v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v4 + 112LL))(v4, StringRawBuffer, &rc);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v8 = *((_QWORD *)this + 30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v9 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &v16);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      return v7;
    }
    v10 = MonitorFromRect(&rc, 1u);
    *(_QWORD *)v15 = 0LL;
    v11 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v11 + 72LL))(
            v11,
            v10,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v15);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v15 + 80LL))(
              *(_QWORD *)v15,
              a2);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v7 = 0;
        goto LABEL_11;
      }
      v13 = 174LL;
    }
    else
    {
      v13 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
