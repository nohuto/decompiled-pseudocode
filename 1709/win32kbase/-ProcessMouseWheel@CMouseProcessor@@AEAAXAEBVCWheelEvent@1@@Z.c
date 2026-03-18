/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0130B20 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00129F8 (ApiSetEditionPostInputMessage.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C001463C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C001724C (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00172B8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00173C0 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0017988 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C0017AD4 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C0017AF0 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0017B0C (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00AA714 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00AA840 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00DB258 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0131A0C (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0131B84 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C013A7AC (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C013B10C (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  struct tagPOINT *UserWindow; // rdi
  __int64 v5; // r15
  char v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // r13
  char v10; // r9
  struct tagPOINT v11; // xmm0_8
  char v12; // bl
  bool v13; // cf
  unsigned __int16 v14; // r9
  bool ShouldDeliverWheelEventToInputDest; // r15
  unsigned int HitTestContext; // eax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  CMouseProcessor *v19; // rcx
  __int64 v20; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm0
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // r8d
  int v34; // ebx
  __int64 PtiFromInputDest; // rax
  struct tagPOINT *v36; // r14
  CMouseProcessor *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 *v40; // r10
  __int64 v41; // rax
  int v42; // ebx
  struct tagPOINT v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v46[12]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v47[12]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v48; // [rsp+210h] [rbp+110h] BYREF
  int v49; // [rsp+218h] [rbp+118h]
  int v50; // [rsp+21Ch] [rbp+11Ch]
  int v51; // [rsp+220h] [rbp+120h]
  __int64 ExtraInfoForHook; // [rsp+228h] [rbp+128h]
  int v53[48]; // [rsp+230h] [rbp+130h] BYREF
  char v54; // [rsp+2F0h] [rbp+1F0h]
  _OWORD v55[13]; // [rsp+300h] [rbp+200h] BYREF

  UserWindow = 0LL;
  LODWORD(v45) = 0;
  v5 = *(_QWORD *)a2;
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x400) != 0 )
    v7 = (__int64 *)(v5 + 48);
  else
    v7 = (__int64 *)((char *)gpsi + 4944);
  v8 = *v7;
  v9 = (unsigned __int16)v8 | (WORD2(v8) << 16);
  memset(v53, 0, sizeof(v53));
  v54 = 0;
  v48 = v8;
  v49 = *(unsigned __int16 *)(v5 + 18) << 16;
  v50 = *(unsigned __int8 *)(v5 + 88) >> 7;
  v51 = *(_DWORD *)(v5 + 64);
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v10 = ~*(_BYTE *)(v5 + 88);
  v11 = *(struct tagPOINT *)(v5 + 108);
  v12 = 1;
  v44 = *(_DWORD *)(v5 + 116);
  v13 = *((_DWORD *)a2 + 3) != 0;
  v43 = v11;
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v48, v13 ? 526 : 522, &v43, v10 & 1) )
  {
    v14 = 36;
LABEL_24:
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xAu, v14, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
    goto LABEL_42;
  }
  if ( gpqForeground && (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) == 0 )
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2608, 0LL, 0);
  ShouldDeliverWheelEventToInputDest = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    v43 = (struct tagPOINT)*((_QWORD *)gpsi + 618);
    v45 = *((_QWORD *)gpsi + 617);
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a2);
    v18 = CMouseProcessor::MouseHitTest(
            (volatile signed __int32 *)this,
            v55,
            &v43,
            (__int64)&v45,
            v17,
            1,
            HitTestContext,
            0);
    CInputDest::operator=((__int64)v53, v18);
    CInputDest::~CInputDest((CInputDest *)v55);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v19,
                                           a2,
                                           (const struct CInputDest *)v53);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      if ( !CInputDest::DoesBelongToForeground((CInputDest *)v53) )
        CMouseProcessor::Telemetry::OnBackgroundMouseInput((const struct CInputDest *)v53);
      v20 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0 && *(_DWORD *)(v20 + 84) == 1
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v20 + 108), (__int64)v53, (__int64 *)this + 1) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2608, (__int64)v53, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v53);
      if ( !(unsigned int)HasThreadRequestedLegacyMouseWheelRouting(ThreadInfo) )
        goto LABEL_19;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v47);
      v23 = InputDestFromForegroundFocus[1];
      v46[0] = *InputDestFromForegroundFocus;
      v24 = InputDestFromForegroundFocus[2];
      v46[1] = v23;
      v25 = InputDestFromForegroundFocus[3];
      v46[2] = v24;
      v26 = InputDestFromForegroundFocus[4];
      v46[3] = v25;
      v27 = InputDestFromForegroundFocus[5];
      v46[4] = v26;
      v28 = InputDestFromForegroundFocus[6];
      v46[5] = v27;
      v46[6] = v28;
      v29 = InputDestFromForegroundFocus[7];
      InputDestFromForegroundFocus += 8;
      v46[7] = v29;
      v30 = InputDestFromForegroundFocus[1];
      v46[8] = *InputDestFromForegroundFocus;
      v31 = InputDestFromForegroundFocus[2];
      v46[9] = v30;
      v32 = InputDestFromForegroundFocus[3];
      v46[10] = v31;
      v46[11] = v32;
      CInputDest::CInputDest((CInputDest *)v55, (const struct CInputDest *)v46);
      v6 = 1;
      if ( CInputDest::operator==(v53, (__int64)v55) )
