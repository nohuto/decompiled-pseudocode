/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0040AC8
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0019920 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001A5DC (ACPIDeviceInitializePowerRequest.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0040270 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C0040370 (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (__int64 *)(a1 + 152);
  if ( v1 > 1 )
    v2 = (__int64 *)*v2;
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
