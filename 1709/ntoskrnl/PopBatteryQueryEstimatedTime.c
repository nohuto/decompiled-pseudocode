/*
 * XREFs of PopBatteryQueryEstimatedTime @ 0x1406FE59C
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x140125800 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 */

__int64 __fastcall PopBatteryQueryEstimatedTime(__int64 a1, int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  unsigned int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h]

  v8 = 0LL;
  v2 = *(_DWORD *)(a1 + 108);
  v4 = *(_QWORD *)(a1 + 56);
  v9 = a2;
  v8 = v2 | 0x300000000LL;
  PopPrepareIoctl(v4, 2703428, 0, (unsigned int)&v8, 12, 4);
  v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  v6 = v8;
  if ( v5 < 0 )
    return (unsigned int)-1;
  return v6;
}
