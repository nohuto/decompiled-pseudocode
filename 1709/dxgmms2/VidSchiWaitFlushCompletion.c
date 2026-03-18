/*
 * XREFs of VidSchiWaitFlushCompletion @ 0x1C00715AC
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0028248 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x1C0070900 (VidSchFlushContext.c)
 *     VidSchiFlushPendingFlips @ 0x1C0074C08 (VidSchiFlushPendingFlips.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007182C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 */

bool __fastcall VidSchiWaitFlushCompletion(__int64 a1, __int64 a2, unsigned int a3)
{
  VidSchRegisterCompletionEvent(a1, a2);
  if ( **(_DWORD **)(a2 + 40) )
    VidSchWaitForCompletionEvent(a1, a2, a3);
  return VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(a1 + 1904), (_QWORD *)a2, 0LL);
}
