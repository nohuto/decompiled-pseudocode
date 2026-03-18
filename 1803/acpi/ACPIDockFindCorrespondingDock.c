/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C0008104
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C001ECE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0075E84 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]

  v6[1] = 0LL;
  v9 = 768LL;
  v6[0] = RootDeviceExtension + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v10 = 2;
  for ( i = ACPIExtListStartEnum(v6); ; i = ACPIExtListEnumNext(v6) )
  {
    LOBYTE(v3) = 1;
    v4 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(v6, v3) )
      break;
    if ( !v4 || (*(_QWORD *)(v4 + 8) & 0x200000000000000LL) != 0 && *(_QWORD *)(v4 + 184) == a1 )
    {
      if ( v10 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql);
      return v4;
    }
  }
  return v4;
}
