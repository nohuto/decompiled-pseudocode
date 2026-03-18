/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00B5F74
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00B2ED0 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00B57FC (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C00C8944 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00EFE34 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C00F0010 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01B50F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01B60CC (xxxNotifyShellWindowBorderEnter.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01EDB90 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01F1F30 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F4560 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C003CBE4 (xxxSendMessageCallback.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IsThreadHung @ 0x1C00B6074 (IsThreadHung.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B4FEC (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+50h] [rbp-28h] BYREF
  char v9; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v3 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 288) )
    {
      v4 = *(_QWORD *)(v3 + 328);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD *)(v4 + 16), 0LL) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v3);
        }
        else
        {
          v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v8;
          ++*(_DWORD *)(v4 + 8);
          v8[1] = v4;
          v2 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, (__int64)a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v6, v5);
        }
      }
    }
  }
  if ( !v9 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v9);
  }
  return v2;
}
