/*
 * XREFs of IopPowerDispatch @ 0x14000F210
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     PoSetPowerState @ 0x14012BB60 (PoSetPowerState.c)
 */

__int64 __fastcall IopPowerDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG Options; // edx
  _DWORD *SecurityContext; // rcx
  int v9; // eax

  Status = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation->MinorFunction )
    goto LABEL_9;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v9 = PoPowerSequence;
    *SecurityContext = PoPowerSequence;
    SecurityContext[1] = v9;
    SecurityContext[2] = v9;
    goto LABEL_7;
  }
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
      goto LABEL_7;
    goto LABEL_9;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options == 1 )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State);
      goto LABEL_7;
    }
LABEL_9:
    Status = Irp->IoStatus.Status;
    goto LABEL_8;
  }
LABEL_7:
  Irp->IoStatus.Status = 0;
LABEL_8:
  IofCompleteRequest(Irp, 0);
  return Status;
}
