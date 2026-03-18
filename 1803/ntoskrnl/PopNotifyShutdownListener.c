/*
 * XREFs of PopNotifyShutdownListener @ 0x1404872E4
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
