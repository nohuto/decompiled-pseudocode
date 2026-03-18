/*
 * XREFs of ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0139F68
 * Callers:
 *     RIMOnTimerNotification @ 0x1C0102C90 (RIMOnTimerNotification.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetDwmAsyncNotifyDigitizerActiveContacts(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = IsDwmAsyncNotifyDigitizerActiveContactsWrapSupported();
  if ( (int)result >= 0 )
    return DwmAsyncNotifyDigitizerActiveContactsWrap(0LL, a2);
  return result;
}
