/*
 * XREFs of TtmpOpenQueueHandle @ 0x140774AF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x14006ECF0 (PsGetProcessId.c)
 *     TtmiLogQueueHandleOpened @ 0x140776944 (TtmiLogQueueHandleOpened.c)
 */

__int64 __fastcall TtmpOpenQueueHandle(unsigned int a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  HANDLE ProcessId; // r10

  ProcessId = 0LL;
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  TtmiLogQueueHandleOpened(a4, ProcessId, a1);
  return 0LL;
}
