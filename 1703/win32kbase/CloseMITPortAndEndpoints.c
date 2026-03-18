/*
 * XREFs of CloseMITPortAndEndpoints @ 0x1C0066CB8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CloseMITPortAndEndpoints(int a1)
{
  NTSTATUS result; // eax

  if ( gCursorManagementConnectionHandle )
  {
    result = ZwClose(gCursorManagementConnectionHandle);
    gCursorManagementConnectionHandle = 0LL;
  }
  if ( gInputDeliveryConnectionHandle )
  {
    result = ZwClose(gInputDeliveryConnectionHandle);
    gInputDeliveryConnectionHandle = 0LL;
  }
  if ( gInputFocusConnectionHandle )
  {
    result = ZwClose(gInputFocusConnectionHandle);
    gInputFocusConnectionHandle = 0LL;
  }
  if ( a1 )
  {
    if ( gMitPortHandle )
    {
      result = ZwClose(gMitPortHandle);
      gMitPortHandle = 0LL;
    }
  }
  return result;
}
