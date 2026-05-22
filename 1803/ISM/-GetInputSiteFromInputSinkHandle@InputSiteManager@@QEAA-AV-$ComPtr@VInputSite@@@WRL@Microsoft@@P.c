/*
 * XREFs of ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18000BB40
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18000BC98 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3B3C (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18000BAF0 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z.c)
 *     ??$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ @ 0x18000C810 (--$GetAttachedObject@VLegacyInputSinkData@@@InputSite@@QEAAPEAVLegacyInputSinkData@@XZ.c)
 *     ??$emplace_back@UAttachedInputObjectEntry@InputSite@@@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAAAEAUAttachedInputObjectEntry@InputSite@@$$QEAU23@@Z @ 0x18000C99C (--$emplace_back@UAttachedInputObjectEntry@InputSite@@@-$vector@UAttachedInputObjectEntry@InputSi.c)
 *     ??0LegacyInputSinkData@@QEAA@PEAX@Z @ 0x18000D178 (--0LegacyInputSinkData@@QEAA@PEAX@Z.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18000D318 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkHandle(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v5; // rdi
  LegacyInputSinkData *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  LegacyInputSinkData *v10; // [rsp+60h] [rbp-A8h]
  __int64 (__fastcall **v11)(void *); // [rsp+68h] [rbp-A0h]
  char *v12; // [rsp+70h] [rbp-98h]
  __int64 v13; // [rsp+78h] [rbp-90h]
  void *v14[46]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v15; // [rsp+220h] [rbp+118h]
  LegacyInputSinkData *v16; // [rsp+220h] [rbp+118h]

  v13 = -2LL;
  LegacyInputSinkData::LegacyInputSinkData((LegacyInputSinkData *)v14, a3);
  v15 = (__int64)*LegacyInputSinkData::GetLuid((LegacyInputSinkData *)v14);
  InputSiteManager::GetInputSiteFromId(a1, a2, v15);
  if ( !InputSite::GetAttachedObject<LegacyInputSinkData>(*a2) )
  {
    v5 = *a2;
    v8 = 0LL;
    v16 = (LegacyInputSinkData *)operator new(0x160uLL);
    LegacyInputSinkData::LegacyInputSinkData(v16, v14[0]);
    v10 = v16;
    v11 = &off_1800EB238;
    v12 = (char *)&LegacyInputSinkData `RTTI Type Descriptor' + 1;
    std::vector<InputSite::AttachedInputObjectEntry>::emplace_back<InputSite::AttachedInputObjectEntry>(v5 + 24, &v8);
    if ( ((unsigned __int8)v12 & 3) == 1LL )
    {
      v6 = v10;
    }
    else
    {
      if ( ((unsigned __int8)v12 & 3) != 2LL )
        goto LABEL_7;
      v6 = (LegacyInputSinkData *)&v9;
    }
    (*v11)(v6);
  }
LABEL_7:
  if ( (unsigned __int64)v14[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink();
  return a2;
}
