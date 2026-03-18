/*
 * XREFs of PopDispatchFullWake @ 0x1405EF110
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14016E560 (PopEventCalloutDispatch.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopNotifyConsoleUserPresent @ 0x1405E9A30 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax

  if ( byte_1403AA061 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9u);
    if ( (PopFullWake & 3) == 2 )
    {
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock();
      PopInitSIdle(4LL);
      PopReleasePolicyLock();
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
