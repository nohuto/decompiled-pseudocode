/*
 * XREFs of ACPIButtonEvent @ 0x1C0029A18
 * Callers:
 *     ACPIButtonDeviceControl @ 0x1C0029910 (ACPIButtonDeviceControl.c)
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BD70 (ACPIInterruptServiceRoutineDPC.c)
 *     ACPICMButtonNotify @ 0x1C00471AC (ACPICMButtonNotify.c)
 *     ACPICMLidSetPowerCompletion @ 0x1C0047830 (ACPICMLidSetPowerCompletion.c)
 *     ACPICMLidWorker @ 0x1C0047920 (ACPICMLidWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonCompletePendingIrps @ 0x1C0047064 (ACPIButtonCompletePendingIrps.c)
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
