/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180169110
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9
  unsigned int v5; // ebx
  Microsoft::BamoImpl::BamoConnectionImpl *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v7,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 2) + 24LL));
  v5 = Microsoft::BamoImpl::BamoImplObject::Release(this, v2, v3, v4);
  if ( v7 )
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v7);
  return v5;
}
