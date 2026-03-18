/*
 * XREFs of CleanupMediaChange @ 0x1C011C840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR CleanupMediaChange()
{
  LONG_PTR result; // rax

  if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    result = ObfDereferenceObject(WPP_MAIN_CB.Queue.ListEntry.Flink);
    WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    result = Win32FreePool(WPP_MAIN_CB.Queue.ListEntry.Blink);
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  }
  return result;
}
