/*
 * XREFs of ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18018C2BC
 * Callers:
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094E00 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094F40 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1800B84E8 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__&___ptr64_::Run @ 0x1800B9AC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c3a81127ec11b603f32deec9cb27abe__-___ptr64.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C46B0 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C4B50 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::End(CExperienceManagerAnimationHelper *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)this )
    return 0LL;
  *(_BYTE *)this = 0;
  v1 = DwmpEndTransitionRequest(*((unsigned int *)this + 1));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xA1,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
