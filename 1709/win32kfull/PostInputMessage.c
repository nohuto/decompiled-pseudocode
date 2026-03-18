/*
 * XREFs of PostInputMessage @ 0x1C009ED18
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0006FE8 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C00070E0 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0052930 (EditionPostRawMouseInputMessage.c)
 *     EditionPostInputMessage @ 0x1C009D0B0 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1C009E1C0 (EditionPostMouseMoveToQ.c)
 *     PostPointerEventMessage @ 0x1C00C6E10 (PostPointerEventMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00C81B8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0104150 (EditionHandleAndPostKeyEvent.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0121060 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B5F24 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01B9814 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01C0328 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01C07E0 (EditionPostMouseWheelToForeground.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F802C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006BF8 (IsAdaptiveQueueDetachExempted.c)
 *     PostUpdateKeyStateEvent @ 0x1C00510EC (PostUpdateKeyStateEvent.c)
 *     GetInputDelegate @ 0x1C009ECC8 (GetInputDelegate.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C009ECF0 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C009F1AC (IsPointerInputMessageWithState.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C009FB1C (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     WakeSomeone @ 0x1C00A0A2C (WakeSomeone.c)
 *     CalcWakeMask @ 0x1C00A7D90 (CalcWakeMask.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00CF720 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C010814C (DwmAsyncNotifyInputActivity.c)
 *     ?GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C010DB4C (-GetCoalesceableMouseMessage@@YAPEAUtagQMSG@@IPEA_KPEAU1@PEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     CleanInputMessage @ 0x1C0111FEC (CleanInputMessage.c)
 *     ?SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z @ 0x1C01A5BD0 (-SetPointerInfoNodeMessagePosted@PointerFrameList@@YAH_KIH@Z.c)
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC058 (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

struct tagQMSG *PostInputMessage(__int64 a1, __int64 a2, unsigned int a3, ...)
{
  int v6; // r13d
  int v7; // eax
  struct tagTHREADINFO *v8; // r11
  struct tagINPUT_MESSAGE_SOURCE *v9; // r14
  int v10; // r15d
  int v11; // r12d
  struct tagTHREADINFO *InputDelegate; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rsi
  int v15; // r15d
  struct tagQMSG *result; // rax
  struct tagQMSG *v17; // rsi
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rcx
  const struct tagINPUT_TRANSFORM *v21; // r9
  struct tagQMSG *CoalesceableMouseMessage; // rax
  void *v23; // rax
  __int64 v24; // rax
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int8 v28; // al
  bool v29; // zf
  struct _KEVENT *v30; // rcx
  __int64 v31; // rax
  _QWORD v32[9]; // [rsp+70h] [rbp-48h] BYREF
  struct tagTHREADINFO *v33; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v34; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v36; // [rsp+E0h] [rbp+28h]
  __int64 v37; // [rsp+E8h] [rbp+30h]
  __int64 v38; // [rsp+F0h] [rbp+38h]
  __int64 v39; // [rsp+F8h] [rbp+40h]
  __int64 v40; // [rsp+100h] [rbp+48h]
  struct tagINPUT_MESSAGE_SOURCE *v41; // [rsp+108h] [rbp+50h]
  __int64 v42; // [rsp+110h] [rbp+58h]
  __int64 v43; // [rsp+118h] [rbp+60h]
  va_list va1; // [rsp+120h] [rbp+68h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v34 = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v37 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, struct tagINPUT_MESSAGE_SOURCE *);
  v42 = va_arg(va1, _QWORD);
  v43 = va_arg(va1, _QWORD);
  v6 = 0;
  v7 = CalcWakeMask(a3, a3, 0LL);
  v9 = v41;
  v10 = v7;
  v33 = v8;
  if ( !v41 || (v11 = (_DWORD)v8 + 1, *((_DWORD *)v41 + 1) != 2) )
    v11 = (int)v8;
  if ( (a3 == 513 || a3 == 516)
    && a2
    && (*(_DWORD *)(a2 + 336) & 6) != 0
    && *(struct tagTHREADINFO **)(*(_QWORD *)(a2 + 16) + 1208LL) == v8
    && v41
    && ((*(_DWORD *)v41 - 2) & 0xFFFFFFEF) == 0 )
  {
    if ( *(struct tagTHREADINFO **)(a1 + 136) == v8 )
    {
      v32[0] = a1 + 136;
      v32[1] = a2;
      HMAssignmentLock(v32);
    }
    *(_BYTE *)(a1 + 144) |= (a3 != 513) + 1;
  }
  else if ( *(_QWORD *)(a1 + 136) )
  {
    if ( a3 == 514 || a3 == 517 )
    {
      a2 = *(_QWORD *)(a1 + 136);
      v28 = (a3 == 514) - 3;
      v29 = (v28 & *(_BYTE *)(a1 + 144)) == 0;
      *(_BYTE *)(a1 + 144) &= v28;
      if ( v29 )
        HMAssignmentUnlock(a1 + 136);
    }
    else if ( a3 == 512 )
    {
      a2 = *(_QWORD *)(a1 + 136);
    }
  }
  InputDelegate = (struct tagTHREADINFO *)GetInputDelegate(a2, v10);
  v13 = InputDelegate;
  if ( InputDelegate )
  {
    vAdjustDelegatePriority(InputDelegate);
    a1 = *((_QWORD *)v13 + 51);
    v6 = 1;
    v33 = v13;
  }
  v14 = *(_QWORD *)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 380) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v15 = v40;
  if ( (v40 & 1) != 0 || !v14 || (*(_DWORD *)(v14 + 100) & 2) != 0 )
    v14 = 0LL;
  if ( v14 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = GetCoalesceableMouseMessage(a3, (unsigned __int64 *)va, (struct tagQMSG *)v14, v9);
    v17 = CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      CleanInputMessage(a3, CoalesceableMouseMessage);
LABEL_16:
      *((_DWORD *)v17 + 25) = (32 * v6) | *((_DWORD *)v17 + 25) & 0xFFFFFFDF;
      v18 = LogicalQmsgCursorPos(a2, a1);
      StoreQMessage(v17, a2, a3, v34, v36, v37, v38, 0, v39, v15, v9, v18, v42, v43);
      if ( (unsigned int)IsPointerInputMessageWithState(a3) )
      {
        if ( (gdwMitConfig & 4) != 0 )
        {
          CTouchProcessor::MarkPointerMessageGenerated(
            gpTouchProcessor,
            a3,
            *((_QWORD *)v17 + 4),
            *((_QWORD *)v17 + 5),
            -__CFSHR__(*((_DWORD *)v17 + 25), 6),
            v17);
        }
        else
        {
          PointerFrameList::SetPointerInfoNodeMessagePosted(
            *((PointerFrameList **)v17 + 5),
            *((unsigned int *)v17 + 6),
            -__CFSHR__(*((_DWORD *)v17 + 25), 6),
            v19);
          ReferenceMsgData(*((_QWORD *)v17 + 5), 2LL, v17);
        }
      }
      if ( IsMiPMouseMessage(a3) )
      {
        if ( v9 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v9) )
          {
            *((_DWORD *)v17 + 25) |= 0x800u;
            if ( a2 )
              *((_DWORD *)v17 + 25) ^= (*((_DWORD *)v17 + 25) ^ ((unsigned int)InputTransform::OnInput(
                                                                                 (InputTransform *)a2,
                                                                                 *((struct tagWND **)v17 + 16),
                                                                                 0LL,
                                                                                 v21) << 13)) & 0x2000;
          }
        }
      }
      if ( !gfShellFrameHangResilient )
        goto LABEL_23;
      if ( v11 )
        goto LABEL_23;
      if ( *(_DWORD *)(a1 + 384) <= 1u )
        goto LABEL_23;
      v20 = gptiCurrent;
      v24 = *(_QWORD *)(gptiCurrent + 440LL);
      if ( *(_QWORD *)(v24 + 40) || *(_QWORD *)(v24 + 48) )
        goto LABEL_23;
      v25 = 0;
      if ( a2 && (v27 = *(_QWORD *)(a2 + 16), a2 == *(_QWORD *)(v27 + 1352)) )
      {
        v25 = 1;
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 120);
        if ( !v26 )
          goto LABEL_23;
        v27 = *(_QWORD *)(v26 + 16);
        if ( v26 != *(_QWORD *)(v27 + 1352) )
          goto LABEL_23;
      }
      if ( !v27 || IsAdaptiveQueueDetachExempted(v27) )
        goto LABEL_23;
      if ( a3 == 260 || a3 == 513 || a3 == 516 || a3 == 519 )
        goto LABEL_75;
      if ( a3 <= 0x209 )
      {
LABEL_23:
        if ( a3 - 256 <= 1 || a3 - 513 <= 0xD && (v20 = 8707LL, _bittest((const int *)&v20, a3 - 513)) )
        {
          v23 = (void *)ReferenceDwmApiPort(v20);
          DwmAsyncNotifyInputActivity(v23);
        }
        goto LABEL_26;
      }
      if ( a3 <= 0x20B || a3 == 526 )
        goto LABEL_75;
      if ( a3 != 581 )
      {
        if ( a3 == 582 )
        {
LABEL_75:
          KeSetEvent(*(PRKEVENT *)(v27 + 1344), 1, 0);
          goto LABEL_23;
        }
        goto LABEL_23;
      }
      if ( v25 )
      {
        v30 = *(struct _KEVENT **)(*(_QWORD *)(a2 + 16) + 1344LL);
      }
      else
      {
        v31 = *(_QWORD *)(v27 + 648);
        if ( !v31 || (*(_DWORD *)(v31 + 196) & 0x100000) == 0 )
          goto LABEL_26;
        v30 = *(struct _KEVENT **)(v27 + 1344);
      }
      KeSetEvent(v30, 1, 0);
LABEL_26:
      WakeSomeone(a1, v33, a3, v17);
      return (struct tagQMSG *)1;
    }
  }
  result = AllocQEntryEx((struct tagMLIST *)(a1 + 24), 0LL, 0);
  v17 = result;
  if ( result )
    goto LABEL_16;
  return result;
}
