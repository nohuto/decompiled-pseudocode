/*
 * XREFs of PopBatteryReadTag @ 0x1406FE7B0
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSynchronousCallDriver @ 0x140125800 (IoSynchronousCallDriver.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 */

__int64 __fastcall PopBatteryReadTag(__int64 a1)
{
  _DWORD *v1; // rsi
  NTSTATUS v3; // edi

  v1 = (_DWORD *)(a1 + 168);
  *(_DWORD *)(a1 + 168) = 0;
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703424, 0, a1 + 168, 4, 4);
  v3 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( v3 >= 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 108) = *v1;
    *(_DWORD *)(a1 + 104) = 1;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  return (unsigned int)v3;
}
