/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0134040 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0036EF4 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C0036F08 (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0036F78 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00370E0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C0037938 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C003F988 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     MonitorFromMousePoint @ 0x1C00557F0 (MonitorFromMousePoint.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0060044 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0060194 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C00601B0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00601CC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00651F8 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??9CInputDest@@QEBA_NAEBV0@@Z @ 0x1C01098F0 (--9CInputDest@@QEBA_NAEBV0@@Z.c)
 *     ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C013477C (-GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA-AW4DIT_HITTESTATTRIBUTES@@XZ.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C01347C4 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01349BC (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     _anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0134B30 (_anonymous_namespace_--HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@PEAUHMONITOR__@@I@Z @ 0x1C0135DAC (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@PEAUHMONITOR__@@I@Z.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0135EF8 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C013EF44 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C013F8D8 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  HMONITOR UserWindow; // r13
  __int64 v5; // rbx
  char v6; // r12
  struct tagPOINT v7; // rdi
  __int64 v8; // xmm0_8
  int v9; // eax
  char v10; // bl
  __int64 v11; // rdx
  unsigned int WheelMessage; // eax
  unsigned __int16 v13; // r9
  bool ShouldDeliverWheelEventToInputDest; // si
  BOOL v15; // esi
  unsigned __int64 v16; // rdi
  unsigned int HitTestContext; // ebx
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  int HitTestAttributes; // eax
  _QWORD *v21; // rax
  CMouseProcessor *v22; // rcx
  __int64 v23; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  char v35; // bl
  int v36; // r8d
  int v37; // edi
  CMouseProcessor *v38; // rcx
  CMouseProcessor *v39; // rcx
  __int64 v40; // rsi
  int v41; // edx
  __int64 *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // r15
  int v45; // r12d
  __int64 v46; // rdi
  __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // rbx
  unsigned __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  int v53; // r12d
  unsigned __int64 v54; // rsi
  int v55; // r10d
  int v56; // edi
  __int64 v57; // rdx
  CMouseProcessor::CWheelEvent *v58; // rcx
  int v59; // eax
  unsigned int v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+70h] [rbp-90h] BYREF
  struct tagPOINT v63; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  CMouseProcessor::CMouseEvent *v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A8h] [rbp-58h]
  _OWORD v70[11]; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v71[11]; // [rsp+160h] [rbp+60h] BYREF
  struct tagPOINT v72; // [rsp+210h] [rbp+110h] BYREF
  int v73; // [rsp+218h] [rbp+118h]
  int v74; // [rsp+21Ch] [rbp+11Ch]
  int v75; // [rsp+220h] [rbp+120h]
  __int64 ExtraInfoForHook; // [rsp+228h] [rbp+128h]
  unsigned int v77[44]; // [rsp+230h] [rbp+130h] BYREF
  char v78; // [rsp+2E0h] [rbp+1E0h]
  _BYTE v79[192]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _OWORD v80[12]; // [rsp+3B0h] [rbp+2B0h] BYREF

  UserWindow = 0LL;
  v65 = a2;
  v60 = 0;
  v5 = *(_QWORD *)a2;
  v6 = 0;
  v7 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
  v63 = v7;
  if ( (*(_DWORD *)(v5 + 88) & 0x400) != 0 )
    v7 = *(struct tagPOINT *)(v5 + 48);
  v66 = (LOWORD(v7.y) << 16) | LOWORD(v7.x);
  memset(v77, 0, sizeof(v77));
  v78 = 0;
  v72 = v7;
  v73 = *(unsigned __int16 *)(v5 + 18) << 16;
  v74 = *(unsigned __int8 *)(v5 + 88) >> 7;
  v75 = *(_DWORD *)(v5 + 64);
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v8 = *(_QWORD *)(v5 + 108);
  v9 = *(_DWORD *)(v5 + 116);
  v10 = ~*(_BYTE *)(v5 + 88);
  v68 = v8;
  v69 = v9;
  WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2, v11);
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v72, WheelMessage, &v68, v10 & 1) )
  {
    v13 = 36;
LABEL_24:
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xAu, v13, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
    goto LABEL_39;
  }
  if ( gpqForeground && (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) == 0 )
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2464, 0LL, 0);
  ShouldDeliverWheelEventToInputDest = 0;
  v62 = 0;
  v60 = 0;
  if ( *((_DWORD *)a2 + 2) || (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0 )
  {
    v61 = *((_QWORD *)gpsi + 619);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) != 0;
    v16 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a2);
    HitTestAttributes = CMouseProcessor::CWheelEvent::GetHitTestAttributes(v19, v18);
    v21 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            v80,
            &v63,
            (__int64)&v61,
            v16,
            HitTestAttributes,
            HitTestContext,
            v15,
            &v62,
            &v60);
    CInputDest::operator=((__int64)v77, v21);
    CInputDest::~CInputDest((CInputDest *)v80);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v22,
                                           a2,
                                           (const struct CInputDest *)v77);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((CInputDest *)v77) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v77);
      v23 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0 && *(_DWORD *)(v23 + 84) == 1
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v23 + 108), v77, (__int64 *)this + 1) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2464, (__int64)v77, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v77);
      if ( !anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting((__int64)ThreadInfo) )
        goto LABEL_19;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v71);
      v26 = InputDestFromForegroundFocus[1];
      v70[0] = *InputDestFromForegroundFocus;
      v27 = InputDestFromForegroundFocus[2];
      v70[1] = v26;
      v28 = InputDestFromForegroundFocus[3];
      v70[2] = v27;
      v29 = InputDestFromForegroundFocus[4];
      v70[3] = v28;
      v30 = InputDestFromForegroundFocus[5];
      v70[4] = v29;
      v31 = InputDestFromForegroundFocus[6];
      v70[5] = v30;
      v32 = InputDestFromForegroundFocus[8];
      v70[6] = v31;
      v70[7] = InputDestFromForegroundFocus[7];
      v33 = InputDestFromForegroundFocus[9];
      v70[8] = v32;
      v34 = InputDestFromForegroundFocus[10];
      v70[9] = v33;
      v70[10] = v34;
      CInputDest::CInputDest((CInputDest *)v79, (const struct tagINPUTDEST *)v70);
      v6 = 1;
      v35 = 1;
      if ( !CInputDest::operator!=(v77, (__int64)v79) )
