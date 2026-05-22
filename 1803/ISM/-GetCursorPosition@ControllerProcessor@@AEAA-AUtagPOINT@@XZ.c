/*
 * XREFs of ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180034274
 * Callers:
 *     _lambda_c3ab10beb6b1aadf1357327b164eb3e9_::_lambda_invoker_cdecl_ @ 0x1800328F0 (_lambda_c3ab10beb6b1aadf1357327b164eb3e9_--_lambda_invoker_cdecl_.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180033498 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180033A24 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180034440 (-CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ.c)
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1800347D0 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x180034CB4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ @ 0x180035DF0 (-UpdateControllerNavigationMode@ControllerProcessor@@AEAAXXZ.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x18003641C (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct tagPOINT __fastcall ControllerProcessor::GetCursorPosition(ControllerProcessor *this, struct tagPOINT *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    GetCursorPos(a2);
  }
  else
  {
    v4 = *((_QWORD *)this + 861);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, struct tagPOINT *, LONG *))(*(_QWORD *)v4 + 32LL))(v4, a2, &a2->y);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x562,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        JUMPOUT(0x1800342EALL);
      }
    }
  }
  return (struct tagPOINT)a2;
}