LABEL_19:
        v12 = 0;
      if ( (v6 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v55);
      if ( v12 )
      {
        v14 = 37;
        goto LABEL_24;
      }
    }
  }
  v33 = 2 * (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
  v34 = v33 | 0x10;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x100) == 0 )
    v34 = v33;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v53, 1);
    if ( !(unsigned int)HasHidTable(PtiFromInputDest)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest((__int64)v53, 1) + 400) + 784LL)
                    + 100LL) & 2) == 0 )
    {
      if ( CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) )
      {
        v36 = &v43;
        v43 = *(struct tagPOINT *)(*(_QWORD *)a2 + 108LL);
      }
      else
      {
        v36 = 0LL;
      }
      if ( CInputDest::IsCompositionInput((CInputDest *)v53) )
        UserWindow = (struct tagPOINT *)CInputDest::GetUserWindow((CInputDest *)v53);
      v38 = CMouseProcessor::AddMouseKeysToWParam(v37, *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL) << 16);
      ApiSetEditionPostInputMessage(
        (__int64)v53,
        0LL,
        (__int64)UserWindow,
        *((_DWORD *)a2 + 3) != 0 ? 526 : 522,
        v38,
        v9,
        *(_DWORD *)(v39 + 64),
        *(_QWORD *)(v39 + 72),
        *(_QWORD *)(v39 + 32),
        v34,
        v40,
        v39,
        (__int64)v36);
    }
  }
  else if ( gpqForeground )
  {
    v41 = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
    if ( !(unsigned int)HasHidTable(v41)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1) + 400) + 784LL) + 100LL) & 2) == 0 )
    {
      v42 = v34 | 0x40;
      if ( CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) )
      {
        UserWindow = &v43;
        v43 = *(struct tagPOINT *)(*(_QWORD *)a2 + 108LL);
      }
      ApiSetEditionPostMouseWheelToForeground(
        *((_DWORD *)a2 + 3) != 0 ? 526 : 522,
        *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL) << 16,
        v9,
        *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        *(_QWORD *)(*(_QWORD *)a2 + 72LL),
        *(_QWORD *)(*(_QWORD *)a2 + 32LL),
        v42,
        *(_QWORD *)a2 + 80LL,
        (__int64)UserWindow);
    }
  }
LABEL_42:
  CInputDest::~CInputDest((CInputDest *)v53);
}
