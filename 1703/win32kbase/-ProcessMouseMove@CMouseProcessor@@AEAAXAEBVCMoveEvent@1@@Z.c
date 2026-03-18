/*
 * XREFs of ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0
 * Callers:
 *     ?ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0046180 (-ComputeAndDeliverMouseMove@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0047A94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0045090 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00451D0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C004545C (-AnalyzeNewMousePosition@CMouseProcessor@@AEBA-AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C00454AC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 *     ?MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045C28 (-MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetMonitorDpiFlags@CInputDest@@QEBAKXZ @ 0x1C0047E80 (-GetMonitorDpiFlags@CInputDest@@QEBAKXZ.c)
 *     ?GetDpiAwareness@CInputDest@@QEBAKXZ @ 0x1C0047ED8 (-GetDpiAwareness@CInputDest@@QEBAKXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00497D8 (IsPointerPromotedMouseMessage.c)
 *     ?SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z @ 0x1C004980C (-SetLogicalCursorPos@CMouseProcessor@@SAXUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ProcessMouseMove(CMouseProcessor *this, const struct CMouseProcessor::CMoveEvent *a2)
{
  const struct CMouseProcessor::CMoveEvent *v2; // rbx
  PVOID *v4; // rdi
  void *v5; // r14
  char v6; // r15
  __int64 v7; // rcx
  int v8; // edx
  unsigned int MonitorDpiFlags; // eax
  struct tagPOINT v10; // r8
  int v11; // edx
  CMouseProcessor *v12; // rcx
  int v13; // edx
  int v14; // r14d
  int v15; // edx
  const struct _InputDeviceHandle *v16; // rcx
  __int64 PtiFromInputDest; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // r9d
  PVOID DeviceExtension; // rcx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct tagPOINT v27; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v30[13]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  v4 = (PVOID *)((char *)this + 8);
  v5 = &WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 39, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
  v6 = 0;
  if ( (*((_DWORD *)v2 + 2) & 4) != 0 )
    *((_QWORD *)this + 306) = 0LL;
  if ( (*((_DWORD *)v2 + 2) & 1) != 0 )
  {
LABEL_4:
    if ( (*((_DWORD *)v2 + 2) & 2) == 0 )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
      if ( (unsigned int)HasHidTable(PtiFromInputDest) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL) + 376) + 776LL)
                        + 100LL) & 2) != 0 )
        {
          v24 = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
          if ( v24 )
          {
            v25 = *(unsigned int *)(v24 + 340);
            if ( (int)v25 < 0 )
              v25 = *(unsigned int *)(*(_QWORD *)(v24 + 376) + 280LL);
            v26 = (unsigned int)MonitorFlagsFromDpiAwarenessContext(v25);
            PhysicalToLogicalDPIPoint(&v28, (char *)gpsi + 5368, v26, 0LL);
            CMouseProcessor::SetLogicalCursorPos(v28, v26);
          }
          v23 = 41;
          goto LABEL_39;
        }
      }
    }
    v27 = (struct tagPOINT)*((_QWORD *)gpsi + 671);
    v7 = *(_QWORD *)v2;
    v29 = *((_QWORD *)gpsi + 670);
    CMouseProcessor::MouseHitTest(
      (__int64)this,
      v30,
      &v27,
      (__int64)&v29,
      *(_QWORD *)(v7 + 72),
      0,
      *(_DWORD *)(v7 + 124),
      0);
    if ( LODWORD(v30[0]) )
    {
      if ( !v6
        || ((v18 = CInputDest::GetDpiAwareness((CInputDest *)v30) & 0xF) == 0
          ? (v19 = *((_QWORD *)gpsi + 668))
          : v18 == 1
          ? (v19 = *((_QWORD *)gpsi + 669))
          : (v19 = *((_QWORD *)gpsi + 671)),
            v19 != v27) )
      {
        MonitorDpiFlags = CInputDest::GetMonitorDpiFlags((CInputDest *)v30);
        CMouseProcessor::SetLogicalCursorPos(v10, MonitorDpiFlags);
        if ( !(unsigned int)IsPointerPromotedMouseMessage(512LL, *(_QWORD *)v2 + 80LL)
          || (unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                *(_QWORD *)(*((_QWORD *)gptiCurrent + 47) + 824LL),
                                v30,
                                v4) )
        {
          if ( !(unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2)
            || (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*(_QWORD *)v2 + 108LL), v30, v4) )
          {
            v5 = &WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v8) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v8,
                14,
                10,
                (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
            }
            if ( (int)IsEditionDeferWinEventNotifySupported() >= 0 )
              EditionDeferWinEventNotify();
            v12 = (CMouseProcessor *)WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v11) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v11,
                14,
                11,
                (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
            }
            CMouseProcessor::MouseMove_UpdateCursor(
              v12,
              (const struct CInputDest *)v30,
              &v27,
              (const struct tagINPUT_MESSAGE_SOURCE *)(*(_QWORD *)v2 + 80LL));
            CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
              this,
              *(const struct _InputDeviceHandle **)v2,
              (const struct CInputDest *)v30,
              &v27,
              (const struct tagINPUT_MESSAGE_SOURCE *)(*(_QWORD *)v2 + 80LL),
              (*(_BYTE *)(*(_QWORD *)v2 + 88LL) & 4) != 0);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v13) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                14,
                12,
                (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
            }
            if ( (int)IsEditionEndDeferWinEventNotifySupported() >= 0 )
              EditionEndDeferWinEventNotify();
            if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
              goto LABEL_20;
            DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
            v20 = 13;
            v22 = 14;
            LOBYTE(v8) = 5;
LABEL_37:
            WPP_RECORDER_SF_((_DWORD)DeviceExtension, v8, v22, v20, (__int64)v5);
LABEL_20:
            CInputDest::SetEmpty((CInputDest *)v30);
            return;
          }
          v20 = 45;
        }
        else
        {
          v20 = 44;
        }
        LOBYTE(v8) = 3;
LABEL_36:
        DeviceExtension = *v4;
        v22 = 10;
        goto LABEL_37;
      }
      v20 = 43;
    }
    else
    {
      v20 = 42;
    }
    LOBYTE(v8) = 4;
    goto LABEL_36;
  }
  v14 = CMouseProcessor::AnalyzeNewMousePosition(this, (__int64)v2);
  if ( v14 == 1 )
  {
    v6 = 1;
    *((_QWORD *)gpsi + 670) = *(_QWORD *)(*(_QWORD *)v2 + 56LL);
  }
  else if ( v14 == 2 )
  {
    *((_QWORD *)gpsi + 671) = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
    *((_QWORD *)gpsi + 670) = *(_QWORD *)(*(_QWORD *)v2 + 56LL);
  }
  CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, 0LL, 0);
  if ( v14 )
  {
    v5 = &WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids;
    *((_QWORD *)this + 306) = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
    v16 = *(const struct _InputDeviceHandle **)v2;
    *((_QWORD *)this + 304) = *(_QWORD *)(*(_QWORD *)v2 + 48LL);
    *((_QWORD *)this + 305) = *((_QWORD *)v16 + 7);
    goto LABEL_4;
  }
  v23 = 40;
LABEL_39:
  LOBYTE(v15) = 3;
  WPP_RECORDER_SF_((unsigned int)*v4, v15, 10, v23, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
}
