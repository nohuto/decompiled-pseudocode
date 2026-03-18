/*
 * XREFs of xxxSendFocusMessages @ 0x1C0085538
 * Callers:
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxFocusSetInputContext @ 0x1C008585C (xxxFocusSetInputContext.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0085944 (xxxApplyGlobalInputSettings.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0085FF4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0086074 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendFocusMessages(__int64 a1, volatile signed __int32 *a2, int a3)
{
  __int64 v4; // r14
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int128 v15; // [rsp+30h] [rbp-58h]
  __int128 v16; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-20h] BYREF

  v4 = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 408) + 380LL) &= ~0x800u;
  if ( !a2 )
  {
    v13 = *(_QWORD *)(a1 + 408);
    if ( *(_QWORD *)(v13 + 120) )
      *(_DWORD *)(v13 + 380) |= 0x800u;
  }
  v6 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 408) + 112LL);
  v17[0] = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = v17;
  v17[1] = v6;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  *((_QWORD *)&v15 + 1) = a2;
  *(_QWORD *)&v15 = *(_QWORD *)(a1 + 408) + 112LL;
  v16 = v15;
  HMAssignmentLock(&v16);
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 408) == gpqForeground )
    {
      v9 = 0;
      v10 = *((_QWORD *)a2 + 2);
      if ( v10 != gptiCurrent )
      {
        LockW32Thread(v10, v18);
        v9 = 1;
      }
      xxxSetForegroundThreadWithWindowHint(*((_QWORD *)a2 + 2), a2);
      if ( v9 )
        PopAndFreeW32ThreadLock(v18);
    }
    v8 = *(_QWORD *)(a1 + 408);
    if ( v8 == gpqForeground && a2 == *(volatile signed __int32 **)(v8 + 112) )
    {
      v8 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v8 & 0x80u) == 0LL )
        xxxApplyGlobalInputSettings();
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 408) == gpqForeground )
        zzzInputFocusLostWindowEvent(v6, 2LL);
      xxxSendMessage(v6, 8LL, *(_QWORD *)a2, 0LL);
      v8 = gpsi;
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(v6, 0LL, 0LL);
    }
    if ( a2 == *(volatile signed __int32 **)(*(_QWORD *)(a1 + 408) + 112LL) )
    {
      if ( (*gpsi & 4) != 0 )
        xxxFocusSetInputContext(a2, 1LL, 0LL);
      xxxWindowEvent(0x8005u, a2, 4294967292LL, 0LL, 0);
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 1184LL) & 0x40000) != 0 && (*(_DWORD *)(gptiCurrent + 464LL) & 1) != 0 )
      {
        if ( v6 )
          v14 = *(_QWORD *)v6;
        else
          v14 = 0LL;
        xxxSendNotifyMessage(a2, 7LL, v14, v4, 1);
      }
      else
      {
        if ( v6 )
          v11 = *(_QWORD *)v6;
        else
          v11 = 0LL;
        xxxSendMessage(a2, 7LL, v11, v4);
      }
      v7 = gpqForeground;
      if ( gpqForeground && *(volatile signed __int32 **)(gpqForeground + 112LL) == a2 )
        zzzInputFocusReceivedWindowEvent(2LL);
    }
  }
  else if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 408) == gpqForeground )
      zzzInputFocusLostWindowEvent(v6, 3LL);
    xxxWindowEvent(0x8005u, 0LL, 4294967292LL, 0LL, 0);
    xxxSendMessage(v6, 8LL, 0LL, 0LL);
    v7 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v6, 0LL, 0LL);
  }
  return ThreadUnlock1(v8, v7);
}
