/*
 * XREFs of IOCPDispatcher_Destroy @ 0x1C0092860
 * Callers:
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012E25C (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C004CF70 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

HANDLE *IOCPDispatcher_Destroy()
{
  HANDLE *result; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    result = IOCPDispatcher::`scalar deleting destructor'((HANDLE *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  }
  return result;
}
