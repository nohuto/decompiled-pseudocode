/*
 * XREFs of ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x18000AD04
 * Callers:
 *     ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18000AEC0 (-OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18000B1B0 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?AllocateStubThunk@BamoInputSiteManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x18000B6D0 (-AllocateStubThunk@BamoInputSiteManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@.c)
 *     ?OnZeroReferenceCount@BamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18001BAF0 (-OnZeroReferenceCount@BamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?AllocateStubThunk@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180021F90 (-AllocateStubThunk@BamoInputSystemPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAP.c)
 *     ?AllocateStubThunk@BamoInputDeliveryServerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180023460 (-AllocateStubThunk@BamoInputDeliveryServerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microso.c)
 *     ?AllocateStubThunk@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x18002B460 (-AllocateStubThunk@BamoMPCManagerClientPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@.c)
 *     ?AllocateStubThunk@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180030A30 (-AllocateStubThunk@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@.c)
 *     ?AllocateStubThunk@BamoHeatGripServicePrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180038D60 (-AllocateStubThunk@BamoHeatGripServicePrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@.c)
 *     ?AllocateStubThunk@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800545B0 (-AllocateStubThunk@BamoMPCManagerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPE.c)
 *     ?AllocateStubThunk@BamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180062830 (-AllocateStubThunk@BamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl.c)
 *     ?AllocateStubThunk@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x180067290 (-AllocateStubThunk@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Micros.c)
 *     ?AllocateStubThunk@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x18008D990 (-AllocateStubThunk@BamoDataProviderPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEA.c)
 *     ?AllocateStubThunk@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x18008DFD0 (-AllocateStubThunk@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPE.c)
 *     ?AllocateStubThunk@BamoTestCommandsPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z @ 0x1800928A0 (-AllocateStubThunk@BamoTestCommandsPrincipalImpl@BamoImpl@@UEAAJPEAVBamoPeerImpl@2Microsoft@@PEA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

Microsoft::BamoImpl::ConditionalDropAndReacquireLock *__fastcall Microsoft::BamoImpl::ConditionalDropAndReacquireLock::ConditionalDropAndReacquireLock(
        Microsoft::BamoImpl::ConditionalDropAndReacquireLock *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  if ( a2 && *((_DWORD *)a2 + 34) == GetCurrentThreadId() && !*((_DWORD *)a2 + 35) )
  {
    *(_QWORD *)this = a2;
    if ( *((_DWORD *)a2 + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v4);
      JUMPOUT(0x18000AD7ALL);
    }
    *((_DWORD *)a2 + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 96));
  }
  return this;
}
