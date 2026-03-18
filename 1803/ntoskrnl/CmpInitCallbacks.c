/*
 * XREFs of CmpInitCallbacks @ 0x140654DE0
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

__int64 CmpInitCallbacks()
{
  __int64 result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_1403CA868 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  CmpCallbackContextSList = 0uLL;
  return result;
}
