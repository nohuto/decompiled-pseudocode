/*
 * XREFs of ACPIButtonEvent @ 0x1C002A918
 * Callers:
 *     ACPIButtonDeviceControl @ 0x1C002A810 (ACPIButtonDeviceControl.c)
 *     ACPICMButtonNotify @ 0x1C00468FC (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0046F70 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C0047060 (ACPICMLidWorker.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C0050670 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C00467B4 (ACPIButtonCompletePendingIrps.c)
 */

__int64 __fastcall ACPIButtonEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rsi
  int v5; // ebx
  KIRQL v6; // al
  unsigned int v7; // edi
  KIRQL v8; // r15

  if ( !a1 )
    return 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_DWORD *)(DeviceExtension + 200);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  v7 = *(_DWORD *)(DeviceExtension + 196) | a2;
  v8 = v6;
  if ( (v5 & 4) != 0 )
  {
    if ( (v7 & 0x80080000) != 0 )
      v7 = v7 & 0xFFFCFFFF | (*(_BYTE *)(DeviceExtension + 192) != 0 ? 0x10000 : 0x20000);
    else
      v7 = 0;
  }
  *(_DWORD *)(DeviceExtension + 196) = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)ACPIButtonCompletePendingIrps(a1, v7) )
      *(_DWORD *)(DeviceExtension + 196) = 0;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
  return 259LL;
}
