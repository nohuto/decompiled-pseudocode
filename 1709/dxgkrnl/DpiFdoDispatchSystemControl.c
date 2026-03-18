/*
 * XREFs of DpiFdoDispatchSystemControl @ 0x1C01DD530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoDispatchSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int v3; // ebx
  char *DeviceExtension; // rcx
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1073741637;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( DeviceExtension[3552] == 1 )
  {
    v3 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 3560), DeviceObject, Irp, &IrpDisposition);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotCompleted )
        IofCompleteRequest(Irp, 0);
      else
        return (unsigned int)-1073741637;
    }
  }
  return v3;
}
