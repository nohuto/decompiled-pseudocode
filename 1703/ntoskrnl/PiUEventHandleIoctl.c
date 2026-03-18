/*
 * XREFs of PiUEventHandleIoctl @ 0x1404A539C
 * Callers:
 *     PiUEventDispatch @ 0x1404A5300 (PiUEventDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     PiUEventHandleUnregisterClient @ 0x14045BC24 (PiUEventHandleUnregisterClient.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiUEventHandleGetEvent @ 0x1404A5454 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleVetoEvent @ 0x1405743B4 (PiUEventHandleVetoEvent.c)
 */

__int64 __fastcall PiUEventHandleIoctl(PIRP Irp, __int64 a2, int a3, int a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Event; // eax
  unsigned int v7; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470800u:
      Event = PiUEventHandleRegistration(
                (__int64)CurrentStackLocation->FileObject,
                (__int64)Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Create.Options,
                CurrentStackLocation->Parameters.Read.Length,
                (__int64)&Irp->IoStatus);
      break;
    case 0x470804u:
      Event = PiUEventHandleGetEvent(
                CurrentStackLocation->FileObject,
                Irp->AssociatedIrp.MasterIrp,
                a3,
                CurrentStackLocation->Parameters.Read.Length,
                (__int64)&Irp->IoStatus);
      break;
    case 0x470808u:
      Event = PiUEventHandleVetoEvent(
                CurrentStackLocation->FileObject,
                Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Create.Options,
                a4,
                (__int64)&Irp->IoStatus);
      break;
    case 0x47080Cu:
      Event = PiUEventHandleUnregisterClient((__int64)CurrentStackLocation->FileObject);
      break;
    default:
      v7 = -1073741637;
      goto LABEL_5;
  }
  v7 = Event;
LABEL_5:
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v7;
}
