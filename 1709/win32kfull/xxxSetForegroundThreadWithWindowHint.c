/*
 * XREFs of xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0008910 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundThread @ 0x1C000D020 (xxxSetForegroundThread.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 * Callees:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     SetForegroundPriority @ 0x1C0085D30 (SetForegroundPriority.c)
 *     ?PublishFocusChange@@YAXPEAUtagWND@@@Z @ 0x1C00860D8 (-PublishFocusChange@@YAXPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundThreadWithWindowHint(__int64 a1, struct tagWND *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[40]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  result = gptiForeground;
  if ( a1 == gptiForeground )
    return result;
  if ( !a1 || !gptiForeground || *(_QWORD *)(a1 + 400) != *(_QWORD *)(gptiForeground + 400LL) )
  {
    EtwTraceFocusedProcessChange();
    v15 = 0uLL;
    v16 = 0;
    if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v15) )
    {
      if ( a1 && (v5 = *(_QWORD *)(a1 + 432)) != 0 && *(_QWORD *)(v5 + 288) )
        DWORD1(v15) = *(_DWORD *)(*(_QWORD *)(a1 + 400) + 56LL);
      else
        DWORD1(v15) = 0;
      if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 432LL)) != 0 && *(_QWORD *)(v6 + 288) )
        LODWORD(v15) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 56LL);
      else
        LODWORD(v15) = 0;
      memset(v14, 0, sizeof(v14));
      *(_QWORD *)v14 = 0LL;
      *(_DWORD *)&v14[8] = 9;
      HIWORD(v16) = 0;
      *(_OWORD *)&v14[16] = v15;
      *(_DWORD *)&v14[32] = (unsigned __int16)v16;
      xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v14);
    }
    if ( a1 )
    {
      SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 400) + 272LL) = PsChargeProcessWakeCounter(**(_QWORD **)(a1 + 400), 0LL, 0LL);
    }
    if ( !gptiForeground )
      goto LABEL_37;
    SetForegroundPriority(gptiForeground, 0LL);
    v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 272LL);
    if ( v7 )
    {
      PsReleaseProcessWakeCounter(v7, 1LL);
      *(_QWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 272LL) = 0LL;
    }
  }
  if ( gptiForeground )
  {
    v8 = *(_QWORD *)(gptiForeground + 416LL);
    goto LABEL_22;
  }
LABEL_37:
  v8 = 0LL;
LABEL_22:
  EtwTraceFocusChange(a1);
  if ( gptiForeground && (!a1 || *(_QWORD *)(gptiForeground + 400LL) != *(_QWORD *)(a1 + 400)) )
    *(_DWORD *)(*(_QWORD *)(gptiForeground + 400LL) + 1036LL) = (MEMORY[0xFFFFF78000000320]
                                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  gptiForeground = a1;
  PublishFocusChange(a2);
  if ( gptiForeground )
  {
    v9 = *(_QWORD *)(gptiForeground + 416LL);
    if ( v9 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v9 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v13;
        v13[1] = v8;
        if ( v8 )
          _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
        xxxChangeForegroundKeyboardTable(v8, *(_QWORD *)(gptiForeground + 416LL));
        ThreadUnlock1(v12, v11);
      }
    }
  }
  memset(gafAsyncKeyStateRecentDown, 0, 0x20uLL);
  result = gpsi;
  ++*(_DWORD *)(gpsi + 6988LL);
  return result;
}
