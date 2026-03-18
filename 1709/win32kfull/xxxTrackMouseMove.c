/*
 * XREFs of xxxTrackMouseMove @ 0x1C00CE354
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxResetTooltip @ 0x1C0084370 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0084470 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00CC1EC (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C01142DC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxHotTrack @ 0x1C0121D84 (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C01222EC (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C013B8C0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01B9360 (xxxNotifyShellWindowBorderEnter.c)
 *     GetActiveTrackPwnd @ 0x1C01C0854 (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // r9
  struct tagWND *CompositionInputWindowUIOwner; // rax
  unsigned int v11; // edx
  __int64 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // r15
  unsigned __int16 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 ActiveTrackPwnd; // rbx
  int *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int128 v44; // [rsp+48h] [rbp-39h]
  __int128 v45; // [rsp+58h] [rbp-29h] BYREF
  __int64 v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+70h] [rbp-11h]
  _QWORD v48[3]; // [rsp+80h] [rbp-1h] BYREF
  _QWORD v49[4]; // [rsp+98h] [rbp+17h] BYREF
  int v50; // [rsp+F8h] [rbp+77h]

  v50 = a3;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(gptiCurrent + 432LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, gptiCurrent);
  v48[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v48;
  v48[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  if ( v5 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a1) )
    {
      if ( (*((_BYTE *)a1 + 307) & 4) == 0 )
      {
        if ( (unsigned int)IsMessageOnlyWindow(a1) )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
          if ( CompositionInputWindowUIOwner )
          {
            a1 = CompositionInputWindowUIOwner;
            ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v48);
          }
        }
      }
    }
  }
  v11 = *(_DWORD *)(v7 + 48);
  v12 = (__int64 *)(v7 + 184);
  v13 = *(_QWORD *)(v7 + 184);
  if ( (v11 & 0x5C0) != 0 && v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    v15 = *(_QWORD *)(v14 + 408);
    if ( *(_QWORD *)(gptiCurrent + 408LL) == v15 )
    {
      v4 = 1024;
    }
    else if ( (v11 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v14, v15, 0xBu, v13, v11, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( v6 == 1 || v5 != 512 )
      v4 |= 0x100u;
    if ( (struct tagWND *)v13 != a1 || (v6 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v4 |= 0xC0u;
    PushW32ThreadLock(v7, v49, UserDereferenceObject, v9);
    ObfReferenceObject((PVOID)v7);
    v16 = *v12;
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
    v46 = *(_QWORD *)(v20 + 392);
    *(_QWORD *)(v20 + 392) = &v46;
    v47 = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    xxxCancelMouseMoveTracking(*(_DWORD *)(v7 + 48), *v12, *(_DWORD *)(v7 + 192), v4);
    ThreadUnlock1(v22, v21);
    v5 = v50;
    *(_DWORD *)(v7 + 48) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v7, v49, UserDereferenceObject, v9);
    ObfReferenceObject((PVOID)v7);
  }
  if ( v6 != 1 && v5 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, v6, 1LL) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v23 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v24 = v23;
    if ( v23 )
    {
      v25 = *v23;
      if ( *v23 )
      {
        v26 = IsTooltipHittest(a1, (unsigned __int16)v6);
        CurrentThread = KeGetCurrentThread();
        v31 = v26;
        if ( v26 )
        {
          v32 = W32GetThreadWin32Thread((__int64)CurrentThread, v27, v28, v29);
          v46 = *(_QWORD *)(v32 + 392);
          *(_QWORD *)(v32 + 392) = &v46;
          v47 = v25;
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          v33 = *v24;
          v24[6] = v31;
          if ( (*(_BYTE *)(v33 + 71) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v33, 0LL, 0LL, 0LL, 0, 0, 1175);
            v34 = xxxShowTooltip((struct tagTOOLTIPWND *)v24);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v24, 1, *((_DWORD *)v24 + 2));
            v34 = 1;
          }
          if ( v34 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v37 = W32GetThreadWin32Thread((__int64)CurrentThread, v27, v28, v29);
          v46 = *(_QWORD *)(v37 + 392);
          *(_QWORD *)(v37 + 392) = &v46;
          v47 = v25;
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          xxxResetTooltip((struct tagTOOLTIPWND *)v24);
        }
        ThreadUnlock1(v36, v35);
        v12 = (__int64 *)(v7 + 184);
      }
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64) )
  {
    if ( (struct tagWND *)v13 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == v6 )
        goto LABEL_47;
      v38 = (__int64 *)a1;
    }
    else
    {
      v38 = (__int64 *)*v12;
      if ( !*v12 )
      {
LABEL_44:
        if ( v6 - 10 <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)a1 + 3), 8) )
          xxxNotifyShellWindowBorderEnter(a1);
        goto LABEL_47;
      }
    }
    xxxNotifyShellWindowBorderExitIfEntered(v38);
    goto LABEL_44;
  }
LABEL_47:
  if ( (struct tagWND *)v13 != a1 )
  {
    *(_QWORD *)&v44 = v12;
    *((_QWORD *)&v44 + 1) = a1;
    v45 = v44;
    HMAssignmentLock(&v45);
    if ( v50 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1, 0LL);
        if ( ActiveTrackPwnd )
        {
          v40 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v40, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 380LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = v6;
  PopAndFreeW32ThreadLock(v49);
  return ThreadUnlock1(v42, v41);
}
