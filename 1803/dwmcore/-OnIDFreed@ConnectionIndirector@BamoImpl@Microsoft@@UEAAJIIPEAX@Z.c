/*
 * XREFs of ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180153D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x180153664 (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnIDFreed(
        struct Microsoft::BamoImpl::BamoConnectionImpl **this,
        __int64 a2,
        __int64 a3,
        Microsoft::BamoImpl::BamoProxyImpl *a4)
{
  Microsoft::BamoImpl::BamoConnectionImpl *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v6, this[1]);
  if ( a4 )
    Microsoft::BamoImpl::BamoProxyImpl::Disconnect(a4, 0);
  if ( v6 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v6);
  return 0LL;
}
