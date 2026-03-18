/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0059DE4
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C00094B0 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C001EA0C (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048950 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0051C8C (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C005968C (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  if ( v1 <= 1 )
    v2 = (__int64 *)(a1 + 152);
  else
    v2 = *(__int64 **)(a1 + 152);
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      ACPIDisconnectWakeInterrupt(v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
}
