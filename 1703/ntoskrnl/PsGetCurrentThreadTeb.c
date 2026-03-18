/*
 * XREFs of PsGetCurrentThreadTeb @ 0x14006B910
 * Callers:
 *     EtwTraceThread @ 0x1404B07F4 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140594F9C (EtwpPsProvTraceThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 */

PVOID PsGetCurrentThreadTeb(void)
{
  void *v0; // rbx

  v0 = 0LL;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && !(unsigned __int8)KeIsAttachedProcess() )
    return KeGetCurrentThread()->Teb;
  return v0;
}
