/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44
 * Callers:
 *     ??0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x1800C4CC4 (--0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ?Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800C4D68 (-Join@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgSco.c)
 *     ?AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z @ 0x180153240 (-AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@@Z @ 0x18015340C (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@.c)
 *     ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x1801534A4 (-CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEA.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x180153574 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPE.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153664 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?DisposeProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I@Z @ 0x180153720 (-DisposeProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I@Z.c)
 *     ?GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1801538C4 (-GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153AB4 (-MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153B50 (-MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnMessage@dataproviderBamoPeerImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x180153DD0 (-OnMessage@dataproviderBamoPeerImpl@BamoImpl@@UEAAJPEBXI@Z.c)
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0 (-OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240 (-OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z @ 0x1801543E8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPeerImpl@23@@Z.c)
 *     ?SendAckProxyReference@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI_N@Z @ 0x1801547A0 (-SendAckProxyReference@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI_N@Z.c)
 *     ?SendCheckProtocol@dataproviderBamoPeerImpl@BamoImpl@@UEAAXAEBU_GUID@@@Z @ 0x180154820 (-SendCheckProtocol@dataproviderBamoPeerImpl@BamoImpl@@UEAAXAEBU_GUID@@@Z.c)
 *     ?SendDisposeProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z @ 0x1801548B0 (-SendDisposeProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z.c)
 *     ?SendRequestDisposeProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z @ 0x180154930 (-SendRequestDisposeProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z.c)
 *     ?SendSetBootstrapProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z @ 0x1801549B0 (-SendSetBootstrapProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z.c)
 *     ?SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z @ 0x180154A28 (-SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_MaterializeBamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154C70 (-Thunk_MaterializeBamoDataProviderRegistrarProxy_5@-$IBamoPeer_dataprovider_Receive@Vdataprovide.c)
 *     ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154CC0 (-Thunk_RequestDisposeProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl.c)
 *     ?AllocateStubThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180168590 (-AllocateStubThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Micro.c)
 *     ?OnMessage@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x180168A10 (-OnMessage@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180168FB0 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18016914C (-RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180169200 (-SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSend.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016935C (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnMessage@BamoDataProviderProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18016C340 (-OnMessage@BamoDataProviderProxyImpl@BamoImpl@@UEAAJPEBXI@Z.c)
 *     ?OnMessage@BamoDataSourceProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18016C3B0 (-OnMessage@BamoDataSourceProxyImpl@BamoImpl@@UEAAJPEBXI@Z.c)
 *     ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CC70 (-Thunk_UpdateRestrictToProcessId_5@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801C9E80 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x1801F96C0 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 *     ?SetState@CHolographicDisplay@@UEAAJJ@Z @ 0x1801F9A50 (-SetState@CHolographicDisplay@@UEAAJJ@Z.c)
 *     _lambda_5473257d4121221b454f30f9568d7f98_::operator() @ 0x18021C000 (_lambda_5473257d4121221b454f30f9568d7f98_--operator().c)
 *     ?OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z @ 0x18021CA58 (-OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180142B58 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, (unsigned int)a4);
}
