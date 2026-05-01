/*
 * XREFs of ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1800D8FB0
 * Callers:
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1800D47F0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800D7E58 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800D9474 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1800D9EB8 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D704C (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetMonitorInformation(
        __int64 **this,
        HMONITOR a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        enum EDGEUI_TRAYSTUCKPLACE *a6,
        bool *a7)
{
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 *v15; // rax
  int v16; // eax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-81h] BYREF
  _QWORD *v28; // [rsp+38h] [rbp-79h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-71h]
  RECT rcWork; // [rsp+50h] [rbp-61h]
  struct tagRECT *v31; // [rsp+60h] [rbp-51h]
  __int64 v32; // [rsp+68h] [rbp-49h]
  struct tagRECT v33; // [rsp+70h] [rbp-41h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v32 = -2LL;
  v31 = a5;
  v11 = CortanaDesktopExperienceView::EnsureImmersiveShell((CortanaDesktopExperienceView *)this);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x832,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  v28 = 0LL;
  v13 = this[14];
  v14 = *v13;
  v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
  v16 = (*(__int64 (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v14 + 24))(
          v13,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          v15);
  v12 = v16;
  if ( v16 >= 0 )
  {
    v27 = 0LL;
    v17 = v28;
    v18 = *v28;
    v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
    v20 = (*(__int64 (__fastcall **)(_QWORD *, HMONITOR, SID *, GUID *, __int64 *))(v18 + 72))(
            v17,
            a2,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v19);
    v12 = v20;
    if ( v20 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v27 + 80LL))(v27, a6);
      v12 = v20;
      if ( v20 >= 0 )
      {
        mi.cbSize = 40;
        memset(&mi.rcMonitor, 0, 0x24uLL);
        if ( !GetMonitorInfoW(a2, &mi) )
        {
          v12 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83A,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)0x8000FFFFLL);
          goto LABEL_27;
        }
        *a3 = mi.rcMonitor;
        *a7 = mi.dwFlags == 1;
        v20 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v27 + 112LL))(v27, &v33);
        v12 = v20;
        if ( v20 >= 0 )
        {
          v22 = v33.right - v33.left;
          v23 = v33.bottom - v33.top;
          v29 = v33;
          rcWork = mi.rcWork;
          if ( *(_DWORD *)a6 )
          {
            if ( *(_DWORD *)a6 == 1 )
            {
              if ( v33.top < mi.rcMonitor.top )
              {
                v29.top = mi.rcMonitor.top;
                v29.bottom = v23 + mi.rcMonitor.top;
                rcWork.top = v23 + mi.rcMonitor.top;
              }
            }
            else if ( *(_DWORD *)a6 == 2 )
            {
              if ( v33.right > mi.rcMonitor.right )
              {
                v29.right = mi.rcMonitor.right;
                v29.left = mi.rcMonitor.right - v22;
                rcWork.right = mi.rcMonitor.right - v22;
              }
            }
            else if ( *(_DWORD *)a6 == 3 && v33.bottom > mi.rcMonitor.bottom )
            {
              v29.bottom = mi.rcMonitor.bottom;
              v29.top = mi.rcMonitor.bottom - v23;
              rcWork.bottom = mi.rcMonitor.bottom - v23;
            }
          }
          else if ( v33.left < mi.rcMonitor.left )
          {
            v29.left = mi.rcMonitor.left;
            v29.right = v22 + mi.rcMonitor.left;
            rcWork.left = v22 + mi.rcMonitor.left;
          }
          *a4 = rcWork;
          *v31 = v29;
          v12 = 0;
          goto LABEL_27;
        }
        v21 = 2113LL;
      }
      else
      {
        v21 = 2103LL;
      }
    }
    else
    {
      v21 = 2102LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v20);
LABEL_27:
    v24 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x834,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v16);
LABEL_29:
  v25 = (__int64)v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v12;
}
