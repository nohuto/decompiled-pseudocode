/*
 * XREFs of RemoteDisableScreen @ 0x1C00D68E0
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1C00D6744 (xxxRemoteStopScreenUpdates.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned int v6; // ebx
  void *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // edx
  int v11; // edx
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = gspdeskDisconnect;
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  if ( a1 == v4 )
  {
    if ( v4 )
      gbDesktopLocked = 1;
  }
  else if ( v4 )
  {
    v7 = (void *)v4[5];
    LockObjectAssignment(&gspdeskShouldBeForeground, a1);
    gbDesktopLocked = 1;
    PushW32ThreadLock((__int64)v7, v14, UserDereferenceObject, v8);
    if ( v7 )
      ObfReferenceObject(v7);
    PushW32ThreadLock((__int64)v4, v13, UserDereferenceObject, v9);
    ObfReferenceObject(v4);
    v6 = xxxSwitchDesktop((__int64)v7, (__int64)v4, 2, 0);
    PopAndFreeW32ThreadLock((__int64)v13, v10);
    PopAndFreeW32ThreadLock((__int64)v14, v11);
  }
  return v6;
}
