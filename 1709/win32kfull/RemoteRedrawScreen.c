/*
 * XREFs of RemoteRedrawScreen @ 0x1C0141550
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00D63E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0140AE0 (xxxRemoteReconnect.c)
 *     NtUserRemoteRedrawScreen @ 0x1C01EAB10 (NtUserRemoteRedrawScreen.c)
 *     RemotePassthruDisable @ 0x1C01F8820 (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C01F88E0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01F8A50 (RemoteShadowStart.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 RemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  void *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r9
  int v6; // edx
  int v7; // edx
  _QWORD v9[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( gbFreezeScreenUpdates )
  {
    gbFreezeScreenUpdates = 0;
    KeSetEvent(gpRemoteSessionOcclusionEvent, 1, 0);
    if ( gspdeskShouldBeForeground )
    {
      gbDesktopLocked = 0;
      v3 = (void *)*((_QWORD *)gspdeskShouldBeForeground + 5);
      if ( (*((_DWORD *)gspdeskShouldBeForeground + 12) & 8) == 0 )
      {
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1, v2);
        PushW32ThreadLock((__int64)v3, v10, UserDereferenceObject, v4);
        if ( v3 )
          ObfReferenceObject(v3);
        PushW32ThreadLock((__int64)gspdeskShouldBeForeground, v9, UserDereferenceObject, v5);
        if ( gspdeskShouldBeForeground )
          ObfReferenceObject(gspdeskShouldBeForeground);
        xxxSwitchDesktop((__int64)v3, (__int64)gspdeskShouldBeForeground, 2, 0);
        PopAndFreeW32ThreadLock((__int64)v9, v6);
        PopAndFreeW32ThreadLock((__int64)v10, v7);
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, 0LL);
    }
  }
  return 0LL;
}
