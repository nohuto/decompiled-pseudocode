/*
 * XREFs of ?GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18016E818
 * Callers:
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18016F3C8 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetAppBarPositionForMonitor(
        CPeopleBarJumpViewExperienceManager *this,
        HMONITOR a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v15[1] = -2LL;
  *(_DWORD *)a4 = -1;
  if ( SetRectEmpty(a3) )
  {
    v15[0] = 0LL;
    v9 = *((_QWORD *)this + 34);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    v10 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
            v9,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      return v8;
    }
    v17 = 0LL;
    v11 = v15[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(*(_QWORD *)v11 + 72LL))(
            v11,
            a2,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            &v17);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v17 + 80LL))(v17, a4);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v17 + 168LL))(v17, a3);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v8 = 0;
          goto LABEL_13;
        }
        v13 = 393LL;
      }
      else
      {
        v13 = 392LL;
      }
    }
    else
    {
      v13 = 390LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_14;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x180,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)0x80070057LL);
  return v8;
}
