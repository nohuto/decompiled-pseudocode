/*
 * XREFs of PopPrepareIoctl @ 0x1407071AC
 * Callers:
 *     PopBatteryInitialize @ 0x1406FE400 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1406FE59C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1406FE62C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1406FE7B0 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x1406FEC60 (PopBatteryWaitTag.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140707450 (PopFanWorker.c)
 * Callees:
 *     IoReuseIrp @ 0x1400B4070 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
