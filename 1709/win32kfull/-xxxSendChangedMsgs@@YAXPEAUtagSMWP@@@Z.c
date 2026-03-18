/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxRemoveShadow @ 0x1C0060220 (xxxRemoveShadow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     WindowHasShadow @ 0x1C0066870 (WindowHasShadow.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00670AC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0068128 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0107D7C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C010EE2C (ShouldHaveShadow.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     xxxUpdateShadowZorder @ 0x1C020CC84 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x1C020CDE0 (zzzMoveShadow.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // rsi
  __int64 *ThreadWin32Thread; // rax
  char v12; // dl
  struct tagWND **Shadow; // rax
  int v14; // esi
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF
  char v20; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  while ( --v6 >= 0 )
  {
    if ( !*(_QWORD *)v4 )
      goto LABEL_43;
    LOBYTE(a2) = 1;
    v7 = HMValidateHandleNoSecure(*(_QWORD *)v4, a2);
    if ( !v7 )
    {
      *(_DWORD *)(v4 + 32) = 6159;
LABEL_5:
      *(_QWORD *)v4 = 0LL;
      goto LABEL_43;
    }
    if ( !(unsigned int)IsStillWindowC(*(HWND *)(v4 + 8)) )
      goto LABEL_5;
    if ( (*(_DWORD *)(v4 + 32) & 0x40000) != 0 || (*(_DWORD *)(v4 + 32) & 0x18E7) == 0x1807 )
    {
      PostIAMPosChangedNotification((struct tagCVR *)v4, (struct tagWND *)v7);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v8, a2, a3, a4) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v10 = *ThreadWin32Thread;
      }
      v19[0] = *(_QWORD *)(v10 + 392);
      *(_QWORD *)(v10 + 392) = v19;
      v19[1] = v7;
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      if ( (*(_DWORD *)(v4 + 32) & 0x80u) != 0 )
        xxxRemoveShadow(v7);
      if ( (*(_DWORD *)(v4 + 32) & 0x40) != 0 )
      {
        if ( (unsigned int)ShouldHaveShadow(v7) )
          xxxAddShadow((struct tagWND *)v7);
      }
      else if ( (unsigned int)WindowHasShadow(v7) )
      {
        if ( (v12 & 0x21) == 1 )
        {
          if ( (v12 & 2) == 0 )
            zzzMoveShadow(v7);
        }
        else
        {
          Shadow = (struct tagWND **)FindShadow((struct tagWND *)v7);
          if ( Shadow )
            zzzApplyShadow(*Shadow, Shadow[1]);
        }
        if ( (*(_DWORD *)(v4 + 32) & 4) == 0 )
          xxxUpdateShadowZorder(v7);
      }
      v14 = *(_DWORD *)(v4 + 32) & 0x9820;
      if ( (unsigned int)IsWindowDesktopComposed(v7) && v14 != 6144 )
        DwmChildRectChange(v7);
      if ( gfShellFrameHangResilient
        && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0
        && gptiCurrent != *(_QWORD *)(v7 + 16) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 384LL) != 1 )
          xxxSendTransformableMessageTimeout(v7, 2, 100, (ULONG_PTR)&v20, 1, 0);
      }
      else
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v7, 0, 0, 0LL, 1, 0);
      }
      if ( (*(_DWORD *)(v4 + 156) & 0x40) != 0 )
      {
        v15 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 128));
        if ( v15 )
          v16 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
        else
          v16 = 0;
        xxxNotifyMonitorChanged((struct tagWND *)v7, v4 + 136, *(struct tagBWL **)(v4 + 160), v16);
      }
      xxxNotifyShellPositioningChanged((struct tagWND *)v7, (struct tagCVR *const)v4);
      CalcWindowFullScreen((struct tagWND *)v7);
      if ( v14 != 6144 )
        xxxWindowEvent(32779, v7, 0, 0, 1);
      ThreadUnlock1(v18, v17);
    }
LABEL_43:
    v4 += 168LL;
  }
  if ( (*gpsi & 4) != 0 )
    xxxImeWindowPosChanged(a1, a2, a3, a4);
}
