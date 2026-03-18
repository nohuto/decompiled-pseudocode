/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0046B60 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C01310D8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@P.c)
 * Callees:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0045090 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00451D0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00451EC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C00454AC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004575C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C00458C0 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00462F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0047A30 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     IsPointerPromotedMouseMessage @ 0x1C00497D8 (IsPointerPromotedMouseMessage.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00805C8 (ApiSetEditionPostInputMessage.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0082350 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0088738 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C0088EA8 (ApiSetEditionLLMouseButtonHook.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C0088F98 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C008A1DC (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C008A9F0 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C008B8C0 (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C008CD20 (ApiSetEditionHandleHungWindow.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01317DC (_anonymous_namespace_--GetRawMouseInputDestination.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // r14
  _QWORD *v4; // r15
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edx
  unsigned int ButtonMessage; // r12d
  struct tagPOINT v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // r9d
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  int v18; // r9d
  int v19; // edx
  __int64 PtiFromInputDest; // rax
  int v21; // edx
  __int64 v22; // r9
  int v23; // r13d
  bool v24; // al
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // al
  CMouseProcessor::CMouseEvent *v29; // rcx
  __int64 v30; // r13
  int v31; // r12d
  CMouseProcessor *v32; // rcx
  int v33; // edi
  int v34; // ebx
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // r11
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // xmm0_8
  unsigned int v43; // eax
  int v44; // edx
  int v45; // r9d
  CInputDest *v46; // rax
  int v47; // r9d
  int v48; // eax
  BOOL v49; // eax
  CThreadLockInputDest *v50; // rcx
  _OWORD *RawMouseInputDestination; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  int v63; // edx
  __int64 v64; // rax
  struct tagPOINT v65; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  unsigned int v69; // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-60h] BYREF
  int v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h] BYREF
  int v75; // [rsp+B8h] [rbp-48h]
  _BYTE v76[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v77[64]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v78[12]; // [rsp+140h] [rbp+40h] BYREF
  char v79[192]; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v80; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v81; // [rsp+2C8h] [rbp+1C8h]
  struct tagPOINT v82; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v83; // [rsp+2D8h] [rbp+1D8h]
  int v84; // [rsp+2DCh] [rbp+1DCh]
  int v85; // [rsp+2E0h] [rbp+1E0h]
  __int64 ExtraInfoForHook; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v87[5]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v88; // [rsp+340h] [rbp+240h]
  __int128 v89; // [rsp+350h] [rbp+250h]
  __int128 v90; // [rsp+360h] [rbp+260h]
  __int128 v91; // [rsp+370h] [rbp+270h]
  __int128 v92; // [rsp+380h] [rbp+280h]
  __int128 v93; // [rsp+390h] [rbp+290h]
  __int128 v94; // [rsp+3A0h] [rbp+2A0h]
  _DWORD v95[52]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _OWORD v96[12]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v97[208]; // [rsp+550h] [rbp+450h] BYREF

  v2 = a2;
  v4 = (_QWORD *)((char *)this + 8);
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 21, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
  v5 = *(_QWORD *)v2;
  v6 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
  LOBYTE(v7) = *(_DWORD *)(*(_QWORD *)v2 + 84LL) == 1;
  v80 = *(__int64 **)(*(_QWORD *)v2 + 108LL);
  v81 = v6;
  if ( (unsigned __int8)anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(v5, v7, &v80) )
  {
    if ( *((_QWORD *)v2 + 3) )
    {
      ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      v69 = ButtonMessage;
      if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
        goto LABEL_4;
      if ( ButtonMessage == 513 )
      {
        v48 = *(_DWORD *)(*(_QWORD *)v2 + 64LL);
        if ( *((_BYTE *)this + 2528) )
        {
          *((_BYTE *)this + 2528) = 0;
        }
        else
        {
          *((_BYTE *)this + 2528) = 1;
          *((_DWORD *)this + 633) = v48;
        }
        v49 = *((_BYTE *)this + 2528) != 0;
      }
      else
      {
        if ( ButtonMessage != 514 )
          goto LABEL_4;
        if ( *((_BYTE *)this + 2528) )
        {
          v8 = *(_DWORD *)(*(_QWORD *)v2 + 64LL) - *((_DWORD *)this + 633);
          if ( v8 <= dword_1C0189260 )
            *((_BYTE *)this + 2528) = 0;
          if ( *((_BYTE *)this + 2528) )
            goto LABEL_47;
        }
        v49 = 1;
      }
      if ( !v49 )
      {
LABEL_47:
        v47 = 24;
        LOBYTE(v8) = 4;
        goto LABEL_48;
      }
LABEL_4:
      v10 = (struct tagPOINT)*((_QWORD *)gpsi + 671);
      v67 = v10;
      v70 = *((_QWORD *)gpsi + 670);
      v11 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      v13 = 2;
      if ( v11 != v14 )
        v13 = 0;
      CMouseProcessor::MouseHitTest(
        (__int64)this,
        v87,
        &v67,
        (__int64)&v70,
        *(_QWORD *)(v12 + 72),
        v13,
        *(_DWORD *)(v12 + 124),
        1);
      v82 = v67;
      v83 = *(_DWORD *)(*((_QWORD *)v2 + 3) + 16LL);
      v15 = *(_QWORD *)v2;
      v84 = *(unsigned __int8 *)(*(_QWORD *)v2 + 88LL) >> 7;
      v85 = *(_DWORD *)(v15 + 64);
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v76, (struct CInputDest *)v87);
      v16 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
      v72 = *(_QWORD *)(*(_QWORD *)v2 + 108LL);
      v73 = v16;
      v17 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v87,
                           (unsigned int)&v82,
                           v17,
                           (unsigned int)&v72,
                           v18) )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_(*v4, v19, 10, 25, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
        v50 = (CThreadLockInputDest *)v76;
        goto LABEL_83;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v76);
      CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, 0LL, 3);
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
      if ( (unsigned int)HasHidTable(PtiFromInputDest)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL) + 376) + 776LL)
                      + 100LL) & 0x100) != 0 )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v79);
        v52 = RawMouseInputDestination[1];
        v78[0] = *RawMouseInputDestination;
        v53 = RawMouseInputDestination[2];
        v78[1] = v52;
        v54 = RawMouseInputDestination[3];
        v78[2] = v53;
        v55 = RawMouseInputDestination[4];
        v78[3] = v54;
        v56 = RawMouseInputDestination[5];
        v78[4] = v55;
        v57 = RawMouseInputDestination[6];
        v78[5] = v56;
        v58 = RawMouseInputDestination[7];
        RawMouseInputDestination += 8;
        v78[6] = v57;
        v59 = *RawMouseInputDestination;
        v78[7] = v58;
        v60 = RawMouseInputDestination[1];
        v78[8] = v59;
        v61 = RawMouseInputDestination[2];
        v78[9] = v60;
        v62 = RawMouseInputDestination[3];
        v78[10] = v61;
        v78[11] = v62;
        CInputDest::CInputDest((CInputDest *)v95, (const struct CInputDest *)v78);
        if ( v95[0] )
        {
          ApiSetEditionUpdateAsyncKeyState(v95, *(unsigned int *)(*((_QWORD *)v2 + 3) + 12LL), *((_DWORD *)v2 + 4) == 2);
          LOBYTE(v63) = 4;
          WPP_RECORDER_SF_(*v4, v63, 10, 26, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
          CInputDest::SetEmpty((CInputDest *)v95);
          goto LABEL_35;
        }
        CInputDest::SetEmpty((CInputDest *)v95);
      }
      if ( !LODWORD(v87[0]) )
      {
        v45 = 27;
        LOBYTE(v21) = 3;
LABEL_34:
        WPP_RECORDER_SF_(*v4, v21, 10, v45, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
LABEL_35:
        CInputDest::SetEmpty((CInputDest *)v87);
        return;
      }
      v23 = IsPointerPromotedMouseMessage(ButtonMessage, *(_QWORD *)v2 + 80LL);
      if ( v23 && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v22 + 108), v87, v4) )
        goto LABEL_35;
      v24 = *((_DWORD *)v2 + 4) == 2;
      v68 = LOWORD(v67.x) | (LOWORD(v67.y) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v87, v24);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 686, 1, 1) )
      {
        if ( v23
          && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                 *(_QWORD *)(*(_QWORD *)v2 + 108LL),
                                 (char *)this + 2544,
                                 v4) )
        {
          goto LABEL_35;
        }
        v96[0] = v87[0];
        v96[1] = v87[1];
        v96[2] = v87[2];
        v96[3] = v87[3];
        v96[4] = v87[4];
        v96[5] = v88;
        v96[6] = v89;
        v96[7] = v90;
        v96[8] = v91;
        v96[9] = v92;
        v96[10] = v93;
        v96[11] = v94;
        if ( *((_DWORD *)v2 + 4) == 1 )
        {
          *((_DWORD *)this + 634) |= *((_DWORD *)v2 + 3);
          CInputDest::operator=(v87, (char *)this + 2544);
        }
        else
        {
          v46 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                  (__int64)this,
                  (CInputDest *)v97,
                  (CInputDest *)v87,
                  v2);
          CInputDest::operator=(v87, v46);
          CInputDest::SetEmpty((CInputDest *)v97);
        }
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
          (unsigned int)v87,
          (unsigned int)v96,
          v10.x,
          v67.x,
          (__int64)&v67);
        v25 = LOWORD(v67.x) | (LOWORD(v67.y) << 16);
        v68 = v25;
      }
      else if ( *((_DWORD *)v2 + 4) == 1 )
      {
        v65 = v10;
        v25 = v68;
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v87,
                v2,
                v68,
                v65,
                ButtonMessage) )
        {
          v45 = 28;
          goto LABEL_70;
        }
      }
      else
      {
        v25 = v68;
        *((_DWORD *)this + 634) &= ~*((_DWORD *)v2 + 3);
      }
      ApiSetEditionUpdateAsyncKeyState(v87, *(unsigned int *)(*((_QWORD *)v2 + 3) + 12LL), *((_DWORD *)v2 + 4) == 2);
      if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x200) == 0
        && !CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v87, v2, v25) )
      {
        v45 = 29;
        goto LABEL_70;
      }
      if ( !LODWORD(v87[0]) )
      {
        v45 = 30;
        goto LABEL_70;
      }
      if ( v23 )
      {
        v64 = anonymous_namespace_::GetPtiFromInputDest(v87, 2LL);
        if ( v64 )
        {
          if ( (*(_DWORD *)(v64 + 440) & 1) != 0 )
          {
            v45 = 31;
            goto LABEL_70;
          }
        }
      }
      v26 = anonymous_namespace_::GetPtiFromInputDest(v87, 1LL);
      if ( (unsigned int)HasHidTable(v26)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(v87, 1LL) + 376) + 776LL)
                      + 100LL) & 2) != 0 )
      {
        v45 = 32;
LABEL_70:
        LOBYTE(v21) = 3;
        goto LABEL_34;
      }
      CMouseProcessor::PostPendingMouseMoveToInputDest(this, (const struct CInputDest *)v87);
      if ( HIDWORD(v88) == 1 )
      {
        v27 = *(_QWORD *)(v88 + 64);
      }
      else
      {
        if ( HIDWORD(v88) != 2 )
        {
LABEL_23:
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v77, (struct CInputDest *)v87);
          v28 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2);
          v30 = *(_QWORD *)v2;
          v31 = v28 != 0 ? 2 : 0;
          if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x200) != 0 )
            v31 |= 4u;
          if ( (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v29) )
          {
            v71 = *(_QWORD *)(v30 + 108);
            v80 = &v71;
          }
          else
          {
            v80 = 0LL;
          }
          v33 = 0;
          v34 = *(_DWORD *)(v30 + 64);
          if ( HIDWORD(v88) == 2 )
            v33 = v88;
          v35 = CMouseProcessor::AddMouseKeysToWParam(v32, *(_QWORD *)(*((_QWORD *)v2 + 3) + 16LL));
          v66 = v34;
          v36 = v69;
          ApiSetEditionPostInputMessage(
            (unsigned int)v87,
            0,
            v33,
            v69,
            v35,
            v68,
            v66,
            v39,
            v38,
            v31,
            v37,
            v30,
            (__int64)v80,
            0);
          if ( *((_DWORD *)v2 + 4) != 2
            || (v40 = *(_QWORD *)v2,
                v41 = *((unsigned int *)v2 + 2),
                v42 = *(_QWORD *)(*(_QWORD *)v2 + 108LL),
                v75 = *(_DWORD *)(*(_QWORD *)v2 + 116LL),
                v43 = *(unsigned __int8 *)(v40 + 88),
                v74 = v42,
                (unsigned int)ApiSetEditionReportMouseBreakToAccessibility(v87, v41, &v74, (unsigned __int8)(v43 >> 7))) )
          {
            if ( v36 == 513 )
              ApiSetEditionHandleHungWindow(v87);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v77);
            v45 = 34;
            LOBYTE(v21) = 4;
            goto LABEL_34;
          }
          LOBYTE(v44) = 3;
          WPP_RECORDER_SF_(*v4, v44, 10, 33, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
          v50 = (CThreadLockInputDest *)v77;
LABEL_83:
          CThreadLockInputDest::~CThreadLockInputDest(v50);
          goto LABEL_35;
        }
        v27 = *(_QWORD *)(v88 + 328);
      }
      if ( v27 )
        CMouseProcessor::PostPendingMouseMove(this, *(struct tagQ **)(v27 + 384));
      goto LABEL_23;
    }
    v47 = 23;
  }
  else
  {
    v47 = 22;
  }
  LOBYTE(v8) = 3;
LABEL_48:
  WPP_RECORDER_SF_(*v4, v8, 10, v47, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
}
