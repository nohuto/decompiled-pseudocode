/*
 * XREFs of ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801532EC
 * Callers:
 *     ?SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z @ 0x180154A28 (-SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180168FB0 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016935C (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C298 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C520 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BamoProxyImpl::AckReference(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 56LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6),
    a3);
}
