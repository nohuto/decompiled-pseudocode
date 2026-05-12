/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C0064F74
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005164 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002FB54 (Template_pq.c)
 *     Template_pqqq @ 0x1C002FDBC (Template_pqqq.c)
 *     PortPassThroughSetAddress @ 0x1C0066918 (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  IRP *v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-48h]
  int MajorFunction; // [rsp+20h] [rbp-48h]
  int MinorFunction; // [rsp+28h] [rbp-40h]
  unsigned int LowPart; // [rsp+30h] [rbp-38h]
  GUID v15; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  *(_QWORD *)&v15.Data1 = 0LL;
  *(_QWORD *)v15.Data4 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
    {
      CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      MinorFunction = CurrentStackLocation->MinorFunction;
      MajorFunction = CurrentStackLocation->MajorFunction;
      Template_pqqq(
        CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &v15,
        v5,
        MajorFunction,
        MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a4) = *(_BYTE *)(a1 + 90);
  LOBYTE(a3) = *(_BYTE *)(a1 + 89);
  LOBYTE(a2) = *(_BYTE *)(a1 + 88);
  v8 = PortPassThroughSetAddress(v5, a2, a3, a4);
  if ( v8 < 0 )
    return RaidCompleteRequestEx(v5, 0, 0xC0000010);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
    {
      LODWORD(v11) = v8;
      Template_pq(v9, &EventNonReadWriteRequestComplete, &v15, v5, v11);
    }
  }
  ++v5->CurrentLocation;
  ++v5->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 8), v5);
}
