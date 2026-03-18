/*
 * XREFs of ??4?$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180152FF0
 * Callers:
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@@Z @ 0x18015340C (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBamoPeerImpl@23@.c)
 *     ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153AB4 (-MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153B50 (-MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall wil::com_ptr_t<Microsoft::BamoImpl::BamoPeerImpl,wil::err_returncode_policy>::operator=(
        void (__fastcall ****a1)(_QWORD),
        __int64 a2))(_QWORD)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = *a1;
  *a1 = (void (__fastcall ***)(_QWORD))a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  if ( v3 )
    (**v3)(v3);
  return a1;
}
