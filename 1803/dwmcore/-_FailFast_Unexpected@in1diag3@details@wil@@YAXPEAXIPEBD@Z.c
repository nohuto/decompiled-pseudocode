/*
 * XREFs of ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8
 * Callers:
 *     ?PreComputeAndLockForRead@CVisualTree@@QEAAJXZ @ 0x1800410E4 (-PreComputeAndLockForRead@CVisualTree@@QEAAJXZ.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800583C8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x1800BC5B0 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 *     ?AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z @ 0x180153240 (-AckProxyReference@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I_N@Z.c)
 *     ?AllocatePeer@dataproviderBamoConnection@@MEAAJPEAPEAVdataproviderBamoPeer@@@Z @ 0x180153310 (-AllocatePeer@dataproviderBamoConnection@@MEAAJPEAPEAVdataproviderBamoPeer@@@Z.c)
 *     ?DisposeProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I@Z @ 0x180153720 (-DisposeProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBamoPeerImpl@23@I@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153BEC (-OnDisconnected@BamoPeerImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0 (-OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240 (-OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180168CA0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18016914C (-RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     FlushAndWait @ 0x1801C6298 (FlushAndWait.c)
 *     ?s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z @ 0x1801CDE60 (-s_OnReceiveInputThreadMessage@CInputManager@@CAJPEAXPEBXH@Z.c)
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18021C06C (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180142B58 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 3, 0x8000FFFF);
}
