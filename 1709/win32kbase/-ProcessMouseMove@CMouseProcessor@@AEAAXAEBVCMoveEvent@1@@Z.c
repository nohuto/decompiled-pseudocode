/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0014FB0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0013AD8 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0013B90 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?SetLogicalCursorPos@CMouseProcessor@@AEAAXUtagPOINT@@K@Z @ 0x1C00142FC (-SetLogicalCursorPos@CMouseProcessor@@AEAAXUtagPOINT@@K@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C001724C (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00173C0 (--1CInputDest@@QEAA@XZ.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0017988 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0017AD4 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0017AF0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0017D30 (IsPointerPromotedMouseMessage.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00596C0 (PhysicalToLogicalDPIPoint.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C00A7138 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetLogicalCursorPosition @ 0x1C00AA7C8 (_anonymous_namespace_--GetLogicalCursorPosition.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00AA840 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  CMouseProcessor::CMouseEvent *v2; // rdi
  PVOID *v4; // rbx
  void *v5; // r14
  char v6; // r15
  __int64 v7; // r10
  int v8; // r14d
  int v9; // edx
  int v10; // r9d
  __int64 v11; // rcx
  __int64 PtiFromInputDest; // rax
  __int64 v13; // rax
  signed int v14; // edi
  CMouseProcessor *v15; // rcx
  unsigned int HitTestContext; // eax
  LONG x; // edx
  int v18; // r9d
  PVOID DeviceExtension; // rcx
  int v20; // r8d
  __int64 LogicalCursorPosition; // rax
  unsigned int DpiAwarenessContext; // eax
  struct tagPOINT v23; // rdx
  CMouseProcessor *v24; // rcx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  struct tagPOINT v28; // [rsp+40h] [rbp-C0h] BYREF
  tagPOINT v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v31[13]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  v4 = (PVOID *)((char *)this + 8);
  v5 = &WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 39, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) != 0 )
  {
    *((_QWORD *)this + 325) = 0LL;
  }
  else
  {
    v8 = CMouseProcessor::AnalyzeNewMousePosition(this, (__int64)v2);
    if ( v8 == 1 )
    {
      v6 = 1;
      *((_QWORD *)gpsi + 617) = *(_QWORD *)(v7 + 56);
    }
    else if ( v8 == 2 )
    {
      *((_QWORD *)gpsi + 618) = *(_QWORD *)(v7 + 48);
      *((_QWORD *)gpsi + 617) = *(_QWORD *)(*(_QWORD *)v2 + 56LL);
    }
    CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2608, 0LL, 0LL);
    if ( !v8 )
    {
      v10 = 40;
LABEL_9:
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((unsigned int)*v4, v9, 10, v10, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
      return;
    }
    v5 = &WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids;
    *((_QWORD *)this + 325) = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    v11 = *(_QWORD *)v2;
    *((_QWORD *)this + 323) = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
    *((_QWORD *)this + 324) = *(_QWORD *)(v11 + 56);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) == 0 )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
    if ( (unsigned int)HasHidTable(PtiFromInputDest) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL) + 400) + 784LL)
                      + 100LL) & 2) != 0 )
      {
        v13 = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 340);
          if ( v14 < 0 )
            v14 = *(_DWORD *)(*(_QWORD *)(v13 + 400) + 280LL);
          PhysicalToLogicalDPIPoint(&v29, (char *)gpsi + 4944, (unsigned int)v14, 0LL);
          CMouseProcessor::SetLogicalCursorPos(v15, v29, v14);
        }
        v10 = 41;
        goto LABEL_9;
      }
    }
  }
  v28 = (struct tagPOINT)*((_QWORD *)gpsi + 618);
  v30 = *((_QWORD *)gpsi + 617);
  HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
  CMouseProcessor::MouseHitTest(
    (volatile signed __int32 *)this,
    v31,
    &v28,
    (__int64)&v30,
    *(_QWORD *)(*(_QWORD *)v2 + 72LL),
    0,
    HitTestContext,
    0);
  if ( !LODWORD(v31[0]) )
  {
    v18 = 42;
LABEL_21:
    LOBYTE(x) = 4;
LABEL_22:
    DeviceExtension = *v4;
    v20 = 10;
    goto LABEL_47;
  }
  if ( v6 )
  {
    LogicalCursorPosition = anonymous_namespace_::GetLogicalCursorPosition(v31);
    x = v28.x;
    if ( LogicalCursorPosition == v28 )
    {
      v18 = 43;
      goto LABEL_21;
    }
  }
  DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v31);
  CMouseProcessor::SetLogicalCursorPos(v24, v23, DpiAwarenessContext);
  if ( (unsigned int)IsPointerPromotedMouseMessage(512LL, *(_QWORD *)v2 + 80LL)
    && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 50) + 832LL), v31, v4) )
  {
    v18 = 44;
LABEL_29:
    LOBYTE(x) = 3;
    goto LABEL_22;
  }
  if ( CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
    && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)v2 + 108LL), v31, v4) )
  {
    v18 = 45;
    goto LABEL_29;
  }
  if ( !CInputDest::DoesBelongToForeground((CInputDest *)v31) )
    CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v31);
  v5 = &WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v25) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v25,
      14,
      10,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionDeferWinEventNotifySupported() >= 0 )
    EditionDeferWinEventNotify();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v26,
      14,
      11,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  CMouseProcessor::UpdateGlobalCursorOwner(
    this,
    (const struct CInputDest *)v31,
    &v28,
    (const struct tagINPUT_MESSAGE_SOURCE *)(*(_QWORD *)v2 + 80LL));
  CMouseProcessor::DetectAndApplyMouseMovePostStrategy(this, (const struct CInputDest *)v31, &v28, v2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      14,
      12,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionEndDeferWinEventNotifySupported() >= 0 )
    EditionEndDeferWinEventNotify();
  if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    goto LABEL_48;
  DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
  v18 = 13;
  v20 = 14;
  LOBYTE(x) = 5;
LABEL_47:
  WPP_RECORDER_SF_((_DWORD)DeviceExtension, x, v20, v18, (__int64)v5);
LABEL_48:
  CInputDest::~CInputDest((CInputDest *)v31);
}
