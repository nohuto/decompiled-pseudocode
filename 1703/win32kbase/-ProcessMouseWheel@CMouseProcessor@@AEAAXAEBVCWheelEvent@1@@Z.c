/*
 * XREFs of ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C0131420 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0045090 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C00451D0 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00451EC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C00454AC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004575C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0047DD0 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0047F3C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00805C8 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00A12D0 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D51A8 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C00D51C0 (--1CInputDest@@QEAA@XZ.c)
 *     ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x1C0132364 (-ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z.c)
 *     HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01324E0 (HasThreadRequestedLegacyMouseWheelRouting.c)
 *     ApiSetEditionLLMouseWheelHook @ 0x1C013B4E8 (ApiSetEditionLLMouseWheelHook.c)
 *     ApiSetEditionPostMouseWheelToForeground @ 0x1C013BEE4 (ApiSetEditionPostMouseWheelToForeground.c)
 */

void __fastcall CMouseProcessor::ProcessMouseWheel(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2)
{
  struct tagWND *UserWindow; // r14
  __int64 v5; // r13
  char v6; // si
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // xmm0_8
  char v10; // bl
  _BOOL8 v11; // r9
  bool v12; // cf
  int v13; // edx
  int v14; // r9d
  bool ShouldDeliverWheelEventToInputDest; // r13
  _QWORD *v16; // rax
  CMouseProcessor *v17; // rcx
  __int64 v18; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  _OWORD *InputDestFromForegroundFocus; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  int v31; // r12d
  __int64 PtiFromInputDest; // rax
  int v33; // r13d
  __int64 v34; // r8
  CMouseProcessor *v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rdi
  int v38; // esi
  __int64 v39; // rax
  __int64 *v40; // r10
  __int64 v41; // r11
  __int64 v42; // rax
  int v43; // r12d
  __int64 *v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  _OWORD v48[12]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v49[12]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v50; // [rsp+220h] [rbp+120h] BYREF
  int v51; // [rsp+228h] [rbp+128h]
  int v52; // [rsp+22Ch] [rbp+12Ch]
  int v53; // [rsp+230h] [rbp+130h]
  __int64 ExtraInfoForHook; // [rsp+238h] [rbp+138h]
  int v55[48]; // [rsp+240h] [rbp+140h] BYREF
  char v56; // [rsp+300h] [rbp+200h]
  _OWORD v57[13]; // [rsp+310h] [rbp+210h] BYREF

  UserWindow = 0LL;
  LODWORD(v44) = 0;
  v5 = *(_QWORD *)a2;
  v6 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 0x400) != 0 )
    v7 = (__int64 *)(v5 + 48);
  else
    v7 = (__int64 *)((char *)gpsi + 5368);
  v8 = *v7;
  v47 = (WORD2(v8) << 16) | (unsigned __int16)v8;
  memset(v55, 0, sizeof(v55));
  v56 = 0;
  v50 = v8;
  v51 = *(unsigned __int16 *)(v5 + 18) << 16;
  v52 = *(unsigned __int8 *)(v5 + 88) >> 7;
  v53 = *(_DWORD *)(v5 + 64);
  ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
  v9 = *(_QWORD *)(v5 + 108);
  v10 = 1;
  v11 = (*(_BYTE *)(v5 + 88) & 1) == 0;
  v46 = *(_DWORD *)(v5 + 116);
  v12 = *((_DWORD *)a2 + 3) != 0;
  v45 = v9;
  if ( (unsigned int)ApiSetEditionLLMouseWheelHook(&v50, v12 ? 526 : 522, &v45, v11) )
  {
    v14 = 36;
LABEL_22:
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v13, 10, v14, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
    goto LABEL_38;
  }
  if ( gpqForeground && (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) == 0 )
    CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, 0LL, 0);
  ShouldDeliverWheelEventToInputDest = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    v45 = *((_QWORD *)gpsi + 671);
    v44 = (__int64 *)*((_QWORD *)gpsi + 670);
    v16 = CMouseProcessor::MouseHitTest(
            (__int64)this,
            v57,
            &v45,
            (__int64)&v44,
            *(_QWORD *)(*(_QWORD *)a2 + 72LL),
            1,
            *(_DWORD *)(*(_QWORD *)a2 + 124LL),
            0);
    CInputDest::operator=((__int64)v55, v16);
    CInputDest::~CInputDest((CInputDest *)v57);
    ShouldDeliverWheelEventToInputDest = CMouseProcessor::ShouldDeliverWheelEventToInputDest(
                                           v17,
                                           a2,
                                           (const struct CInputDest *)v55);
    if ( ShouldDeliverWheelEventToInputDest )
    {
      v18 = *(_QWORD *)a2;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 88LL) & 8) != 0 && *(_DWORD *)(v18 + 84) == 1
        || anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v18 + 108), (__int64)v55, (_QWORD *)this + 1) )
      {
        CMouseProcessor::CMouseRawInput::PostRawMouse((__int64)this + 2456, (__int64)v55, 0);
      }
      ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v55);
      if ( !(unsigned int)HasThreadRequestedLegacyMouseWheelRouting(ThreadInfo) )
        goto LABEL_17;
      InputDestFromForegroundFocus = QHelper::GetInputDestFromForegroundFocus(v49);
      v21 = InputDestFromForegroundFocus[1];
      v48[0] = *InputDestFromForegroundFocus;
      v22 = InputDestFromForegroundFocus[2];
      v48[1] = v21;
      v23 = InputDestFromForegroundFocus[3];
      v48[2] = v22;
      v24 = InputDestFromForegroundFocus[4];
      v48[3] = v23;
      v25 = InputDestFromForegroundFocus[5];
      v48[4] = v24;
      v26 = InputDestFromForegroundFocus[6];
      v48[5] = v25;
      v48[6] = v26;
      v27 = InputDestFromForegroundFocus[7];
      InputDestFromForegroundFocus += 8;
      v48[7] = v27;
      v28 = InputDestFromForegroundFocus[1];
      v48[8] = *InputDestFromForegroundFocus;
      v29 = InputDestFromForegroundFocus[2];
      v48[9] = v28;
      v30 = InputDestFromForegroundFocus[3];
      v48[10] = v29;
      v48[11] = v30;
      CInputDest::CInputDest((CInputDest *)v57, (const struct CInputDest *)v48);
      v6 = 1;
      if ( CInputDest::operator==(v55, (__int64)v57) )
