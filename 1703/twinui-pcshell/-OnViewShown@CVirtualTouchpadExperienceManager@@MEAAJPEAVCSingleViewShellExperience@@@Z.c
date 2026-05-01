/*
 * XREFs of ?OnViewShown@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B8380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800B84E8 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualTouchpadExperienceManager::OnViewShown(
        CVirtualTouchpadExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CVirtualTouchpadExperienceManager *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char v7; // al
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = (CVirtualTouchpadExperienceManager *)((char *)this - 48);
  v12 = (char *)this - 48;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v9, &v12);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 37) + 104LL))(
         *((_QWORD *)this + 37),
         *((_QWORD *)this + 4));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 727LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    v7 = v10;
    goto LABEL_11;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 37) + 128LL))(*((_QWORD *)this + 37), 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 729LL;
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 112LL))(*((_QWORD *)this + 37));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 730LL;
    goto LABEL_9;
  }
  v4 = CVirtualTouchpadExperienceManager::Uncloack(v3, (CVirtualTouchpadExperienceManager *)((char *)this + 312));
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 734LL;
    goto LABEL_9;
  }
  *((_DWORD *)this + 172) = 2;
  v7 = 0;
  v5 = 0;
LABEL_11:
  if ( v7 )
    *(_DWORD *)(v9 + 736) = 0;
  return v5;
}
