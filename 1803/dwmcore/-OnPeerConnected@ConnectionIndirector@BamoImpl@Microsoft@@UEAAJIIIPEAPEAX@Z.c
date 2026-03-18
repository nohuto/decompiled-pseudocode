/*
 * XREFs of ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180154050
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180153E40 (-OnPeerConnected@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected(
        struct Microsoft::BamoImpl::BamoConnectionImpl **this,
        int a2,
        int a3,
        int a4,
        void **a5)
{
  unsigned int v9; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v11; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, this[1]);
  v9 = Microsoft::BamoImpl::BamoConnectionImpl::OnPeerConnected(this[1], a2, a3, a4, a5);
  if ( v11 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v11);
  return v9;
}