LABEL_17:
        v10 = 0;
      if ( (v6 & 1) != 0 )
        CInputDest::~CInputDest((CInputDest *)v57);
      if ( v10 )
      {
        v14 = 37;
        goto LABEL_22;
      }
    }
  }
  v31 = (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0 ? 2 : 0;
  if ( ShouldDeliverWheelEventToInputDest )
  {
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v55, 1);
    if ( !(unsigned int)HasHidTable(PtiFromInputDest)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest((__int64)v55, 1) + 376) + 776LL)
                    + 100LL) & 2) == 0 )
    {
      v33 = (*(_DWORD *)(*(_QWORD *)a2 + 88LL) >> 7) & 2;
      if ( (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) )
      {
        v45 = *(_QWORD *)(v34 + 108);
        v44 = &v45;
      }
      else
      {
        v44 = 0LL;
      }
      if ( CInputDest::IsCompositionInput((CInputDest *)v55) )
        UserWindow = CInputDest::GetUserWindow((CInputDest *)v55);
      v36 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
      v37 = *(_QWORD *)(*(_QWORD *)a2 + 72LL);
      v38 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
      v39 = CMouseProcessor::AddMouseKeysToWParam(
              v35,
              (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)a2 + 18LL) << 16);
      ApiSetEditionPostInputMessage(
        (__int64)v55,
        0LL,
        (__int64)UserWindow,
        *((_DWORD *)a2 + 3) != 0 ? 526 : 522,
        v39,
        v47,
        v38,
        v37,
        v36,
        v31,
        v40,
        v41,
        (__int64)v44,
        v33);
    }
  }
  else if ( gpqForeground )
  {
    v42 = anonymous_namespace_::GetPtiFromInputDest(0LL, 1);
    if ( !(unsigned int)HasHidTable(v42)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(0LL, 1) + 376) + 776LL) + 100LL) & 2) == 0 )
    {
      v43 = v31 | 8;
      if ( (unsigned __int8)CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) )
      {
        UserWindow = (struct tagWND *)&v45;
        v45 = *(_QWORD *)(*(_QWORD *)a2 + 108LL);
      }
      ApiSetEditionPostMouseWheelToForeground(
        *((_DWORD *)a2 + 3) != 0 ? 526 : 522,
        *(unsigned __int16 *)(*(_QWORD *)a2 + 18LL) << 16,
        v47,
        *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        *(_QWORD *)(*(_QWORD *)a2 + 72LL),
        *(_QWORD *)(*(_QWORD *)a2 + 32LL),
        v43,
        *(_QWORD *)a2 + 80LL,
        (__int64)UserWindow);
    }
  }
LABEL_38:
  CInputDest::~CInputDest((CInputDest *)v55);
}
