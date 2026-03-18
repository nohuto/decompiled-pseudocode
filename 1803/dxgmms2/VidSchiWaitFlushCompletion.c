/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C0078FEC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002B090 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C0079050 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C007AFC8 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 *     VidSchFlushHwQueue @ 0x1C00BE940 (VidSchFlushHwQueue.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0002828 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0074B84 (VidSchRegisterCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1920), (_QWORD *)a2, 0LL);
}
