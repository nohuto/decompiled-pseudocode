/*
 * XREFs of ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180168730
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016877C (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::BroadcastOnUnregisterError(
        BamoDataProviderRegistrarPrincipal *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v6,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 3) + 24LL));
  v4 = BamoImpl::BamoDataProviderRegistrarPrincipalImpl::BroadcastOnUnregisterError(
         (BamoDataProviderRegistrarPrincipal *)((char *)this + 8),
         a2);
  if ( v6 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v6);
  return v4;
}
