/*
 * XREFs of ACPIWakeEnableDisablePciDevice @ 0x1C001061C
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0025DA0 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWaitWakeEnableOnPowerUp @ 0x1C005A370 (ACPIWaitWakeEnableOnPowerUp.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIWakeEnableDisablePciDevice(__int64 a1, char a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  __int64 v6; // rcx
  KIRQL v7; // bl

  if ( PciPmeInterfaceInstantiated )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(a1 + 736);
    v7 = v4;
    if ( v6 )
    {
      if ( PciPmeInterfaceInstantiated )
      {
        LOBYTE(v5) = a2;
        (*((void (__fastcall **)(__int64, __int64))PciPmeInterface + 6))(v6, v5);
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  }
}
