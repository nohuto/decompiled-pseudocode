/*
 * XREFs of PopPepUnregisterDevice @ 0x1406FEF48
 * Callers:
 *     PopFxUnregisterDevice @ 0x1406F944C (PopFxUnregisterDevice.c)
 * Callees:
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     PopPepRemoveDevice @ 0x1402430FC (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x140243588 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *P)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice(P);
  v3 = *((_DWORD *)P + 42);
  v4 = 0LL;
  if ( v3 != 4 )
    v4 = *((unsigned int *)P + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)P + 45) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(unsigned int *)(P[25 * v2++ + 47] + 16), 0, 0);
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
