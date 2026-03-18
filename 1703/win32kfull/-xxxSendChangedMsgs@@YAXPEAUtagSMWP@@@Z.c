/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068058
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     WindowHasShadow @ 0x1C00213F8 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0021794 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxRemoveShadow @ 0x1C005D088 (xxxRemoveShadow.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068410 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068444 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ShouldHaveShadow @ 0x1C010312C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011EEFC (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C020B794 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C020B8D0 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  __int64 v4; // rdi
  char v5; // dl
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagWND **Shadow; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  _QWORD v12[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  while ( --v3 >= 0 )
  {
    if ( !*(_QWORD *)v1 )
      goto LABEL_22;
    v4 = HMValidateHandleNoSecure(*(_QWORD *)v1, 1);
    if ( !v4 )
    {
      *(_DWORD *)(v1 + 32) = 6159;
LABEL_37:
      *(_QWORD *)v1 = 0LL;
      goto LABEL_22;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v1 + 8)) )
      goto LABEL_37;
    if ( (*(_DWORD *)(v1 + 32) & 0x40000) != 0 || (*(_DWORD *)(v1 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v1, (struct tagWND *)v4);
    }
    else
    {
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      v12[1] = v4;
      ++*(_DWORD *)(v4 + 8);
      if ( (*(_DWORD *)(v1 + 32) & 0x80u) != 0 )
        xxxRemoveShadow(v4);
      if ( (*(_DWORD *)(v1 + 32) & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v4) )
          xxxAddShadow((struct tagWND *)v4);
      }
      else if ( (unsigned int)WindowHasShadow(v4) )
      {
        if ( (v5 & 0x21) == 1 )
        {
          if ( (v5 & 2) == 0 )
            zzzMoveShadow(v4);
        }
        else
        {
          Shadow = (struct tagWND **)FindShadow((struct tagWND *)v4);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v4);
      }
      v6 = *(_DWORD *)(v1 + 32) & 0x9820;
      if ( (unsigned int)IsWindowDesktopComposed(v4) && v6 != 6144 )
        DwmChildRectChange(v4);
      if ( gfShellFrameHangResilient
        && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v4 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 344LL) != 1 )
          xxxSendTransformableMessageTimeout(v4, 0x47u, 0LL, (struct _LARGE_STRING *)v1, 2, 100, &v13, 1, 0);
      }
      else
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v4, 0x47u, 0LL, (struct _LARGE_STRING *)v1, 0, 0, 0LL, 1, 0);
      }
      if ( (*(_DWORD *)(v1 + 156) & 0x40) != 0 )
      {
        v10 = ValidateHmonitorNoRip(*(_QWORD *)(v1 + 128));
        if ( v10 )
          v11 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 128LL);
        else
          v11 = 0;
        xxxNotifyMonitorChanged((struct tagWND *)v4, v1 + 136, *(struct tagBWL **)(v1 + 160), v11);
      }
      xxxNotifyShellPositioningChanged((struct tagWND *)v4, (struct tagCVR *const)v1);
      CalcWindowFullScreen(v4);
      if ( v6 != 6144 )
        xxxWindowEvent(0x800Bu, (__int64 *)v4, 0, 0, 1);
      ThreadUnlock1(v8, v7);
    }
LABEL_22:
    v1 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1);
}
