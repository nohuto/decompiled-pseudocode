/*
 * XREFs of ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C
 * Callers:
 *     ?AllocatePeer@dataproviderBamoConnectionImpl@BamoImpl@@EEAAJPEAPEAVBamoPeer@Bamo@Microsoft@@@Z @ 0x180153390 (-AllocatePeer@dataproviderBamoConnectionImpl@BamoImpl@@EEAAJPEAPEAVBamoPeer@Bamo@Microsoft@@@Z.c)
 *     ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x1801534A4 (-CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEA.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x180153574 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPE.c)
 *     ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x180153CA4 (-OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ.c)
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 *     ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0 (-OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 *     ?SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z @ 0x180154A28 (-SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z.c)
 *     ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154BC0 (-Thunk_MarkProxyReady_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@S.c)
 *     ?Thunk_MaterializeBamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154C70 (-Thunk_MaterializeBamoDataProviderRegistrarProxy_5@-$IBamoPeer_dataprovider_Receive@Vdataprovide.c)
 *     ?InitializeProxyThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x1801688C0 (-InitializeProxyThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnConnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x180168930 (-OnConnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x1801689A0 (-OnDisconnectedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180168CA0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180168FB0 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016935C (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C298 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18016C420 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C520 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18016C5C8 (-SetColorValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18016C670 (-SetQuaternionValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z @ 0x18016C718 (-SetScalarValue@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIM@Z.c)
 *     ?SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z @ 0x18016C790 (-SetVector2Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMM@Z.c)
 *     ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x18016C818 (-SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z.c)
 *     ?SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18016C8B0 (-SetVector4Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 *     ?Thunk_SetBooleanValue_8@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C980 (-Thunk_SetBooleanValue_8@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAX.c)
 *     ?Thunk_SetMatrix3x2Value_34@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CA50 (-Thunk_SetMatrix3x2Value_34@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?Thunk_SetMatrix4x4Value_40@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CAD0 (-Thunk_SetMatrix4x4Value_40@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CC70 (-Thunk_UpdateRestrictToProcessId_5@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@.c)
 * Callees:
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

Microsoft::BamoImpl::DropAndReacquireLock *__fastcall Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
        Microsoft::BamoImpl::DropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2)
{
  *(_QWORD *)this = 0LL;
  if ( !*((_DWORD *)a2 + 35) )
  {
    *(_QWORD *)this = a2;
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(a2);
  }
  return this;
}
