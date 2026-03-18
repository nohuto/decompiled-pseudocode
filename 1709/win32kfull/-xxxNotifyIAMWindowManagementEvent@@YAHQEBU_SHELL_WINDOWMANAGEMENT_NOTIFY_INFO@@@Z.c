/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C008502C
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0084DEC (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00859CC (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00CC1EC (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00FA340 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C00FA528 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B8368 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01B9360 (xxxNotifyShellWindowBorderEnter.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01D9940 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01DB908 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01F802C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadHung @ 0x1C0085124 (IsThreadHung.c)
 *     xxxSendMessageCallback @ 0x1C009F334 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B8230 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+50h] [rbp-28h] BYREF
  char v9; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 288) )
    {
      v3 = *(_QWORD *)(v2 + 328);
      if ( v3 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD *)(v3 + 16), 0LL) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v2);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v8[0] = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = v8;
          v8[1] = v3;
          _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
          v1 = xxxSendMessageCallback((struct tagWND *)v3, 0x342u, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v6, v5);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  return v1;
}
