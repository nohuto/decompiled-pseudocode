/*
 * XREFs of LockW32Thread @ 0x1C00CDBB0
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0047A8C (xxxQueryInformationThread.c)
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     xxxCancelTracking @ 0x1C00CB4A0 (xxxCancelTracking.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01C0D90 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01C1664 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01C1BD8 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01C1FF4 (xxxImmActivateThreadsLayout.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 */

__int64 __fastcall LockW32Thread(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = PushW32ThreadLock(a1, a2, (__int64)DereferenceW32Thread, a4);
  if ( a1 )
  {
    result = ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  }
  return result;
}
