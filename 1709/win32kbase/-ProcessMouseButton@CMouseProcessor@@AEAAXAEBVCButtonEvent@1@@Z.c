/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00159E0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00129F8 (ApiSetEditionPostInputMessage.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0014088 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C001463C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0014798 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0015168 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0017988 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0017AD4 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0017AF0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0017B0C (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0017D30 (IsPointerPromotedMouseMessage.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0018410 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ApiSetEditionUpdateAsyncKeyState @ 0x1C0018660 (ApiSetEditionUpdateAsyncKeyState.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00186EC (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C0018764 (ApiSetEditionLLMouseButtonHook.c)
 *     _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C0018824 (_anonymous_namespace_--CancelCoolSwitchWithForegroundCheck.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C0091868 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ApiSetEditionReportMouseBreakToAccessibility @ 0x1C00920E0 (ApiSetEditionReportMouseBreakToAccessibility.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     ApiSetEditionHandleHungWindow @ 0x1C0094200 (ApiSetEditionHandleHungWindow.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C0130E60 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2)
{
  const struct CMouseProcessor::CButtonEvent *v2; // r14
  _QWORD *v4; // r15
  __int64 v5; // rcx
  __int64 v6; // xmm0_8
  bool v7; // zf
  __int64 v8; // rdx
  unsigned int v9; // edx
  unsigned int v10; // esi
  unsigned int ButtonMessage; // r12d
  struct tagPOINT v12; // rbx
  CMouseProcessor::CButtonEvent *v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // xmm0_8
  unsigned int v21; // eax
  int v22; // edx
  int v23; // edx
  __int64 PtiFromInputDest; // rax
  int v25; // edx
  __int64 v26; // r9
  int v27; // r13d
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rdx
  bool v31; // al
  __int64 v32; // r13
  int v33; // edx
  CMouseProcessor *v34; // rcx
  __int64 v35; // rdi
  int v36; // ebx
  __int64 v37; // rax
  __int64 *v38; // r9
  __int64 v39; // r10
  __int64 v40; // r11
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // r9
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
  struct tagPOINT v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  int v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h] BYREF
  int v74; // [rsp+B8h] [rbp-48h]
  _BYTE v75[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v76[64]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v77[12]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v78[192]; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v79; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v80; // [rsp+2C8h] [rbp+1C8h]
  struct tagPOINT v81; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v82; // [rsp+2D8h] [rbp+1D8h]
  int v83; // [rsp+2DCh] [rbp+1DCh]
  int v84; // [rsp+2E0h] [rbp+1E0h]
  unsigned __int64 ExtraInfoForHook; // [rsp+2E8h] [rbp+1E8h]
  _OWORD v86[5]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v87; // [rsp+340h] [rbp+240h]
  __int128 v88; // [rsp+350h] [rbp+250h]
  __int128 v89; // [rsp+360h] [rbp+260h]
  __int128 v90; // [rsp+370h] [rbp+270h]
  __int128 v91; // [rsp+380h] [rbp+280h]
  __int128 v92; // [rsp+390h] [rbp+290h]
  __int128 v93; // [rsp+3A0h] [rbp+2A0h]
  _DWORD v94[52]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _OWORD v95[12]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v96[208]; // [rsp+550h] [rbp+450h] BYREF

  v2 = a2;
  v4 = (_QWORD *)((char *)this + 8);
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_(*((_QWORD *)this + 1), (_DWORD)a2, 10, 21, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
  v5 = *(_QWORD *)v2;
  v6 = *(_QWORD *)(*(_QWORD *)v2 + 108LL);
  v80 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
  v7 = *(_DWORD *)(v5 + 84) == 1;
  v79 = (__int64 *)v6;
  LOBYTE(v8) = v7;
  v10 = 0;
  if ( (unsigned __int8)anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(v5, v8, &v79) )
  {
    if ( *((_QWORD *)v2 + 3) )
    {
      ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
        goto LABEL_4;
      if ( ButtonMessage == 513 )
      {
        v48 = *(_DWORD *)(*(_QWORD *)v2 + 64LL);
        if ( *((_BYTE *)this + 2680) )
        {
          *((_BYTE *)this + 2680) = 0;
        }
        else
        {
          *((_BYTE *)this + 2680) = 1;
          *((_DWORD *)this + 671) = v48;
        }
        v49 = *((_BYTE *)this + 2680) != 0;
      }
      else
      {
        if ( ButtonMessage != 514 )
          goto LABEL_4;
        if ( *((_BYTE *)this + 2680) )
        {
          v9 = *(_DWORD *)(*(_QWORD *)v2 + 64LL) - *((_DWORD *)this + 671);
          if ( v9 <= dword_1C018DDB0 )
            *((_BYTE *)this + 2680) = 0;
          if ( *((_BYTE *)this + 2680) )
            goto LABEL_47;
        }
        v49 = 1;
      }
      if ( !v49 )
      {
LABEL_47:
        v47 = 24;
        LOBYTE(v9) = 4;
        goto LABEL_48;
      }
LABEL_4:
      v12 = (struct tagPOINT)*((_QWORD *)gpsi + 618);
      v66 = v12;
      v69 = *((_QWORD *)gpsi + 617);
      CMouseProcessor::CMouseEvent::GetHitTestContext(v2);
      v14 = CMouseProcessor::CButtonEvent::GetButtonMessage(v13);
      v17 = 2;
      if ( v14 != v18 )
        v17 = 0;
      CMouseProcessor::MouseHitTest(
        (volatile signed __int32 *)this,
        v86,
        &v66,
        (__int64)&v69,
        *(_QWORD *)(*(_QWORD *)v2 + 72LL),
        v17,
        v15,
        v16);
      v81 = v66;
      v82 = *(_DWORD *)(*((_QWORD *)v2 + 3) + 16LL);
      v19 = *(_QWORD *)v2;
      v83 = *(unsigned __int8 *)(*(_QWORD *)v2 + 88LL) >> 7;
      v84 = *(_DWORD *)(v19 + 64);
      ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v75, (struct CInputDest *)v86);
      v20 = *(_QWORD *)(*(_QWORD *)v2 + 108LL);
      v72 = *(_DWORD *)(*(_QWORD *)v2 + 116LL);
      v71 = v20;
      v21 = CMouseProcessor::CButtonEvent::GetButtonMessage(v2);
      if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                           (unsigned int)v86,
                           (unsigned int)&v81,
                           v21,
                           (unsigned int)&v71,
                           v22) )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_(*v4, v23, 10, 25, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
        v50 = (CThreadLockInputDest *)v75;
        goto LABEL_83;
      }
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v75);
      CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 2608, 0LL, 3LL);
      PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL);
      if ( (unsigned int)HasHidTable(PtiFromInputDest)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1LL) + 400) + 784LL)
                      + 100LL) & 0x100) != 0 )
      {
        RawMouseInputDestination = (_OWORD *)anonymous_namespace_::GetRawMouseInputDestination(v78);
        v52 = RawMouseInputDestination[1];
        v77[0] = *RawMouseInputDestination;
        v53 = RawMouseInputDestination[2];
        v77[1] = v52;
        v54 = RawMouseInputDestination[3];
        v77[2] = v53;
        v55 = RawMouseInputDestination[4];
        v77[3] = v54;
        v56 = RawMouseInputDestination[5];
        v77[4] = v55;
        v57 = RawMouseInputDestination[6];
        v77[5] = v56;
        v58 = RawMouseInputDestination[7];
        RawMouseInputDestination += 8;
        v77[6] = v57;
        v59 = *RawMouseInputDestination;
        v77[7] = v58;
        v60 = RawMouseInputDestination[1];
        v77[8] = v59;
        v61 = RawMouseInputDestination[2];
        v77[9] = v60;
        v62 = RawMouseInputDestination[3];
        v77[10] = v61;
        v77[11] = v62;
        CInputDest::CInputDest((CInputDest *)v94, (const struct CInputDest *)v77);
        if ( v94[0] )
        {
          LOBYTE(v10) = *((_DWORD *)v2 + 4) == 2;
          ApiSetEditionUpdateAsyncKeyState(v94, *(unsigned int *)(*((_QWORD *)v2 + 3) + 12LL), v10);
          LOBYTE(v63) = 4;
          WPP_RECORDER_SF_(*v4, v63, 10, 26, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
          CInputDest::SetEmpty((CInputDest *)v94);
          goto LABEL_35;
        }
        CInputDest::SetEmpty((CInputDest *)v94);
      }
      if ( !LODWORD(v86[0]) )
      {
        v45 = 27;
        LOBYTE(v25) = 3;
LABEL_34:
        WPP_RECORDER_SF_(*v4, v25, 10, v45, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
LABEL_35:
        CInputDest::SetEmpty((CInputDest *)v86);
        return;
      }
      v27 = IsPointerPromotedMouseMessage(ButtonMessage, *(_QWORD *)v2 + 80LL);
      if ( v27 && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v26 + 108), v86, v4) )
        goto LABEL_35;
      v7 = *((_DWORD *)v2 + 4) == 2;
      v67 = LOWORD(v66.x) | (LOWORD(v66.y) << 16);
      ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v86, v7);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 724, 1, 1) )
      {
        if ( v27
          && !(unsigned __int8)anonymous_namespace_::ValidateUIPI(
                                 *(_QWORD *)(*(_QWORD *)v2 + 108LL),
                                 (char *)this + 2696,
                                 v4) )
        {
          goto LABEL_35;
        }
        v95[0] = v86[0];
        v95[1] = v86[1];
        v95[2] = v86[2];
        v95[3] = v86[3];
        v95[4] = v86[4];
        v95[5] = v87;
        v95[6] = v88;
        v95[7] = v89;
        v95[8] = v90;
        v95[9] = v91;
        v95[10] = v92;
        v95[11] = v93;
        if ( *((_DWORD *)v2 + 4) == 1 )
        {
          *((_DWORD *)this + 672) |= *((_DWORD *)v2 + 3);
          CInputDest::operator=(v86, (char *)this + 2696);
        }
        else
        {
          v46 = CMouseProcessor::HandleCapture_BreakHasMouseOwner(
                  (__int64)this,
                  (CInputDest *)v96,
                  (CInputDest *)v86,
                  v2);
          CInputDest::operator=(v86, v46);
          CInputDest::SetEmpty((CInputDest *)v96);
        }
        ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
          (unsigned int)v86,
          (unsigned int)v95,
          v12.x,
          v66.x,
          (__int64)&v66);
        v28 = LOWORD(v66.x) | (LOWORD(v66.y) << 16);
        v67 = v28;
      }
      else if ( *((_DWORD *)v2 + 4) == 1 )
      {
        v65 = v12;
        v28 = v67;
        if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
                this,
                (const struct CInputDest *)v86,
                v2,
                v67,
                v65,
                ButtonMessage) )
        {
          v45 = 28;
          goto LABEL_70;
        }
      }
      else
      {
        v28 = v67;
        *((_DWORD *)this + 672) &= ~*((_DWORD *)v2 + 3);
      }
      ApiSetEditionUpdateAsyncKeyState(v86, *(unsigned int *)(*((_QWORD *)v2 + 3) + 12LL), *((_DWORD *)v2 + 4) == 2);
      if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x200) == 0
        && !CMouseProcessor::UpdateForegroundForInput(this, (struct CInputDest *)v86, v2, v28) )
      {
        v45 = 29;
        goto LABEL_70;
      }
      if ( !LODWORD(v86[0]) )
      {
        v45 = 30;
        goto LABEL_70;
      }
      if ( v27 )
      {
        v64 = anonymous_namespace_::GetPtiFromInputDest(v86, 2LL);
        if ( v64 )
        {
          if ( (*(_DWORD *)(v64 + 464) & 1) != 0 )
          {
            v45 = 31;
            goto LABEL_70;
          }
        }
      }
      v29 = anonymous_namespace_::GetPtiFromInputDest(v86, 1LL);
      if ( (unsigned int)HasHidTable(v29)
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(v86, 1LL) + 400) + 784LL)
                      + 100LL) & 2) != 0 )
      {
        v45 = 32;
LABEL_70:
        LOBYTE(v25) = 3;
        goto LABEL_34;
      }
      CMouseProcessor::PostPendingMouseMoveToInputDest(this, (const struct CInputDest *)v86);
      if ( HIDWORD(v87) == 1 )
      {
        v30 = *(_QWORD *)(v87 + 64);
      }
      else
      {
        if ( HIDWORD(v87) != 2 )
        {
LABEL_23:
          CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v76, (struct CInputDest *)v86);
          v31 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2);
          v32 = *(_QWORD *)v2;
          v33 = (2 * v31) | 4;
          if ( (*(_DWORD *)(*(_QWORD *)v2 + 88LL) & 0x200) == 0 )
            v33 = 2 * v31;
          v68 = v33;
          if ( CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v2) )
          {
            v70 = *(_QWORD *)(v32 + 108);
            v79 = &v70;
          }
          else
          {
            v79 = 0LL;
          }
          v35 = 0LL;
          v36 = *(_DWORD *)(v32 + 64);
          if ( HIDWORD(v87) == 2 )
            v35 = v87;
          v37 = CMouseProcessor::AddMouseKeysToWParam(v34, *(_QWORD *)(*((_QWORD *)v2 + 3) + 16LL));
          ApiSetEditionPostInputMessage(
            (__int64)v86,
            0LL,
            v35,
            ButtonMessage,
            v37,
            v67,
            v36,
            v40,
            v39,
            v68,
            v38,
            v32,
            (__int64)v79);
          if ( *((_DWORD *)v2 + 4) != 2
            || (v41 = *((unsigned int *)v2 + 2),
                v42 = *(_DWORD *)(*(_QWORD *)v2 + 116LL),
                v43 = (*(_DWORD *)(*(_QWORD *)v2 + 88LL) >> 7) & 1,
                v73 = *(_QWORD *)(*(_QWORD *)v2 + 108LL),
                v74 = v42,
                (unsigned int)ApiSetEditionReportMouseBreakToAccessibility(v86, v41, &v73, v43)) )
          {
            if ( ButtonMessage == 513 )
              ApiSetEditionHandleHungWindow(v86);
            CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v76);
            v45 = 34;
            LOBYTE(v25) = 4;
            goto LABEL_34;
          }
          LOBYTE(v44) = 3;
          WPP_RECORDER_SF_(*v4, v44, 10, 33, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
          v50 = (CThreadLockInputDest *)v76;
LABEL_83:
          CThreadLockInputDest::~CThreadLockInputDest(v50);
          goto LABEL_35;
        }
        v30 = *(_QWORD *)(v87 + 328);
      }
      if ( v30 )
        CMouseProcessor::PostPendingMouseMove(this, *(struct tagQ **)(v30 + 408));
      goto LABEL_23;
    }
    v47 = 23;
  }
  else
  {
    v47 = 22;
  }
  LOBYTE(v9) = 3;
LABEL_48:
  WPP_RECORDER_SF_(*v4, v9, 10, v47, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
}
