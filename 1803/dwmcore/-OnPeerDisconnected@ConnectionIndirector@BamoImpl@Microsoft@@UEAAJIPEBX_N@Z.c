/*
 * XREFs of ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x1801541E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z @ 0x1801540C0 (-OnPeerDisconnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIPEAX_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected(
        struct Microsoft::BamoImpl::BamoConnectionImpl **this,
        __int64 a2,
        Microsoft::BamoImpl::BamoPeerImpl *a3,
        char a4)
{
  const char *v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v11; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, this[1]);
  LOBYTE(v7) = a4;
  v9 = Microsoft::BamoImpl::BamoConnectionImpl::OnPeerDisconnected(this[1], v8, a3, v7);
  if ( v11 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v11);
  return v9;
}
