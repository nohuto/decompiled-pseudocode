/*
 * XREFs of PopPepUnregisterDevice @ 0x140764870
 * Callers:
 *     PopFxUnregisterDevice @ 0x140760910 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x14027A1D4 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x14027A5FC (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
