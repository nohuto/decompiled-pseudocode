/*
 * XREFs of PiUEventDispatch @ 0x1404A5300
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleIoctl @ 0x1404A539C (PiUEventHandleIoctl.c)
 */

__int64 __fastcall PiUEventDispatch(__int64 a1, IRP *a2, __int64 a3)
{
  int Status; // edi
  IRP *v4; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UCHAR MajorFunction; // al
  IRP *v7; // rcx
  char *FsContext2; // rcx

  Status = a2->IoStatus.Status;
  v4 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( Status >= 0 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction == 2 )
      {
        FsContext2 = (char *)CurrentStackLocation->FileObject->FsContext2;
        if ( FsContext2 )
        {
          LOBYTE(a2) = 1;
          PiUEventFreeClientRegistrationContext(FsContext2, (__int64)a2, a3);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
        Status = 0;
        v7 = v4;
        v4->IoStatus.Status = 0;
        goto LABEL_9;
      }
      v7 = a2;
      if ( MajorFunction == 14 )
        return (unsigned int)PiUEventHandleIoctl(a2);
      if ( MajorFunction != 18 )
      {
        Status = -1073741637;
        a2->IoStatus.Status = -1073741637;
        goto LABEL_9;
      }
    }
    else
    {
      v7 = a2;
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    a2->IoStatus.Status = 0;
LABEL_9:
    IofCompleteRequest(v7, 0);
  }
  return (unsigned int)Status;
}
