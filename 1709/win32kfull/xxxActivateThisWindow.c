/*
 * XREFs of xxxActivateThisWindow @ 0x1C0054748
 * Callers:
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C00552F4 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0055510 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0057C4C (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C0085D30 (SetForegroundPriority.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C020C024 (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxActivateThisWindow(struct tagWND *a1, int a2, char a3, int a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r13d
  __int64 v8; // r10
  __int64 v9; // rcx
  struct tagWND *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  struct tagWND *v17; // r8
  __int64 v18; // rax
  volatile signed __int32 *v19; // r15
  __int64 i; // r8
  int v21; // ebx
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct tagWND *v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v36; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbx
  struct _KTHREAD *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  __int128 v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+50h] [rbp-B0h]
  int v52; // [rsp+54h] [rbp-ACh]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  unsigned int v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+88h] [rbp-78h] BYREF
  __int64 v59; // [rsp+90h] [rbp-70h]
  __int128 v60; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+B0h] [rbp-50h]
  __int128 v62; // [rsp+C0h] [rbp-40h]
  _QWORD v63[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v65; // [rsp+100h] [rbp+0h] BYREF
  __int128 v66; // [rsp+110h] [rbp+10h] BYREF
  __int128 v67; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v68[3]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v69[88]; // [rsp+148h] [rbp+48h] BYREF
  __int16 v70; // [rsp+1B0h] [rbp+B0h]
  BOOL v72; // [rsp+1C0h] [rbp+C0h]

  v4 = 0;
  v5 = a3 & 1;
  v70 = a3 & 1;
  v52 = a3 & 2;
  v72 = a4 > 0 && ((unsigned int)CoreWindowProp::IsHost(a1) || (unsigned int)CoreWindowProp::IsComponent(a1));
  v51 = a3 & 4;
  if ( !a1 )
    return 0LL;
  v53 = *(_QWORD *)a1;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1) )
    return 0LL;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v8 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) != v9 )
    return 0LL;
  v10 = *(struct tagWND **)(v9 + 120);
  if ( a1 == v10 || (*((_BYTE *)a1 + 58) & 0x10) != 0 )
  {
    *(_DWORD *)(v9 + 380) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_68;
  }
  v54 = v5;
  if ( v10 )
    v55 = *(_QWORD *)v10;
  else
    v55 = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 656LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5LL, v8, &v54, 5LL) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) &= ~0x8000u;
  v11 = *(_QWORD *)(gptiCurrent + 408LL);
  v12 = *(_QWORD *)(v11 + 120);
  if ( v12 && *(char *)(v12 + 59) < 0 )
  {
    v50 = (unsigned __int64)(v11 + 120);
    v13 = &v64;
    v64 = v50;
  }
  else
  {
    *((_QWORD *)&v60 + 1) = *(_QWORD *)(v11 + 120);
    *(_QWORD *)&v60 = v11 + 128;
    v13 = &v65;
    v65 = v60;
  }
  HMAssignmentLock(v13);
  v14 = *(_QWORD *)(gptiCurrent + 408LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 )
  {
    if ( v14 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 408LL);
    v58 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v58;
    v59 = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v5 = (*(_BYTE *)(v15 + 71) & 0x20) << 16;
    if ( !xxxSendNCActivateMessage((struct tagWND *)v15) )
    {
      ThreadUnlock1(v39, v38);
      return 0LL;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v53, v63, ClearWFBeingActivated);
    xxxSendMessage(v15, 6LL, v5, *(_QWORD *)a1);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v41 = v63[0];
    *(_QWORD *)(ThreadWin32Thread + 16) = v63[0];
    ThreadUnlock1(v41, v42);
    LOWORD(v5) = v70;
  }
  v16 = *(_QWORD *)(gptiCurrent + 408LL);
  v17 = *(struct tagWND **)(v16 + 120);
  if ( *(struct tagWND **)(v16 + 128) == v17
    && v10 == v17
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) == v16 )
  {
    if ( !v17 )
      *(_DWORD *)(v16 + 380) &= ~0x800u;
    v18 = *(_QWORD *)(gptiCurrent + 408LL) + 120LL;
    *((_QWORD *)&v61 + 1) = a1;
    *(_QWORD *)&v61 = v18;
    v66 = v61;
    HMAssignmentLock(&v66);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v53, v63, ClearWFBeingActivated);
    xxxWindowEvent(3, (_DWORD)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 408LL), 6u, 5u);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v19 = *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL);
    v68[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v68;
    v68[1] = v19;
    if ( v19 )
      _InterlockedAdd(v19 + 2, 1u);
    if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    if ( (a3 & 8) == 0 && (*((_BYTE *)a1 + 71) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow(a1) + 112); i && (*(_BYTE *)(i + 71) & 0x10) == 0; i = *(_QWORD *)(i + 88) )
        ;
      if ( (a1 != (struct tagWND *)i || v19 && (v48 = IsVisible(v19)) == 0)
        && (!v51 || gpqForeground == *(_QWORD *)(gptiCurrent + 408LL)) )
      {
        v21 = 19;
        if ( a1 != (struct tagWND *)i )
          v21 = 3;
        xxxSetWindowPos(a1, 0, 0, v21);
        if ( (v21 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v22 = 0;
    if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x200) != 0 )
      goto LABEL_41;
    if ( v19 )
    {
      v43 = *((_QWORD *)v19 + 2);
      if ( v43 == *((_QWORD *)a1 + 2) )
      {
LABEL_41:
        if ( (*((_BYTE *)a1 + 56) & 0x40) != 0 )
          SetOrClrWF(1LL, a1, 257LL, 1LL);
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0 )
        {
          v26 = *((_QWORD *)a1 + 15);
          v27 = a1;
          while ( v26 )
          {
            v27 = (struct tagWND *)v26;
            v26 = *(_QWORD *)(v26 + 120);
          }
          *((_QWORD *)&v62 + 1) = a1;
          *(_QWORD *)&v62 = (char *)v27 + 256;
          v67 = v62;
          HMAssignmentLock(&v67);
        }
        xxxSendNCActivateMessage(a1);
        if ( v72 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        v28 = 0LL;
        v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
        if ( v29 )
        {
          if ( v19 )
            v28 = *(_QWORD *)v19;
          v30 = (unsigned __int16)(v5 + 1) | (unsigned __int64)((unsigned __int8)(*(_BYTE *)(v29 + 71) & 0x20) << 16);
        }
        else
        {
          if ( v19 )
            v28 = *(_QWORD *)v19;
          v30 = (unsigned __int16)(v5 + 1);
        }
        xxxSendMessage(a1, 6LL, v30, v28);
        if ( v72 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v32, v31);
        SetOrClrWF(0LL, a1, 257LL, 1LL);
        v34 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
        v58 = *(_QWORD *)(gptiCurrent + 392LL);
        *(_QWORD *)(gptiCurrent + 392LL) = &v58;
        v59 = v34;
        if ( v34 )
          _InterlockedAdd((volatile signed __int32 *)(v34 + 8), 1u);
        if ( v52 )
        {
          v34 = *(_QWORD *)(gptiCurrent + 408LL);
          if ( (*(_DWORD *)(v34 + 380) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v34 + 112));
            if ( v33 != NonChildAncestor )
            {
              if ( v33 && (*(_BYTE *)(v33 + 71) & 0x20) != 0 )
                v33 = 0LL;
              xxxSendFocusMessages(gptiCurrent, v33, (unsigned int)a4);
            }
          }
        }
        ThreadUnlock1(v34, v33);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) != gppiScreenSaver )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v49 = *(_QWORD *)(gppiScreenSaver + 304LL);
            if ( v49 )
              SetForegroundPriority(v49, 1LL);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 432LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            7LL);
        }
        if ( v22 )
          *(_DWORD *)(gptiCurrent + 464LL) &= ~0x200u;
        SetOrClrWF(0LL, a1, 528LL, 1LL);
        v36 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)(v36 + 16) = v63[0];
LABEL_68:
        LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) == (_QWORD)a1;
        return v4;
      }
      *(_DWORD *)(v43 + 464) |= 0x200u;
      v44 = (struct _KTHREAD *)*gptiCurrent;
      *(_QWORD *)&v50 = v43;
      HIDWORD(v50) &= 0xFFFFFFFC;
      DWORD2(v50) = (unsigned int)PsGetThreadId(v44);
      LockW32Thread(v43, v69);
      v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 3) + 8LL) + 16LL) + 112LL);
      v56 = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = &v56;
      v57 = v45;
      if ( v45 )
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
      xxxInternalEnumWindow(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 3) + 8LL) + 16LL) + 112LL),
        (__int64 (__fastcall *)(__int64, __int64))xxxActivateApp,
        (__int64)&v50,
        2u);
      ThreadUnlock1(v47, v46);
      *(_DWORD *)(v43 + 464) &= ~0x200u;
      PopAndFreeW32ThreadLock(v69);
    }
    *(_DWORD *)(gptiCurrent + 464LL) |= 0x200u;
    v22 = 1;
    *(_QWORD *)&v50 = *((_QWORD *)a1 + 2);
    DWORD2(v50) = a2;
    HIDWORD(v50) = HIDWORD(v50) & 0xFFFFFFFC | 1;
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL) + 112LL);
    v56 = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = &v56;
    v57 = v23;
    if ( v23 )
      _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL) + 112LL),
      (__int64 (__fastcall *)(__int64, __int64))xxxActivateApp,
      (__int64)&v50,
      2u);
    ThreadUnlock1(v25, v24);
    goto LABEL_41;
  }
  return 0LL;
}
