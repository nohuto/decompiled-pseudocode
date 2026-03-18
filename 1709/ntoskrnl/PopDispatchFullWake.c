/*
 * XREFs of PopDispatchFullWake @ 0x140706BC0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x14015D3BC (PopEventCalloutDispatch.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 *     PopNotifyConsoleUserPresent @ 0x1405EED5C (PopNotifyConsoleUserPresent.c)
 */

struct _KTHREAD *__fastcall PopDispatchFullWake(__int64 a1, char a2)
{
  struct _KTHREAD *result; // rax

  if ( byte_1403657E1 != 3 )
  {
    PopNotifyConsoleUserPresent(0, a2, 9u);
    if ( (PopFullWake & 3) == 2 )
    {
      _InterlockedOr(&PopFullWake, 1u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock();
      PopInitSIdle(4);
      PopReleasePolicyLock();
    }
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
