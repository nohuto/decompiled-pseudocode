/*
 * XREFs of PiSwDispatch @ 0x14045FBB0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     PiSwIrpStartCreate @ 0x14045FCD4 (PiSwIrpStartCreate.c)
 *     PiSwIrpSetLifetime @ 0x140460D68 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x140460F78 (PiSwIrpInterfaceRegister.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405746C4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 *     PiSwIrpPropertySet @ 0x14057D004 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1405DA2A4 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1406A3270 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v8; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)PiAuDoesClientHaveAccess(128LL) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
LABEL_14:
    v8 = a2;
    goto LABEL_15;
  }
  if ( MajorFunction != 14 )
  {
    if ( MajorFunction == 2 )
    {
      if ( CurrentStackLocation->FileObject->FsContext2 )
      {
        PiSwDeviceDereference();
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      if ( CurrentStackLocation->FileObject->FsContext2 )
        PiSwIrpCleanup();
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_14;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)PiSwIrpStartCreate(a2);
    case 0x470404u:
      return (unsigned int)PiSwIrpPropertySet(a2);
    case 0x470408u:
      return (unsigned int)PiSwIrpInterfaceRegister(a2);
    case 0x47040Cu:
      return (unsigned int)PiSwIrpInterfaceSetState(a2);
    case 0x470410u:
      return (unsigned int)PiSwIrpInterfacePropertySet(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654100 )
  {
    v8 = a2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_15:
    IofCompleteRequest(v8, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpSetLifetime(a2);
}
