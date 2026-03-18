/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0038E60 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0036EF4 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C0037938 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0037ABC (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00382F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0039994 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     SendMessageTo @ 0x1C0055E90 (SendMessageTo.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0060044 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0060194 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C00601B0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00601CC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00651F8 (ApiSetEditionPostInputMessage.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0065398 (IsPointerPromotedMouseMessage.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006554C (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0065570 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0065590 (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C00655B8 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C0068B40 (ApiSetEditionLLMouseButtonHook.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C0068C00 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0068EAC (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0069E3C (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C006A534 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C006A62C (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C006C000 (ApiSetEditionHandleHungWindow.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01348E4 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0135F94 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // r14
  __int64 *v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // xmm0_8
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // r9d
  unsigned int ButtonMessage; // r13d
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  char v15; // r8
  struct tagPOINT v16; // rbx
  unsigned int HitTestContext; // ecx
  int v18; // edx
  int MessageWParamInfo; // eax
  __int64 v20; // rcx
  int v21; // eax
  BOOL v22; // edi
  unsigned int v23; // eax
  int v24; // edx
  CThreadLockInputDest *v25; // rcx
  int v26; // edx
  _OWORD *RawMouseInputDestination; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  BOOL v38; // ebx
  unsigned int v39; // eax
  int v40; // edx
  int v41; // r9d
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdi
  _BOOL8 v45; // rdx
  int v46; // r13d
  BOOL v47; // ebx
  unsigned int VKey; // eax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  CInputDest *v54; // rax
  __int64 PtiFromInputDest; // rax
  __int64 v56; // rdx
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r12
  int v60; // r13d
  bool v61; // al
  CMouseProcessor::CButtonEvent *v62; // rcx
  int v63; // r9d
  int v64; // ebx
  unsigned __int64 v65; // rsi
  char v66; // r8
  __int64 v67; // rax
  CMouseProcessor *v68; // rcx
  unsigned int UserWindow; // eax
  unsigned int v70; // ebx
  int v71; // r9d
  __int64 v72; // rcx
  CMouseProcessor::CMouseEvent *v73; // rdx
  __int64 v74; // rdx
  int v75; // eax
  __int64 v76; // r9
  int v77; // [rsp+40h] [rbp-C0h]
  struct tagPOINT v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  unsigned int v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  CMouseProcessor::CMouseEvent *v82; // [rsp+80h] [rbp-80h]
  __int64 *v83; // [rsp+88h] [rbp-78h]
  __int64 v84; // [rsp+90h] [rbp-70h] BYREF
  __int64 v85; // [rsp+98h] [rbp-68h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-60h] BYREF
  int v87; // [rsp+A8h] [rbp-58h]
  __int64 v88; // [rsp+B0h] [rbp-50h] BYREF
  int v89; // [rsp+B8h] [rbp-48h]
  _QWORD v90[6]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v91[64]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v92[64]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v93[11]; // [rsp+170h] [rbp+70h] BYREF
  char v94[176]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v95; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v96; // [rsp+2D8h] [rbp+1D8h]
  struct tagPOINT v97; // [rsp+2E0h] [rbp+1E0h] BYREF
  int v98; // [rsp+2E8h] [rbp+1E8h]
  int v99; // [rsp+2ECh] [rbp+1ECh]
  int v100; // [rsp+2F0h] [rbp+1F0h]
  unsigned __int64 ExtraInfoForHook; // [rsp+2F8h] [rbp+1F8h]
  _OWORD v102[4]; // [rsp+300h] [rbp+200h] BYREF
  __int128 v103; // [rsp+340h] [rbp+240h]
  __int128 v104; // [rsp+350h] [rbp+250h]
  __int128 v105; // [rsp+360h] [rbp+260h]
  __int128 v106; // [rsp+370h] [rbp+270h]
  __int128 v107; // [rsp+380h] [rbp+280h]
  __int128 v108; // [rsp+390h] [rbp+290h]
  __int128 v109; // [rsp+3A0h] [rbp+2A0h]
  _DWORD v110[48]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _OWORD v111[11]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v112[192]; // [rsp+530h] [rbp+430h] BYREF

  v2 = a2;
  v82 = a2;
  v4 = (__int64 *)((char *)this + 8);
  v5 = *((_QWORD *)this + 1);
  LOBYTE(a2) = 4;
  v83 = v4;
  WPP_RECORDER_SF_(v5, (_DWORD)a2, 10, 21, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
  v6 = *(_QWORD *)v2;
  v7 = *(_QWORD *)(*(_QWORD *)v2 + 108LL);
  v96 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
  v8 = *(_DWORD *)(v6 + 84) == 1;
  v95 = v7;
  LOBYTE(v9) = v8;
  if ( !(unsigned __int8)anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(v6, v9, &v95) )
  {
    v11 = 22;
LABEL_3:
    LOBYTE(v10) = 3;
LABEL_4:
    WPP_RECORDER_SF_(*v4, v10, 10, v11, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    return;
  }
  if ( !*((_QWORD *)v2 + 3) )
  {
    v11 = 23;
    goto LABEL_3;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  v80 = ButtonMessage;
  v13 = gpdwCPUserPreferencesMask & 0x80008000;
  if ( (_DWORD)v13 == -2147450880 )
  {
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 2536) )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        *((_DWORD *)this + 635) = *(_DWORD *)(*(_QWORD *)v2 + 64LL);
      }
      *((_BYTE *)this + 2536) = v14;
      v13 = v14;
    }
    else
    {
      if ( ButtonMessage != 514 )
        goto LABEL_21;
      v15 = *((_BYTE *)this + 2536);
      if ( v15 )
      {
        v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v2 + 64LL) - *((_DWORD *)this + 635));
        if ( (unsigned int)v10 <= dword_1C019F040 )
        {
          *((_BYTE *)this + 2536) = 0;
          v15 = 0;
        }
        if ( v15 )
          goto LABEL_20;
      }
      v13 = 1LL;
    }
    if ( !(_DWORD)v13 )
    {
LABEL_20:
      v11 = 24;
      LOBYTE(v10) = 4;
      goto LABEL_4;
    }
  }
LABEL_21:
  v16 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v78 = v16;
  v84 = *((_QWORD *)gpsi + 619);
  if ( !*((_QWORD *)v2 + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v10);
  HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
  v18 = 8;
  if ( *((_DWORD *)v2 + 4) != 1 )
    v18 = 0;
  CMouseProcessor::MouseHitTest(
    (__int64)this,
    v102,
    &v78,
    (__int64)&v84,
    *(_QWORD *)(*(_QWORD *)v2 + 72LL),
    v18,
    HitTestContext,
    0,
    0LL,
    0LL);
  v97 = v16;
  MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v2);
  v20 = *(_QWORD *)v2;
  v98 = MessageWParamInfo;
  v99 = *(unsigned __int8 *)(v20 + 88) >> 7;
  v100 = *(_DWORD *)(v20 + 64);
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v91, (struct CInputDest *)v102);
  v21 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
  v22 = (*(_BYTE *)(*(_QWORD *)v2 + 88LL) & 1) == 0;
  v86 = *(_QWORD *)(*(_QWORD *)v2 + 108LL);
  v87 = v21;
  v23 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
  if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                       (unsigned int)v102,
                       (unsigned int)&v97,
                       v23,
                       (unsigned int)&v86,
                       v22) )
  {
    LOBYTE(v24) = 4;
    WPP_RECORDER_SF_(*v4, v24, 10, 25, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    v25 = (CThreadLockInputDest *)v91;
LABEL_75:
    CThreadLockInputDest::~CThreadLockInputDest(v25);
    goto LABEL_82;
  }
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v91);
  CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2464, 0LL, 3LL);
  if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL) )
  {
LABEL_31:
    if ( !LODWORD(v102[0]) )
    {
      v41 = 27;
LABEL_33:
      v42 = *v4;
      LOBYTE(v26) = 3;
      goto LABEL_81;
    }
    LODWORD(v79) = IsPointerPromotedMouseMessage(ButtonMessage, *(_QWORD *)v2 + 80LL);
    if ( (_DWORD)v79 && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v43 + 108), v102, v4) )
      goto LABEL_82;
    v44 = LOWORD(v78.x) | (LOWORD(v78.y) << 16);
    v45 = *((_DWORD *)v2 + 4) == 2;
    v81 = v44;
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v102, v45);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) )
    {
      v46 = v79;
      if ( (_DWORD)v79
        && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                               *(_QWORD *)(*(_QWORD *)v2 + 108LL),
                               (char *)this + 2552,
                               v4) )
      {
        goto LABEL_82;
      }
      v111[0] = v102[0];
      v111[1] = v102[1];
      v111[2] = v102[2];
      v111[3] = v102[3];
      v111[4] = v103;
      v111[5] = v104;
      v111[6] = v105;
      v111[7] = v106;
      v111[8] = v107;
      v111[9] = v108;
      v111[10] = v109;
      if ( *((_DWORD *)v2 + 4) == 1 )
      {
        *((_DWORD *)this + 636) |= CMouseProcessor::CButtonEvent::GetHardwareButton(v2);
        CInputDest::operator=((__int64)v102, (__int64)this + 2552);
      }
      else
      {
        v54 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                (__int64)this,
                (CInputDest *)v112,
                (CInputDest *)v102,
                v2);
        CInputDest::operator=((__int64)v102, v54);
        CInputDest::~CInputDest((CInputDest *)v112);
      }
      if ( !LODWORD(v102[0]) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52);
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v102,
        (unsigned int)v111,
        v16.x,
        v78.x,
        (__int64)&v78);
      LODWORD(v44) = LOWORD(v78.x) | (LOWORD(v78.y) << 16);
      v81 = (int)v44;
    }
    else
    {
      if ( *((_DWORD *)v2 + 4) == 1 )
      {
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v102,
                v2,
                v44,
                v16,
                ButtonMessage) )
        {
          v41 = 28;
          goto LABEL_33;
        }
      }
      else
      {
        *((_DWORD *)this + 636) &= ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(v2);
      }
      v46 = v79;
    }
    v47 = *((_DWORD *)v2 + 4) == 2;
    VKey = CMouseProcessor::CButtonEvent::GetVKey(v2);
    ApiSetEditionUpdateAsyncKeyState(v102, VKey, v47);
    if ( *((_DWORD *)v2 + 4) == 1 )
    {
      memset(v90, 0, 0x28uLL);
      v90[0] = *((_QWORD *)&v104 + 1);
      v50 = *(_QWORD *)v2;
      LODWORD(v90[2]) = 4;
      v51 = *(_QWORD *)(v50 + 8);
      v90[3] = *((_QWORD *)this + 5);
      LODWORD(v79) = (__int16)v44;
      HIDWORD(v79) = SWORD1(v44);
      v90[1] = v51;
      v90[4] = v79;
      SendMessageTo(6LL, v90, 40LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x200) == 0
      && !DWORD2(v109)
      && !CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v102, v2, v49) )
    {
      v41 = 29;
      goto LABEL_33;
    }
    if ( !LODWORD(v102[0]) )
    {
      v41 = 30;
      goto LABEL_33;
    }
    if ( v46 )
    {
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v102, 2LL);
      if ( PtiFromInputDest )
      {
        if ( (*(_DWORD *)(PtiFromInputDest + 480) & 1) != 0 )
        {
          v41 = 31;
          goto LABEL_33;
        }
      }
    }
    if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v102, 1LL, 1LL) )
    {
      v41 = 32;
      goto LABEL_33;
    }
    CMouseProcessor::PostPendingMouseMoveToInputDest(this, (const struct CInputDest *)v102);
    if ( DWORD1(v104) == 1 )
    {
      v56 = *(_QWORD *)(*((_QWORD *)&v103 + 1) + 64LL);
    }
    else
    {
      if ( DWORD1(v104) != 2 )
      {
LABEL_70:
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v92, (struct CInputDest *)v102);
        CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2);
        v57 = *(_QWORD *)v2;
        v85 = *(_QWORD *)(v57 + 108);
        v58 = *(_QWORD *)(v57 + 32);
        v59 = *(_QWORD *)(v57 + 72);
        v60 = *(_DWORD *)(v57 + 64);
        v61 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v82);
        v64 = v63 | 0x80;
        v65 = (unsigned __int64)&v85 & -(__int64)v61;
        if ( !v66 )
          v64 = v63;
        v67 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v62);
        CMouseProcessor::AddMouseKeysToWParam(v68, v67);
        UserWindow = (unsigned int)CInputDest::GetUserWindow((CInputDest *)v102);
        v77 = v64;
        v70 = v80;
        ApiSetEditionPostInputMessage(
          (unsigned int)v102,
          UserWindow,
          v80,
          v71,
          v81,
          v60,
          v59,
          v58,
          v77,
          v57 + 80,
          v57,
          v65);
        v73 = v82;
        if ( *((_DWORD *)v82 + 4) == 2 )
        {
          v74 = *((unsigned int *)v82 + 2);
          v75 = *(_DWORD *)(*(_QWORD *)v82 + 116LL);
          v76 = (*(_DWORD *)(*(_QWORD *)v82 + 88LL) >> 7) & 1;
          v88 = *(_QWORD *)(*(_QWORD *)v82 + 108LL);
          v89 = v75;
          if ( !(unsigned int)ApiSetEditionReportMouseBreakToAccessibility(v102, v74, &v88, v76) )
          {
            LOBYTE(v73) = 3;
            WPP_RECORDER_SF_(*v83, (_DWORD)v73, 10, 33, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
            v25 = (CThreadLockInputDest *)v92;
            goto LABEL_75;
          }
        }
        if ( v70 == 513 )
        {
          if ( !LODWORD(v102[0]) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v73);
          ApiSetEditionHandleHungWindow(v102);
        }
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v92);
        v41 = 34;
        LOBYTE(v26) = 4;
        v42 = *v83;
