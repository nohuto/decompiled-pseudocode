/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004A10 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundThread @ 0x1C00080B0 (xxxSetForegroundThread.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C00B5394 (xxxSendFocusMessages.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C00B5AE0 (SetForegroundPriority.c)
 *     ?PublishFocusChange@@YAXXZ @ 0x1C00B5E9C (-PublishFocusChange@@YAXXZ.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[40]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-18h]

  v2 = gptiForeground;
  if ( a1 == gptiForeground )
    return;
  if ( !a1 || !gptiForeground || *(_QWORD *)(a1 + 376) != *(_QWORD *)(gptiForeground + 376LL) )
  {
    EtwTraceFocusedProcessChange();
    v13 = 0uLL;
    v14 = 0;
    if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v13) )
    {
      if ( a1 && (v5 = *(_QWORD *)(a1 + 408)) != 0 && *(_QWORD *)(v5 + 288) )
        DWORD1(v13) = *(_DWORD *)(*(_QWORD *)(a1 + 376) + 56LL);
      else
        DWORD1(v13) = 0;
      if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 408LL)) != 0 && *(_QWORD *)(v6 + 288) )
        LODWORD(v13) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
      else
        LODWORD(v13) = 0;
      memset(v12, 0, sizeof(v12));
      *(_QWORD *)v12 = 0LL;
      *(_DWORD *)&v12[8] = 9;
      HIWORD(v14) = 0;
      *(_OWORD *)&v12[16] = v13;
      *(_DWORD *)&v12[32] = (unsigned __int16)v14;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v12);
    }
    if ( a1 )
    {
      SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 272LL) = PsChargeProcessWakeCounter(**(_QWORD **)(a1 + 376), 0LL, 0LL);
    }
    if ( !gptiForeground )
      goto LABEL_33;
    SetForegroundPriority(gptiForeground, 0LL);
    v2 = gptiForeground;
    v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL);
    if ( v7 )
    {
      PsReleaseProcessWakeCounter(v7, 1LL);
      v2 = gptiForeground;
      *(_QWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 272LL) = 0LL;
    }
  }
  if ( *(_QWORD *)v2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v2 + 392LL);
    goto LABEL_22;
  }
LABEL_33:
  v8 = 0LL;
LABEL_22:
  EtwTraceFocusChange(a1);
  gptiForeground = a1;
  PublishFocusChange();
  if ( gptiForeground )
  {
    v9 = *(_QWORD *)(gptiForeground + 392LL);
    if ( v9 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v9 )
      {
        *(_QWORD *)&v13 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v13;
        *((_QWORD *)&v13 + 1) = v8;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        xxxChangeForegroundKeyboardTable(v8, *(_QWORD *)(gptiForeground + 392LL));
        ThreadUnlock1(v11, v10);
      }
    }
  }
  memset(gafAsyncKeyStateRecentDown, 0, 0x20uLL);
  ++*(_DWORD *)(gpsi + 5692LL);
}
