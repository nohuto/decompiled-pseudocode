/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BamoConnectionImpl *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    Microsoft::BamoImpl::InternalLock::InternalLock(
      (Microsoft::BamoImpl::InternalLock *)&v11,
      *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(v4 + 24) + 24LL));
    v6 = Microsoft::BamoImpl::BamoImplObject::Release(this, v7, v8, v9);
    if ( v11 )
      Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(v11);
  }
  else
  {
    return (unsigned int)Microsoft::BamoImpl::BamoImplObject::Release(this, 0LL, a3, a4);
  }
  return v6;
}
