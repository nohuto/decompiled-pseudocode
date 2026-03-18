/*
 * XREFs of PostInputMessage @ 0x1C0049470
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0002188 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002280 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostMouseMoveToQ @ 0x1C0047430 (EditionPostMouseMoveToQ.c)
 *     PostPointerEventMessage @ 0x1C00B0620 (PostPointerEventMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00B1960 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C00BD670 (EditionPostRawMouseInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00CB4B0 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostInputMessage @ 0x1C00F5680 (EditionPostInputMessage.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0117400 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C019C3C4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C019CB40 (-PostRawMouseInput@@YAHPEAUtagQ@@KPEAXPEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B2F74 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01BC4F8 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01BC900 (EditionPostMouseWheelToForeground.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01EDB90 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002114 (IsAdaptiveQueueDetachExempted.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0049220 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0049448 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004D464 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CalcWakeMask @ 0x1C00522A0 (CalcWakeMask.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C00B936C (PostUpdateKeyStateEvent.c)
 *     CleanInputMessage @ 0x1C00CB8DC (CleanInputMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E11E8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00F9CE4 (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00FC720 (DwmAsyncNotifyInputActivity.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C0199FA4 (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C740C (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagMLIST *a1,
        InputTransform *this,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        __int64 a11,
        __int64 a12)
{
  int v15; // r13d
  int v16; // eax
  __int64 v17; // r11
  struct tagINPUT_MESSAGE_SOURCE *v18; // r14
  int v19; // r15d
  int v20; // r12d
  __int64 v21; // rsi
  int v22; // r15d
  __int64 result; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const struct tagINPUT_TRANSFORM *v30; // r9
  struct tagQMSG *CoalesceableMouseMessage; // rax
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rax
  int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // r14
  void *v38; // rax
  unsigned __int8 v39; // al
  bool v40; // zf
  struct _KEVENT *v41; // rcx
  __int64 v42; // rax
  _QWORD v43[9]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v44; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v45; // [rsp+D8h] [rbp+20h] BYREF

  v45 = a4;
  v15 = 0;
  v16 = CalcWakeMask(a3, a3, 0LL);
  v18 = a10;
  v19 = v16;
  v44 = v17;
  if ( !a10 || (v20 = v17 + 1, *((_DWORD *)a10 + 1) != 2) )
    v20 = v17;
  if ( (a3 == 513 || a3 == 516)
    && this
    && (*((_DWORD *)this + 84) & 6) != 0
    && *(_QWORD *)(*((_QWORD *)this + 2) + 1120LL) == v17
    && a10
    && ((*(_DWORD *)a10 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *((_QWORD *)a1 + 13) == v17 )
    {
      v43[0] = (char *)a1 + 104;
      v43[1] = this;
      HMAssignmentLock(v43);
    }
    *((_BYTE *)a1 + 112) |= (a3 != 513) + 1;
  }
  else if ( *((_QWORD *)a1 + 13) )
  {
    if ( a3 == 514 || a3 == 517 )
    {
      this = (InputTransform *)*((_QWORD *)a1 + 13);
      v39 = (a3 == 514) - 3;
      v40 = (v39 & *((_BYTE *)a1 + 112)) == 0;
      *((_BYTE *)a1 + 112) &= v39;
      if ( v40 )
        HMAssignmentUnlock((char *)a1 + 104);
    }
    else if ( a3 == 512 )
    {
      this = (InputTransform *)*((_QWORD *)a1 + 13);
    }
  }
  if ( this )
  {
    v32 = *((_DWORD *)this + 84);
    if ( v32 )
    {
      if ( (v32 & v19) != 0 )
      {
        v33 = *((_QWORD *)this + 41);
        if ( v33 )
        {
          vAdjustDelegatePriority(*((struct tagTHREADINFO **)this + 41));
          a1 = *(struct tagMLIST **)(v33 + 384);
          v15 = 1;
          v44 = v33;
        }
      }
    }
  }
  v21 = *((_QWORD *)a1 + 1);
  if ( (*((_DWORD *)a1 + 85) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v22 = a9;
  if ( (a9 & 1) != 0 || !v21 || (*(_DWORD *)(v21 + 100) & 2) != 0 )
    v21 = 0LL;
  if ( v21 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, &v45, (struct tagQMSG *)v21, v18);
    v24 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage(a3, CoalesceableMouseMessage);
LABEL_15:
      *(_DWORD *)(v24 + 100) = (32 * v15) | *(_DWORD *)(v24 + 100) & 0xFFFFFFDF;
      v25 = LogicalQmsgCursorPos(this, a1);
      StoreQMessage(v24, (_DWORD)this, a3, v45, a5, a6, a7, 0, a8, v22, (__int64)v18, v25, a11, a12);
      if ( IsPointerInputMessageWithState(a3) )
      {
        if ( (gdwMitConfig & 4) != 0 )
        {
          CTouchProcessor::MarkPointerMessageGenerated(
            gpTouchProcessor,
            a3,
            *(_QWORD *)(v24 + 32),
            *(_QWORD *)(v24 + 40),
            -__CFSHR__(*(_DWORD *)(v24 + 100), 6),
            (void *)v24);
        }
        else
        {
          PointerFrameList::SetPointerInfoNodeMessagePosted(
            *(PointerFrameList **)(v24 + 40),
            *(unsigned int *)(v24 + 24),
            -__CFSHR__(*(_DWORD *)(v24 + 100), 6),
            v26);
          ReferenceMsgData(*(_QWORD *)(v24 + 40), 2LL, v24);
        }
      }
      if ( IsMiPMouseMessage(a3) )
      {
        if ( v18 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v18) )
          {
            *(_DWORD *)(v24 + 100) |= 0x800u;
            if ( this )
              *(_DWORD *)(v24 + 100) ^= (*(_DWORD *)(v24 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                                   this,
                                                                                   *(struct tagWND **)(v24 + 128),
                                                                                   0LL,
                                                                                   v30) << 13)) & 0x2000;
          }
        }
      }
      if ( !gfShellFrameHangResilient )
        goto LABEL_22;
      if ( v20 )
        goto LABEL_22;
      if ( *((_DWORD *)a1 + 86) <= 1u )
        goto LABEL_22;
      v28 = gptiCurrent;
      v34 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( *(_QWORD *)(v34 + 40) || *(_QWORD *)(v34 + 48) )
        goto LABEL_22;
      v35 = 0;
      if ( this && (v37 = *((_QWORD *)this + 2), this == *(InputTransform **)(v37 + 1264)) )
      {
        v35 = 1;
      }
      else
      {
        v36 = *((_QWORD *)a1 + 11);
        if ( !v36 )
          goto LABEL_22;
        v37 = *(_QWORD *)(v36 + 16);
        if ( v36 != *(_QWORD *)(v37 + 1264) )
          goto LABEL_22;
      }
      if ( !v37 || IsAdaptiveQueueDetachExempted(v37) )
        goto LABEL_22;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_78;
      if ( a3 <= 0x209 )
      {
LABEL_22:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v28 = 8707LL, _bittest((const int *)&v28, a3 - 513)) )
        {
          v38 = (void *)ReferenceDwmApiPort(v28, v27, v29, v30);
          DwmAsyncNotifyInputActivity(v38);
        }
        goto LABEL_25;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_78;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_78:
          KeSetEvent(*(PRKEVENT *)(v37 + 1256), 1, 0);
          goto LABEL_22;
        }
        goto LABEL_22;
      }
      if ( v35 )
      {
        v41 = *(struct _KEVENT **)(*((_QWORD *)this + 2) + 1256LL);
      }
      else
      {
        v42 = *(_QWORD *)(v37 + 592);
        if ( !v42 || (*(_DWORD *)(v42 + 180) & 0x100000) == 0 )
          goto LABEL_25;
        v41 = *(struct _KEVENT **)(v37 + 1256);
      }
      KeSetEvent(v41, 1, 0);
LABEL_25:
      WakeSomeone(a1, v44, a3, v24);
      return 1LL;
    }
  }
  result = (__int64)AllocQEntryEx(a1, 0LL, 0);
  v24 = result;
  if ( result )
    goto LABEL_15;
  return result;
}