LABEL_19:
        v35 = 0;
      if ( (v6 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v79);
      if ( v35 )
      {
        v13 = 37;
        goto LABEL_24;
      }
    }
  }
  v36 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  v37 = v36 | 0x10;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x100) == 0 )
    v37 = v36;
  LODWORD(v61) = v37;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    if ( !anonymous_namespace_::InMouseRawInputMode((__int64)v77, 1LL, 1) )
    {
      if ( v62 )
      {
        if ( MonitorFromMousePoint(*(_QWORD *)&v63) )
          UserWindow = *(HMONITOR *)MonitorFromMousePoint(*(_QWORD *)&v63);
        CMouseProcessor::SendWheelInputToMT(v38, (const struct CInputDest *)v77, a2, UserWindow, v60);
      }
      else
      {
        v67 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
        v64 = (unsigned __int64)&v67 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
        if ( CInputDest::IsCompositionInput((CInputDest *)v77) )
          UserWindow = (HMONITOR)CInputDest::GetUserWindow((CInputDest *)v77);
        v40 = *(_QWORD *)a2;
        v41 = *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL);
        v42 = (__int64 *)(*(_QWORD *)a2 + 80LL);
        v43 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
        v44 = *(_QWORD *)(v40 + 72);
        v45 = *(_DWORD *)(v40 + 64);
        v46 = CMouseProcessor::AddMouseKeysToWParam(v39, (unsigned int)(v41 << 16));
        v48 = CMouseProcessor::CWheelEvent::GetWheelMessage(v65, v47);
        ApiSetEditionPostInputMessage(
          (__int64)v77,
          (__int64)UserWindow,
          v48,
          v46,
          v66,
          v45,
          v44,
          v43,
          v61,
          v42,
          v40,
          v64);
      }
    }
  }
  else if ( gpqForeground && !anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 1) )
  {
    v49 = *(_QWORD *)a2;
    v50 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
    v51 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
    v52 = *(_QWORD *)(v49 + 72);
    v53 = *(_DWORD *)(v49 + 64);
    v64 = v50;
    v54 = (unsigned __int64)&v64 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(v65) != 0);
    LODWORD(v61) = v37 | 0x40;
    v56 = v55 << 16;
    v59 = CMouseProcessor::CWheelEvent::GetWheelMessage(v58, v57);
    ApiSetEditionPostMouseWheelToForeground(v59, v56, v66, v53, v52, v51, v61, v49 + 80, v54);
  }
LABEL_39:
  CInputDest::~CInputDest((CInputDest *)v77);
}