LABEL_81:
        WPP_RECORDER_SF_(v42, v26, 10, v41, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
        goto LABEL_82;
      }
      v56 = *(_QWORD *)(*((_QWORD *)&v103 + 1) + 248LL);
    }
    if ( v56 )
      CMouseProcessor::PostPendingMouseMove(this, *(struct tagQ **)(v56 + 424));
    goto LABEL_70;
  }
  RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v94);
  v28 = RawMouseInputDestination[1];
  v93[0] = *RawMouseInputDestination;
  v29 = RawMouseInputDestination[2];
  v93[1] = v28;
  v30 = RawMouseInputDestination[3];
  v93[2] = v29;
  v31 = RawMouseInputDestination[4];
  v93[3] = v30;
  v32 = RawMouseInputDestination[5];
  v93[4] = v31;
  v33 = RawMouseInputDestination[6];
  v93[5] = v32;
  v34 = RawMouseInputDestination[7];
  v93[6] = v33;
  v35 = RawMouseInputDestination[8];
  v93[7] = v34;
  v36 = RawMouseInputDestination[9];
  v93[8] = v35;
  v37 = RawMouseInputDestination[10];
  v93[9] = v36;
  v93[10] = v37;
  CInputDest::CInputDest((CInputDest *)v110, (const struct tagINPUTDEST *)v93);
  if ( !v110[0] )
  {
    CInputDest::~CInputDest((CInputDest *)v110);
    goto LABEL_31;
  }
  v38 = *((_DWORD *)v2 + 4) == 2;
  v39 = CMouseProcessor::CButtonEvent::GetVKey(v2);
  ApiSetEditionUpdateAsyncKeyState(v110, v39, v38);
  LOBYTE(v40) = 4;
  WPP_RECORDER_SF_(*v4, v40, 10, 26, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
  CInputDest::~CInputDest((CInputDest *)v110);
LABEL_82:
  CInputDest::~CInputDest((CInputDest *)v102);
}
