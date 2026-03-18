/*
 * XREFs of xxxTrackMouseMove @ 0x1C00CA16C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C00AFCF4 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C00C6A3C (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C8944 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01B60CC (xxxNotifyShellWindowBorderEnter.c)
 *     GetActiveTrackPwnd @ 0x1C01BC974 (GetActiveTrackPwnd.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C020D0B4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020D2EC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // r15
  int v4; // r14d
  struct tagWND *v6; // rbx
  __int64 v7; // rdi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  unsigned int v9; // ecx
  __int64 *v10; // r12
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  unsigned __int16 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 ActiveTrackPwnd; // rbx
  int *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD v34[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  __int64 v36; // [rsp+60h] [rbp-11h]
  _QWORD v37[3]; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v38[4]; // [rsp+88h] [rbp+17h] BYREF

  v3 = gptiCurrent;
  v4 = 0;
  v6 = a1;
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v37;
  ++*((_DWORD *)a1 + 2);
  v37[1] = a1;
  if ( a3 == 512
    && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0
    && IsCompositionInputWindow(a1)
    && (*((_BYTE *)v6 + 307) & 4) == 0 )
  {
    if ( (unsigned int)IsMessageOnlyWindow(v6) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v6);
      if ( CompositionInputWindowUIOwner )
      {
        v6 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v37);
        v3 = gptiCurrent;
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (__int64 *)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    v14 = *(_QWORD *)(v13 + 384);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 384LL) == v14 )
    {
      v4 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx(v13, v14, 0xBu, v11, v9, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    v12 = a3;
    if ( a2 == 1 || a3 != 512 )
      v4 |= 0x100u;
    if ( (struct tagWND *)v11 != v6
      || ((v15 = *(_DWORD *)(v7 + 192), v16 = 0, a2 != 1) ? (LOBYTE(v16) = v15 == 1) : (LOBYTE(v16) = v15 != 1), v16) )
    {
      v4 |= 0xC0u;
    }
    PushW32ThreadLock(v7, v38, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v17 = *v10;
    v35 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v35;
    v36 = v17;
    ++*(_DWORD *)(v17 + 8);
    xxxCancelMouseMoveTracking(*(_DWORD *)(v7 + 48), *v10, *(_DWORD *)(v7 + 192), v4);
    ThreadUnlock1(v19, v18);
    *(_DWORD *)(v7 + 48) &= ~v4;
  }
  else
  {
    PushW32ThreadLock(v7, v38, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v12 = a3;
  }
  if ( a2 != 1 && v12 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (_WORD)a2 == 69 && (unsigned int)xxxHotTrackMenu(v6, HIWORD(a2), 1) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v20 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v21 = v20;
    if ( v20 && *v20 )
    {
      v22 = IsTooltipHittest(v6, (unsigned __int16)a2);
      if ( v22 )
      {
        v35 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v35;
        v36 = v23;
        ++*(_DWORD *)(v23 + 8);
        v24 = *v21;
        v21[6] = v22;
        if ( (*(_BYTE *)(v24 + 71) & 0x10) != 0 )
        {
          xxxSetWindowPos((struct tagWND *)v24, 0LL, 0LL, 0LL, 0, 0, 1175);
          v25 = xxxShowTooltip((struct tagTOOLTIPWND *)v21);
        }
        else
        {
          SetTooltipTimer((struct tagTOOLTIPWND *)v21, 1, *((_DWORD *)v21 + 2));
          v25 = 1;
        }
        if ( v25 )
          *(_DWORD *)(v7 + 48) |= 0x300u;
      }
      else
      {
        v35 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v35;
        v36 = v23;
        ++*(_DWORD *)(v23 + 8);
        xxxResetTooltip((struct tagTOOLTIPWND *)v21);
      }
      ThreadUnlock1(v27, v26);
    }
  }
  if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v7, 64) )
  {
    if ( (struct tagWND *)v11 == v6 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_51;
      v28 = (__int64 *)v6;
    }
    else
    {
      v28 = (__int64 *)*v10;
      if ( !*v10 )
      {
LABEL_48:
        if ( (unsigned int)(a2 - 10) <= 1 && !(unsigned int)IsShellWndManagementBehaviorEnabled(*((_QWORD *)v6 + 3), 8) )
          xxxNotifyShellWindowBorderEnter(v6);
        goto LABEL_51;
      }
    }
    xxxNotifyShellWindowBorderExitIfEntered(v28);
    goto LABEL_48;
  }
LABEL_51:
  if ( (struct tagWND *)v11 != v6 )
  {
    v34[0] = v7 + 184;
    v34[1] = v6;
    HMAssignmentLock(v34);
    if ( v12 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v6, 0LL);
        if ( ActiveTrackPwnd )
        {
          v30 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527LL, *v30, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(v38);
  return ThreadUnlock1(v32, v31);
}
