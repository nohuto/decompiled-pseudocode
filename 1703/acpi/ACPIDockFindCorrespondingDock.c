/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C0042598
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009D17C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C00133B8 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+50h] [rbp-10h]

  v5[1] = 0LL;
  v8 = 768LL;
  v5[0] = RootDeviceExtension + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v9 = 2;
  for ( i = ACPIExtListStartEnum((__int64)v5); ; i = (__int64)ACPIExtListEnumNext((__int64)v5) )
  {
    v3 = i;
    if ( !ACPIExtListTestElement((__int64)v5, 1) )
      break;
    if ( !v3 || (*(_QWORD *)(v3 + 8) & 0x200000000000000LL) != 0 && *(_QWORD *)(v3 + 184) == a1 )
    {
      if ( v9 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql);
      return v3;
    }
  }
  return v3;
}
