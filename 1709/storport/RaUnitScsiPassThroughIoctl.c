/*
 * XREFs of RaUnitScsiPassThroughIoctl @ 0x1C00684A0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     McTemplateK0pqqq @ 0x1C002BA60 (McTemplateK0pqqq.c)
 *     PortPassThroughSetAddress @ 0x1C006A26C (PortPassThroughSetAddress.c)
 */

NTSTATUS __fastcall RaUnitScsiPassThroughIoctl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  IRP *v5; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 Arg1; // [rsp+20h] [rbp-48h]
  GUID Activity; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  *(_QWORD *)&Activity.Data1 = 0LL;
  *(_QWORD *)Activity.Data4 = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &Activity);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)v5->Tail.Overlay.CurrentStackLocation->MinorFunction,
        &EventPassThrough,
        &Activity,
        v5,
        v5->Tail.Overlay.CurrentStackLocation->MajorFunction,
        v5->Tail.Overlay.CurrentStackLocation->MinorFunction,
        v5->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
  }
  LOBYTE(a4) = *(_BYTE *)(a1 + 90);
  LOBYTE(a3) = *(_BYTE *)(a1 + 89);
  LOBYTE(a2) = *(_BYTE *)(a1 + 88);
  v7 = PortPassThroughSetAddress(v5, a2, a3, a4);
  if ( v7 < 0 )
    return RaidCompleteRequestEx(v5, 0, 0xC0000010);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
    {
      LODWORD(Arg1) = v7;
      McTemplateK0pq(v8, &EventNonReadWriteRequestComplete, &Activity, v5, Arg1);
    }
  }
  ++v5->CurrentLocation;
  ++v5->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 8), v5);
}
