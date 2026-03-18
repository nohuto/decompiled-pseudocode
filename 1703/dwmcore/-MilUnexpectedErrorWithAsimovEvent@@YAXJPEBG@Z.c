/*
 * XREFs of ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180185D20
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18006B810 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180082350 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180189608 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

void __fastcall MilUnexpectedErrorWithAsimovEvent(int a1, const unsigned __int16 *a2)
{
  const struct _TlgProvider_t *v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  DwmCoreAsimov::CDwmEventManager_Private **Manager; // rax

  MilUnexpectedError(a1, a2);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v5, v4);
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
    (DwmCoreAsimov::CDwmEventManager *)Manager,
    L"MilUnexpectedError",
    a2,
    a1);
}
