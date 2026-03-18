/*
 * XREFs of ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C00060C4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4 (ACPIInternalFindDeviceExtensionNoLock.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 */

__int64 __fastcall ACPIInternalFindDeviceExtensionNoLock(__int64 a1, __int64 a2)
{
  char *i; // rax
  __int64 DeviceExtensionNoLock; // rbx
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock[2]; // [rsp+28h] [rbp-38h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]

  v10 = 0;
  v5 = a2 + 752;
  v9 = 768LL;
  *(_OWORD *)SpinLock = 0LL;
  for ( i = (char *)ACPIExtListStartEnum(&v5); ; i = ACPIExtListEnumNext((__int64)&v5) )
  {
    DeviceExtensionNoLock = (__int64)i;
    if ( v8 + v9 == v5 )
    {
      if ( v10 )
        goto LABEL_15;
      return 0LL;
    }
    if ( v10 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v8);
      KeReleaseSpinLock(SpinLock[1], NewIrql);
    }
    if ( !DeviceExtensionNoLock )
    {
      if ( v10 == 2 )
LABEL_15:
        KeReleaseSpinLock(SpinLock[1], NewIrql);
      return 0LL;
    }
    if ( *(_QWORD *)(DeviceExtensionNoLock + 736) == a1 )
      break;
    DeviceExtensionNoLock = ACPIInternalFindDeviceExtensionNoLock(a1, DeviceExtensionNoLock);
    if ( DeviceExtensionNoLock )
      break;
  }
  if ( v10 == 2 )
    KeReleaseSpinLock(SpinLock[1], NewIrql);
  return DeviceExtensionNoLock;
}
