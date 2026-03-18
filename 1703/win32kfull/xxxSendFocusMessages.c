/*
 * XREFs of xxxSendFocusMessages @ 0x1C00B5394
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxFocusSetInputContext @ 0x1C00B56B0 (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00B5774 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00B5DB8 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00B5E38 (zzzInputFocusReceivedWindowEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendFocusMessages(__int64 a1, __int64 *a2, int a3)
{
  struct _LARGE_STRING *v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  _QWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-28h] BYREF

  v4 = (struct _LARGE_STRING *)a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 384) + 340LL) &= ~0x800u;
  if ( !a2 )
  {
    v14 = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(v14 + 88) )
      *(_DWORD *)(v14 + 340) |= 0x800u;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
  v17[0] = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = v17;
  v17[1] = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7 = *(_QWORD *)(a1 + 384);
  v16[1] = a2;
  v16[0] = v7 + 80;
  HMAssignmentLock(v16);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
    {
      v10 = 0;
      v11 = a2[2];
      if ( v11 != gptiCurrent )
      {
        LockW32Thread(v11, v16);
        v10 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(a2[2], a2);
      if ( v10 )
        PopAndFreeW32ThreadLock(v16);
    }
    v9 = *(_QWORD *)(a1 + 384);
    if ( v9 == gpqForeground && a2 == *(__int64 **)(v9 + 80) )
    {
      v9 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v9 & 0x80u) == 0LL )
        xxxApplyGlobalInputSettings();
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 384) == gpqForeground )
        zzzInputFocusLostWindowEvent(v6, 2LL);
      xxxSendMessage(v6, 8, *a2, 0);
      v9 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v6, 0LL, 0LL);
    }
    if ( a2 == *(__int64 **)(*(_QWORD *)(a1 + 384) + 80LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, a2, -4, 0, 0);
      if ( (*(_DWORD *)(a2[2] + 1096) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
      {
        if ( v6 )
          v15 = *(_QWORD *)v6;
        else
          v15 = 0LL;
        xxxSendNotifyMessage((struct tagWND *)a2, 7u, v15, v4, 1);
      }
      else
      {
        if ( v6 )
          v12 = *(_QWORD *)v6;
        else
          LODWORD(v12) = 0;
        xxxSendMessage((int)a2, 7, v12, (int)v4);
      }
      v8 = gpqForeground;
      if ( gpqForeground && *(__int64 **)(gpqForeground + 80LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
      zzzInputFocusLostWindowEvent(v6, 3LL);
    xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
    xxxSendMessage(v6, 8, 0, 0);
    v8 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v6, 0LL, 0LL);
  }
  return ThreadUnlock1(v9, v8);
}
