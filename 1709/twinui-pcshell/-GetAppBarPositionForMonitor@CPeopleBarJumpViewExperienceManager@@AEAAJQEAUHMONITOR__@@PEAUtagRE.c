/*
 * XREFs of ?GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800B211C
 * Callers:
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800B1E6C (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetAppBarPositionForMonitor(
        CPeopleBarJumpViewExperienceManager *this,
        HMONITOR a2,
        struct tagRECT *a3,
        enum EDGEUI_TRAYSTUCKPLACE *a4)
{
  unsigned int v8; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v24; // [rsp+78h] [rbp+20h] BYREF

  v22[1] = -2LL;
  *(_DWORD *)a4 = -1;
  if ( !SetRectEmpty(a3) )
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)0x80070057LL);
    return v8;
  }
  v22[0] = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 34);
  v10 = *v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v22);
  v12 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v10 + 24))(
          v9,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v11);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v24 = 0LL;
    v13 = v22[0];
    v14 = *(_QWORD *)v22[0];
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    v16 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, __int64 *))(v14 + 72))(
            v13,
            a2,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v15);
    v8 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v24 + 80LL))(v24, a4);
      v8 = v16;
      if ( v16 >= 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v24 + 168LL))(v24, a3);
        v8 = v18;
        if ( v18 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x186,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
        goto LABEL_12;
      }
      v17 = 389LL;
    }
    else
    {
      v17 = 387LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
LABEL_12:
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x180,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_14:
  v20 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v8;
}
