/*
 * XREFs of Controller_EvtIoInternalDeviceControl @ 0x1C00109A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_EvtIoInternalDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // ebx

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  if ( LowPart == 2232247 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 4u, 4u, 0xC6u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    v7 = 0;
    Controller_ReportFatalError(v5, 2, 4159, 0, 0LL, 0LL);
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    v6 = WdfFunctions_01015;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(v6 + 272))(WdfDriverGlobals, a1, a2);
  }
  return v7;
}
