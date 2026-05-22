/*
 * XREFs of ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18007EFF0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z @ 0x1800807F4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAJUViewHitTestInfo@@PEAI@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 * Callees:
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18000D2A8 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 */

__int64 __fastcall InputSiteManager::GetViewInstanceIdFromInputSiteList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi
  _QWORD *v3; // rbp
  LegacyInputSinkData *Attached; // rax
  LegacyInputSinkData *v5; // rsi

  v1 = (_QWORD *)*a1;
  v2 = 0;
  v3 = (_QWORD *)a1[1];
  while ( v1 != v3 )
  {
    Attached = (LegacyInputSinkData *)InputSite::GetAttachedObject<LegacyInputSinkData>(*v1);
    v5 = Attached;
    if ( Attached && *LegacyInputSinkData::GetViewInstanceId(Attached) )
      return *LegacyInputSinkData::GetViewInstanceId(v5);
    ++v1;
  }
  return v2;
}
