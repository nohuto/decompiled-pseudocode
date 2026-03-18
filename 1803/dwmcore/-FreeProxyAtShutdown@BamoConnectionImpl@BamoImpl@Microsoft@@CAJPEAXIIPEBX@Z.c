/*
 * XREFs of ?FreeProxyAtShutdown@BamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAXIIPEBX@Z @ 0x180153800
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153664 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoConnectionImpl::FreeProxyAtShutdown(
        void *a1,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  if ( a4 )
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 1);
  return 0LL;
}
