/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0001918
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0001310 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC (ACPIDereferenceWaitWakePowerRequest.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00526CC (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C005A290 (ACPIDisconnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi

  result = *(unsigned int *)(a1 + 116);
  if ( (unsigned int)result > 1 )
    v2 = *(_QWORD *)(a1 + 152);
  else
    v2 = a1 + 152;
  if ( (_DWORD)result )
  {
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      result = ACPIDisconnectWakeInterrupt(v2);
      v2 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
