/*
 * XREFs of PopPepUnregisterDevice @ 0x1406CAFC8
 * Callers:
 *     PopFxUnregisterDevice @ 0x1406C8A30 (PopFxUnregisterDevice.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140149A84 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x14022F0D0 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x14022F390 (PopPepWaitForDeviceRelease.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", a1);
  v2 = 0;
  PopPepProcessEvent((__int64)a1, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(a1 + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)a1);
  PopPepRemoveDevice(a1);
  v3 = *((_DWORD *)a1 + 39);
  v4 = 0;
  if ( v3 != 4 )
    v4 = *((_DWORD *)a1 + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)a1 + 42) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(a1[25 * v2++ + 46] + 16), 0, 0);
    while ( v2 < *((_DWORD *)a1 + 42) );
  }
  ExFreePoolWithTag(a1, 0x54706550u);
}
