/*
 * XREFs of CloseMITPortAndEndpoints @ 0x1C007B2E0
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
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
  if ( gInputAttemptedConnectionHandle )
  {
    result = ZwClose(gInputAttemptedConnectionHandle);
    gInputAttemptedConnectionHandle = 0LL;
  }
  if ( gInputInteropISMConnectionHandle )
  {
    result = ZwClose(gInputInteropISMConnectionHandle);
    gInputInteropISMConnectionHandle = 0LL;
  }
  if ( gInputInteropMTConnectionHandle )
  {
    result = ZwClose(gInputInteropMTConnectionHandle);
    gInputInteropMTConnectionHandle = 0LL;
  }
  if ( gFireViewHitTestConnectionHandle )
  {
    result = ZwClose(gFireViewHitTestConnectionHandle);
    gFireViewHitTestConnectionHandle = 0LL;
  }
  if ( gInputConfigConnectionHandle )
  {
    result = ZwClose(gInputConfigConnectionHandle);
    gInputConfigConnectionHandle = 0LL;
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
