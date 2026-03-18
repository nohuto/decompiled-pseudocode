/*
 * XREFs of xxxActivateThisWindow @ 0x1C001930C
 * Callers:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxActiveWindowTracking @ 0x1C01BD2BC (xxxActiveWindowTracking.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01EB320 (xxxMNEndMenuStateInternal.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C001A018 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C001A094 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C001FD84 (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 *     SetForegroundPriority @ 0x1C00B5AE0 (SetForegroundPriority.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     ?SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z @ 0x1C020AB5C (-SetFocusDirection@CoreWindowProp@@SAHPEAUtagWND@@W4FOCUSDIRECTION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxActivateThisWindow(struct tagWND *a1, __int64 a2, char a3, int a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  int v8; // r12d
  __int64 v9; // r10
  __int64 v10; // rcx
  struct tagWND *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int128 *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  struct tagWND *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // r15
  __int64 i; // r8
  int v23; // ebx
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct tagWND *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  char v43; // r12
  unsigned __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rbx
  struct _KTHREAD *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int ThreadId; // [rsp+48h] [rbp-B8h]
  unsigned int v62; // [rsp+4Ch] [rbp-B4h]
  int v63; // [rsp+50h] [rbp-B0h]
  int v64; // [rsp+54h] [rbp-ACh]
  __int128 v65; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+70h] [rbp-90h]
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  _QWORD v74[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+100h] [rbp+0h] BYREF
  __int128 v76; // [rsp+110h] [rbp+10h] BYREF
  __int128 v77; // [rsp+120h] [rbp+20h] BYREF
  __int128 v78; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v79[3]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v80[88]; // [rsp+158h] [rbp+58h] BYREF
  int v81; // [rsp+1C0h] [rbp+C0h]
  unsigned int v82; // [rsp+1C8h] [rbp+C8h]
  BOOL v83; // [rsp+1D0h] [rbp+D0h]

  v82 = a2;
  v4 = a3 & 1;
  v5 = 0;
  v81 = v4;
  v64 = a3 & 2;
  v83 = a4 > 0 && ((unsigned int)CoreWindowProp::IsHost(a1) || (unsigned int)CoreWindowProp::IsComponent(a1));
  v8 = a3 & 4;
  v63 = v8;
  if ( !a1 )
    return 0LL;
  v66 = *(_QWORD *)a1;
  if ( a1 == (struct tagWND *)GetDesktopWindow(a1, a2) )
    return 0LL;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v9 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != v10 )
    return 0LL;
  v11 = *(struct tagWND **)(v10 + 88);
  if ( a1 == v11 || (*((_BYTE *)a1 + 58) & 0x10) != 0 )
  {
    *(_DWORD *)(v10 + 340) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    goto LABEL_68;
  }
  LODWORD(v65) = v4;
  if ( v11 )
    *((_QWORD *)&v65 + 1) = *(_QWORD *)v11;
  else
    *((_QWORD *)&v65 + 1) = 0LL;
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5LL, v9, &v65) )
  {
    return 0LL;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x8000u;
  v12 = *(_QWORD *)(gptiCurrent + 384LL);
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 && *(char *)(v13 + 59) < 0 )
  {
    v65 = (unsigned __int64)(v12 + 88);
    v14 = &v75;
    v75 = v65;
  }
  else
  {
    *((_QWORD *)&v71 + 1) = *(_QWORD *)(v12 + 88);
    *(_QWORD *)&v71 = v12 + 96;
    v14 = &v76;
    v76 = v71;
  }
  HMAssignmentLock(v14);
  v15 = *(_QWORD *)(gptiCurrent + 384LL);
  v16 = *(_QWORD *)(v15 + 88);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 384LL);
    v69 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v69;
    v70 = v16;
    v43 = *(_BYTE *)(v16 + 71);
    ++*(_DWORD *)(v16 + 8);
    v44 = (unsigned __int64)(v43 & 0x20) << 16;
    if ( !xxxSendNCActivateMessage((struct tagWND *)v16) )
    {
      ThreadUnlock1(v46, v45);
      return 0LL;
    }
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v66, v74, ClearWFBeingActivated);
    xxxSendMessage(v16, 6LL, v44, *(_QWORD *)a1);
    SetOrClrWF(0LL, a1, 528LL, 1LL);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v47, v48, v49);
    v51 = v74[0];
    *(_QWORD *)(ThreadWin32Thread + 16) = v74[0];
    ThreadUnlock1(v51, v52);
    v8 = v63;
  }
  v17 = *(_QWORD *)(gptiCurrent + 384LL);
  v18 = *(struct tagWND **)(v17 + 88);
  if ( *(struct tagWND **)(v17 + 96) == v18
    && v11 == v18
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0
    && *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) == v17 )
  {
    if ( !v18 )
      *(_DWORD *)(v17 + 340) &= ~0x800u;
    v19 = *(_QWORD *)(gptiCurrent + 384LL) + 88LL;
    *((_QWORD *)&v72 + 1) = a1;
    *(_QWORD *)&v72 = v19;
    v77 = v72;
    HMAssignmentLock(&v77);
    SetOrClrWF(1LL, a1, 528LL, 1LL);
    PushW32ThreadLock(v66, v74, ClearWFBeingActivated);
    xxxWindowEvent(3, (_DWORD)a1, 0, 0, 1);
    RemoveEventMessage(*(struct tagQ **)(gptiCurrent + 384LL), 6u, 5u);
    xxxMakeWindowForegroundWithState(0LL, 0LL);
    v21 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
    v79[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v79;
    v79[1] = v21;
    if ( v21 )
      ++*((_DWORD *)v21 + 2);
    if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && xxxSendMessage(a1, 783LL, 0LL, 0LL) )
      xxxSendNotifyMessage(-1LL, 784LL, *(_QWORD *)a1, 0LL, 1);
    if ( (a3 & 8) == 0 && (*((_BYTE *)a1 + 71) & 0x40) == 0 )
    {
      for ( i = *(_QWORD *)(GetDesktopWindow(a1, v20) + 112); i && (*(_BYTE *)(i + 71) & 0x10) == 0; i = *(_QWORD *)(i + 88) )
        ;
      if ( (a1 != (struct tagWND *)i || v21 && (v58 = IsVisible(v21)) == 0)
        && (!v8 || gpqForeground == *(_QWORD *)(gptiCurrent + 384LL)) )
      {
        v23 = 19;
        if ( a1 != (struct tagWND *)i )
          v23 = 3;
        xxxSetWindowPos(a1, 0, 0, v23);
        if ( (v23 & 0x10) == 0 )
          TraceLoggingProcessUsageDataAggregationHelper(a1);
      }
    }
    v24 = 0;
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x200) != 0 )
      goto LABEL_41;
    if ( v21 )
    {
      v53 = v21[2];
      if ( v53 == *((_QWORD *)a1 + 2) )
      {
LABEL_41:
        if ( (*((_BYTE *)a1 + 56) & 0x40) != 0 )
          SetOrClrWF(1LL, a1, 257LL, 1LL);
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) == 0 )
        {
          v28 = *((_QWORD *)a1 + 15);
          v29 = a1;
          while ( v28 )
          {
            v29 = (struct tagWND *)v28;
            v28 = *(_QWORD *)(v28 + 120);
          }
          *((_QWORD *)&v73 + 1) = a1;
          *(_QWORD *)&v73 = (char *)v29 + 256;
          v78 = v73;
          HMAssignmentLock(&v78);
        }
        xxxSendNCActivateMessage(a1);
        if ( v83 )
          CoreWindowProp::SetFocusDirection(a1, (unsigned int)a4);
        v30 = 0LL;
        v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        if ( v31 )
        {
          if ( v21 )
            v30 = *v21;
          v32 = (unsigned __int16)((v81 != 0) + 1) | ((unsigned __int64)(*(_BYTE *)(v31 + 71) & 0x20) << 16);
        }
        else
        {
          if ( v21 )
            v30 = *v21;
          v32 = (unsigned __int16)((v81 != 0) + 1);
        }
        xxxSendMessage(a1, 6LL, v32, v30);
        if ( v83 )
          CoreWindowProp::SetFocusDirection(a1, 0LL);
        xxxUpdateTray(a1);
        ThreadUnlock1(v34, v33);
        SetOrClrWF(0LL, a1, 257LL, 1LL);
        v36 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
        v69 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v69;
        v70 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        if ( v64 )
        {
          v36 = *(_QWORD *)(gptiCurrent + 384LL);
          if ( (*(_DWORD *)(v36 + 340) & 0x800) == 0 )
          {
            NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v36 + 80));
            if ( v35 != NonChildAncestor )
            {
              if ( v35 && (*(_BYTE *)(v35 + 71) & 0x20) != 0 )
                v35 = 0LL;
              xxxSendFocusMessages(gptiCurrent, v35, (unsigned int)a4);
            }
          }
        }
        ThreadUnlock1(v36, v35);
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x40u;
        if ( gppiScreenSaver )
        {
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) != gppiScreenSaver )
          {
            CInputGlobals::UpdateLastInputTime(
              gpInputGlobals,
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
            v59 = *(_QWORD *)(gppiScreenSaver + 296LL);
            if ( v59 )
              SetForegroundPriority(v59, 1LL);
          }
        }
        else if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput && !gbBlockSendInputResets )
        {
          CInputGlobals::UpdateLastInputTime(
            gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            7LL);
        }
        if ( v24 )
          *(_DWORD *)(gptiCurrent + 440LL) &= ~0x200u;
        SetOrClrWF(0LL, a1, 528LL, 1LL);
        v41 = W32GetThreadWin32Thread(KeGetCurrentThread(), v38, v39, v40);
        *(_QWORD *)(v41 + 16) = v74[0];
LABEL_68:
        LOBYTE(v5) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) == (_QWORD)a1;
        return v5;
      }
      *(_DWORD *)(v53 + 440) |= 0x200u;
      v54 = (struct _KTHREAD *)*gptiCurrent;
      v60 = v53;
      v62 &= 0xFFFFFFFC;
      ThreadId = (unsigned int)PsGetThreadId(v54);
      LockW32Thread(v53, v80);
      v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21[3] + 8) + 16LL) + 112LL);
      v67 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v67;
      v68 = v55;
      if ( v55 )
        ++*(_DWORD *)(v55 + 8);
      xxxInternalEnumWindow(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21[3] + 8) + 16LL) + 112LL), xxxActivateApp, &v60);
      ThreadUnlock1(v57, v56);
      *(_DWORD *)(v53 + 440) &= ~0x200u;
      PopAndFreeW32ThreadLock(v80);
    }
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x200u;
    v24 = 1;
    v60 = *((_QWORD *)a1 + 2);
    ThreadId = v82;
    v62 = v62 & 0xFFFFFFFC | 1;
    v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 112LL);
    v67 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v67;
    v68 = v25;
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL) + 112LL),
      xxxActivateApp,
      &v60);
    ThreadUnlock1(v27, v26);
    goto LABEL_41;
  }
  return 0LL;
}
