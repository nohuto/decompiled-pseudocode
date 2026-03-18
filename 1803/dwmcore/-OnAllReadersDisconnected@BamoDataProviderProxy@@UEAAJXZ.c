/*
 * XREFs of ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x180169960
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801699A4 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnAllReadersDisconnected(BamoDataProviderProxy *this)
{
  unsigned int v2; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v4,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  v2 = BamoImpl::BamoDataProviderProxyImpl::OnAllReadersDisconnected((BamoDataProviderProxy *)((char *)this + 8));
  if ( v4 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v4);
  return v2;
}
