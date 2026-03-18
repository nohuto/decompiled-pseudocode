/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C00087E4
 * Callers:
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C000B5D0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C00143D0 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0024840 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C002EB9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C002ED8C (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C0075E84 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

bool ACPIDockIsDockDevice()
{
  return (int)AMLIGetNameSpaceObject("_DCK") >= 0;
}
