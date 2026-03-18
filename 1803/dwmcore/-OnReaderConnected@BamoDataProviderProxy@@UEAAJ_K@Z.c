/*
 * XREFs of ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x180169A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180169AC0 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

__int64 __fastcall BamoDataProviderProxy::OnReaderConnected(BamoDataProviderProxy *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v6,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 24LL));
  v4 = BamoImpl::BamoDataProviderProxyImpl::OnReaderConnected((BamoDataProviderProxy *)((char *)this + 8), a2);
  if ( v6 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v6);
  return v4;
}
