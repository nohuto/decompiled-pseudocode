/*
 * XREFs of ACPICMLidSetPowerCompletion @ 0x1C0047830
 * Callers:
 *     ACPICMLidSetPower @ 0x1C0047790 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIButtonEvent @ 0x1C0029A18 (ACPIButtonEvent.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C00462EC (ACPIBusIrpSetSystemPower.c)
 *     ACPICMButtonSetPower @ 0x1C0047300 (ACPICMButtonSetPower.c)
 */

__int64 __fastcall ACPICMLidSetPowerCompletion(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _DEVICE_OBJECT *v7; // rbp
  __int64 DeviceExtension; // rax
  int v9; // r15d
  __int64 v10; // r12
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // al
  BOOL v14; // ebx

  v4 = *(_QWORD *)(a4 + 184);
  v7 = *(struct _DEVICE_OBJECT **)(v4 + 40);
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v7);
  v9 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = 0;
  v10 = DeviceExtension;
  if ( a2 >= 0 )
  {
    v12 = (KSPIN_LOCK *)(DeviceExtension + 184);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
    v14 = *(_BYTE *)(v10 + 192) != 0;
    *(_BYTE *)(v10 + 192) = v9 != 0;
    KeReleaseSpinLock(v12, v13);
    if ( (v9 != 0) != v14 )
      ACPIButtonEvent((ULONG_PTR)v7, v9 != 0 ? -2146697216 : 786432);
    return ACPICMButtonSetPower(v7, a4);
  }
  else
  {
    *(_DWORD *)(v4 + 16) = 0;
    return ACPIBusIrpSetSystemPower(v7, (PIRP *)a4, v4);
  }
}
