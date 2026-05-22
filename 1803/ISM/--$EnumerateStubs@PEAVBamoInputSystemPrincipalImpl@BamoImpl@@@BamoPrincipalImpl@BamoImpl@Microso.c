/*
 * XREFs of ??$EnumerateStubs@PEAVBamoInputSystemPrincipalImpl@BamoImpl@@@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@PEAVBamoInputSystemPrincipalImpl@1@@Z1@Z @ 0x180022B78
 * Callers:
 *     ?SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProcessorPrincipal@@@Z @ 0x180021490 (-SetDragNDropContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragNDropContextualProce.c)
 *     ?SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x1800215C0 (-SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@.c)
 *     ?SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x1800216F0 (-SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z.c)
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180021820 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 *     ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x180021950 (-SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z.c)
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x180021A80 (-SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManag.c)
 *     ?SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x180021BB0 (-SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z.c)
 *     ?BroadcastAddDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008B750 (-BroadcastAddDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?BroadcastRemoveDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008B850 (-BroadcastRemoveDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<BamoImpl::BamoInputSystemPrincipalImpl *>(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64),
        __int64 a3)
{
  __int64 i; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_BYTE *)(i + 32) )
    {
      v6 = a2(i, a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1BC,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
          (const char *)(unsigned int)v6);
        return v7;
      }
    }
  }
  return 0;
}
