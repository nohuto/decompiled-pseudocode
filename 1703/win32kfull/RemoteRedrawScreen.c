/*
 * XREFs of RemoteRedrawScreen @ 0x1C013A8A8
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00FE0C0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x1C01DE9F0 (NtUserRemoteRedrawScreen.c)
 *     RemotePassthruDisable @ 0x1C01EE370 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01EE430 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01EE5A0 (RemoteShadowStart.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 */

__int64 RemoteRedrawScreen()
{
  void *v0; // rbx
  PVOID v1; // rdx
  _QWORD v3[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v0 = (void *)*((_QWORD *)gspdeskShouldBeForeground + 5);
      if ( (*((_DWORD *)gspdeskShouldBeForeground + 12) & 8) == 0 )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        PushW32ThreadLock((__int64)v0, v4, UserDereferenceObject);
        if ( v0 )
          ObfReferenceObject(v0);
        PushW32ThreadLock((__int64)gspdeskShouldBeForeground, v3, UserDereferenceObject);
        v1 = gspdeskShouldBeForeground;
        if ( gspdeskShouldBeForeground )
        {
          ObfReferenceObject(gspdeskShouldBeForeground);
          v1 = gspdeskShouldBeForeground;
        }
        xxxSwitchDesktop((__int64)v0, (__int64)v1, 2, 0);
        PopAndFreeW32ThreadLock((__int64)v3);
        PopAndFreeW32ThreadLock((__int64)v4);
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
