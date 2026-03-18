/*
 * XREFs of PopBatteryWaitTag @ 0x1406FEC60
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     PopBatteryAdd @ 0x1406FE010 (PopBatteryAdd.c)
 * Callees:
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryWaitTag(__int64 a1)
{
  __int64 v2; // rcx

  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 168) = -1;
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703424, 0, a1 + 168, 4, 4);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  *(_QWORD *)(v2 - 16) = PopBatteryIrpComplete;
  *(_QWORD *)(v2 - 8) = a1;
  *(_BYTE *)(v2 - 69) = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
}
