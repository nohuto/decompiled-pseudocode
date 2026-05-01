/*
 * XREFs of ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800236D8
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180022E5C (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F4EFC (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F51D4 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1802BF250 (-DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x1802C0744 (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 *     ?_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMonitor@@PEAU3@@Z @ 0x1802C0FAC (-_FixRectForWorkArea@CDesktopPositioner@@AEAAJW4PositionScenario@@AEBUtagRECT@@PEAUIImmersiveMon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_GetWorkAreaFromRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagRECT *a3)
{
  POINT v6; // rcx
  HMONITOR v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  LONG top; // ecx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  POINT v19; // [rsp+58h] [rbp+28h]

  v16 = -2;
  SetRectEmpty(a3);
  v18 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    top = a2->top;
    v19.x = a2->left;
    v19.y = top;
    v6 = v19;
  }
  v18 = 0LL;
  v7 = MonitorFromPoint(v6, 1u);
  v8 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, __int64 *))(**((_QWORD **)this + 22) + 48LL))(
         *((_QWORD *)this + 22),
         v7,
         &v18);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3AD,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8,
      -2);
  else
    v9 = 0;
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v9,
      v16);
    v14 = v9;
    v15 = 969LL;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v18 + 88LL))(v18, a3);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    v14 = (unsigned int)v10;
    v15 = 970LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v14,
    v16);
LABEL_8:
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
