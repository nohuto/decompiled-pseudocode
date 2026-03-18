/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C0124EB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0124F08 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  void *RedirectionEvent; // rax
  NTSTATUS v4; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v4 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v4 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v4 >> 31;
}
