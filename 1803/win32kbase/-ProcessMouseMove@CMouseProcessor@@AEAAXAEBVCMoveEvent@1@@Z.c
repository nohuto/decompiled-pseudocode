/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00382A0 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0036ED4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C0036F08 (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0037598 (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0039794 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0039E64 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C003F988 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0057AE0 (PhysicalToLogicalDPIPoint.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0060044 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0060194 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C00601B0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0065398 (IsPointerPromotedMouseMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0 (_anonymous_namespace_--InMouseRawInputMode.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  CMouseProcessor::CMouseEvent *v2; // rsi
  __int64 *v4; // r14
  char v5; // di
  char v6; // r12
  int v7; // eax
  __int64 v8; // r10
  int v9; // r15d
  int v10; // r9d
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 PtiFromInputDest; // rax
  int v14; // edi
  unsigned int HitTestContext; // eax
  int v16; // edx
  unsigned __int16 v17; // ax
  LONG x; // eax
  __int64 v19; // rcx
  int DpiAwarenessContext; // eax
  __int64 v21; // rdx
  void *v22; // rdx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  struct tagPOINT v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  int v29; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v33[12]; // [rsp+80h] [rbp-80h] BYREF

  v2 = a2;
  v4 = (__int64 *)((char *)this + 8);
  v5 = 4;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 39, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) != 0 )
  {
    *((_QWORD *)this + 307) = 0LL;
  }
  else
  {
    v7 = CMouseProcessor::AnalyzeNewMousePosition(this, (__int64)v2);
    v9 = v7;
    if ( v7 == 1 )
    {
      v6 = 1;
      *((_QWORD *)gpsi + 619) = *(_QWORD *)(v8 + 56);
    }
    else if ( v7 == 2 )
    {
      *((_QWORD *)gpsi + 620) = *(_QWORD *)(v8 + 48);
      *((_QWORD *)gpsi + 619) = *(_QWORD *)(*(_QWORD *)v2 + 56LL);
    }
    CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2464, 0LL, 0LL);
    if ( !v9 )
    {
      v10 = 40;
LABEL_9:
      v11 = &WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids;
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(*v4, (_DWORD)v11, 10, v10, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
      return;
    }
    *((_QWORD *)this + 307) = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    v12 = *(_QWORD *)v2;
    *((_QWORD *)this + 305) = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
    *((_QWORD *)this + 306) = *(_QWORD *)(v12 + 56);
  }
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x1000) == 0
    && (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1LL) )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
    if ( PtiFromInputDest )
    {
      v14 = *(_DWORD *)(PtiFromInputDest + 340);
      if ( v14 < 0 )
        v14 = *(_DWORD *)(*(_QWORD *)(PtiFromInputDest + 416) + 280LL);
      PhysicalToLogicalDPIPoint(&v30, (char *)gpsi + 4960, (unsigned int)v14, 0LL);
      v28 = v30;
      *(_QWORD *)((char *)this + 100) = v30;
      *((_DWORD *)this + 27) = v14;
    }
    v10 = 41;
    goto LABEL_9;
  }
  v27 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v32 = *((_QWORD *)gpsi + 619);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1);
  HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
  CMouseProcessor::MouseHitTest(
    (__int64)this,
    v33,
    &v27,
    (__int64)&v32,
    *(_QWORD *)(*(_QWORD *)v2 + 72LL),
    0,
    HitTestContext,
    v16,
    0LL,
    0LL);
  if ( !LODWORD(v33[0]) )
  {
    v17 = 42;
LABEL_24:
    v19 = *((_QWORD *)this + 1);
    goto LABEL_33;
  }
  if ( v6 )
  {
    CInputDest::GetDpiAwarenessContext((CInputDest *)v33);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (unsigned int)v31);
    x = v27.x;
    if ( v31[0] == v27.x && v31[1] == v27.y )
    {
      v17 = 43;
      goto LABEL_24;
    }
  }
  else
  {
    x = v27.x;
  }
  v28 = __PAIR64__(v27.y, x);
  DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v33);
  *(_QWORD *)((char *)this + 100) = v28;
  *((_DWORD *)this + 27) = DpiAwarenessContext;
  v21 = *(_QWORD *)v2 + 80LL;
  v29 = DpiAwarenessContext;
  if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, v21)
    || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v33, v4) )
  {
    if ( !CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
      || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)v2 + 108LL), v33, v4) )
    {
      if ( !CInputDest::DoesBelongToForeground((CInputDest *)v33) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v33);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v23) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          15,
          10,
          (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
      }
      if ( (int)IsEditionDeferWinEventNotifySupported() >= 0 )
        EditionDeferWinEventNotify();
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v24) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          15,
          11,
          (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
      }
      CMouseProcessor::UpdateGlobalCursorOwner(
        this,
        (const struct CInputDest *)v33,
        &v27,
        (const struct tagINPUT_MESSAGE_SOURCE *)(*(_QWORD *)v2 + 80LL));
      CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        this,
        (const struct CInputDest *)v33,
        (const struct tagLOGICALPOINT *)&v28,
        v2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v25) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          15,
          12,
          (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
      }
      if ( (int)IsEditionEndDeferWinEventNotifySupported() >= 0 )
        EditionEndDeferWinEventNotify();
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v26) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v26,
          15,
          13,
          (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
      }
      goto LABEL_48;
    }
    v17 = 45;
  }
  else
  {
    v17 = 44;
  }
  v5 = 3;
  v19 = *v4;
LABEL_33:
  v22 = &WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids;
  LOBYTE(v22) = v5;
  WPP_RECORDER_SF_(v19, (_DWORD)v22, 10, v17, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
LABEL_48:
  CInputDest::~CInputDest((CInputDest *)v33);
}
