/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C004F99C
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0026140 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C004EE80 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C004FDC0 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C006EC58 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent();
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1896), (_QWORD *)a2, 0LL);
}
