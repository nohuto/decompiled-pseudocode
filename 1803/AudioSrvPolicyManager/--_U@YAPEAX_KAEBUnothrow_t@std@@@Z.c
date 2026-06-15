/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035E14
 * Callers:
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x18002F1AC (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003081C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x180033BE0 (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800342B0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800347AC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __fastcall operator new[](SIZE_T a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
