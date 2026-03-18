/*
 * XREFs of ACPIDispatchWmiLog @ 0x1C002B150
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0004B10 (ACPIDispatchForwardIrp.c)
 *     ACPIWmiRegisterGuids @ 0x1C002B1E4 (ACPIWmiRegisterGuids.c)
 *     ACPIWmiEnableLog @ 0x1C005B30C (ACPIWmiEnableLog.c)
 */

__int64 __fastcall ACPIDispatchWmiLog(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v5; // edi
  __int64 LowPart; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( BugCheckParameter3 == CurrentStackLocation->Parameters.WMI.ProviderId )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 4u:
        v5 = ACPIWmiEnableLog(
               CurrentStackLocation->Parameters.CreatePipe.Parameters,
               CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
        Irp->IoStatus.Status = v5;
        break;
      case 5u:
        v5 = 0;
        _InterlockedExchange(&ACPIWmiTraceEnable, 0);
        ACPIWmiLoggerHandle = 0LL;
        Irp->IoStatus.Status = 0;
        break;
      case 8u:
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
        v9 = 0;
        v5 = ACPIWmiRegisterGuids(Parameters, LowPart, &v9, BugCheckParameter3);
        if ( v5 >= 0 )
          Irp->IoStatus.Information = v9;
        Irp->IoStatus.Status = v5;
        break;
      default:
        return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
    }
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v5;
  }
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
