/*
 * XREFs of PfpScenCtxWaiterTimedOut @ 0x140239710
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140429040 (PfpScenCtxScenarioSet.c)
 *     PfpScenCtxPrefetchWait @ 0x140430E90 (PfpScenCtxPrefetchWait.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

LONG __fastcall PfpScenCtxWaiterTimedOut(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 8) & 0xFFFFFFF3 | 8;
  *(_DWORD *)(a1 + 8) = result;
  v2 = *(struct _KEVENT **)(a1 + 40);
  if ( v2 )
    return KeSetEvent(v2, 0, 0);
  return result;
}
