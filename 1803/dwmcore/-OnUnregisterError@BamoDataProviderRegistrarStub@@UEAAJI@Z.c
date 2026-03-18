/*
 * XREFs of ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180168B90
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z @ 0x180168BE0 (-OnUnregisterError@BamoDataProviderRegistrarStubImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoDataProviderRegistrarStub::OnUnregisterError(
        BamoDataProviderRegistrarStub *this,
        unsigned int a2)
{
  unsigned int v4; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v6,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL));
  v4 = BamoImpl::BamoDataProviderRegistrarStubImpl::OnUnregisterError(
         (BamoDataProviderRegistrarStub *)((char *)this + 8),
         a2);
  if ( v6 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v6);
  return v4;
}
