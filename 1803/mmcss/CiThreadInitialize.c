/*
 * XREFs of CiThreadInitialize @ 0x1C000C5C4
 * Callers:
 *     CsInitialize @ 0x1C000C194 (CsInitialize.c)
 * Callees:
 *     WPP_SF_d @ 0x1C00022D8 (WPP_SF_d.c)
 */

NTSTATUS CiThreadInitialize()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx

  result = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
  v1 = result;
  if ( result < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_f6806cb8b818300a6165f8fb8ae15b34_Traceguids,
        result);
    return v1;
  }
  else
  {
    CiThreadCallbackRegistered = 1;
  }
  return result;
}
