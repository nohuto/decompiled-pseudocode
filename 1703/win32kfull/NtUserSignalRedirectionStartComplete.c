/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C011B110
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C011B168 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  void *RedirectionEvent; // rax
  NTSTATUS v3; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v0);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v3 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v3 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v3 >> 31;
}
