/*
 * XREFs of ?CurrentThreadHasLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180153644
 * Callers:
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E38 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::BamoImpl::BamoConnectionImpl::CurrentThreadHasLock(
        Microsoft::BamoImpl::BamoConnectionImpl *this)
{
  return *((_DWORD *)this + 34) == GetCurrentThreadId();
}
