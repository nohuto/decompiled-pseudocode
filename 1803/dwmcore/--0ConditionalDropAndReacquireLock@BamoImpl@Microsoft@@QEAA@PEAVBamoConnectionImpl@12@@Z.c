/*
 * XREFs of ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4
 * Callers:
 *     ?OnZeroReferenceCount@BamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154370 (-OnZeroReferenceCount@BamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?AllocateStubThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180168590 (-AllocateStubThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Micro.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180168DD0 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18016914C (-RemovePrincipal@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 * Callees:
 *     ?CurrentThreadHasLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180153644 (-CurrentThreadHasLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74 (-LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

Microsoft::BamoImpl::ConditionalDropAndReacquireLock *__fastcall Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
        Microsoft::BamoImpl::ConditionalDropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2 && Microsoft::BamoImpl::BamoConnectionImpl::CurrentThreadHasLock(a2) && !*((_DWORD *)a2 + 35) )
  {
    *(_QWORD *)this = a2;
    Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(a2);
  }
  return this;
}
