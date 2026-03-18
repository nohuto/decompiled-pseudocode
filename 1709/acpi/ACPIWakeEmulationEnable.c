/*
 * XREFs of ACPIWakeEmulationEnable @ 0x1C005A7E4
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0002A38 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPIAssociateWakeInterrupt @ 0x1C0059E28 (ACPIAssociateWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationEnable(__int64 a1)
{
  unsigned int v1; // esi
  int v2; // ebp
  __int64 v4; // r14
  __int64 v5; // rdi
  KIRQL v6; // al

  v1 = *(_DWORD *)(a1 + 116);
  v2 = 0;
  if ( v1 <= 1 )
    v4 = a1 + 152;
  else
    v4 = *(_QWORD *)(a1 + 152);
  v5 = 0LL;
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = ACPIAssociateWakeInterrupt(v4 + 40 * v5);
      if ( v2 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v1 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    *(_DWORD *)(a1 + 108) |= 1u;
    KeReleaseSpinLock(&AcpiPowerLock, v6);
  }
  return (unsigned int)v2;
}
