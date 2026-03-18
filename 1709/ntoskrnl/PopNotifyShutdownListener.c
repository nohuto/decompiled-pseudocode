/*
 * XREFs of PopNotifyShutdownListener @ 0x14043A2E8
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14043A3E0 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
