/*
 * XREFs of ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x180153AB4
 * Callers:
 *     ?Thunk_MaterializeBamoDataProviderProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154C60 (-Thunk_MaterializeBamoDataProviderProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180152FF0 (--4-$com_ptr_t@VBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 *     ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x1801534A4 (-CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEA.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::dataproviderBamoPeerImpl::MaterializeBamoDataProviderProxy(
        BamoImpl::dataproviderBamoPeerImpl *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  BamoImpl::CreateDataProviderProxy(
    *(BamoImpl **)(*((_QWORD *)this + 3) + 24LL),
    a2,
    (struct Microsoft::Bamo::BamoPeer *)&v12,
    a4);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
  wil::com_ptr_t<Microsoft::BamoImpl::BamoPeerImpl,wil::err_returncode_policy>::operator=(
    (void (__fastcall ****)(_QWORD))(v6 + 16),
    (__int64)this);
  *(_DWORD *)(v6 + 24) = v5;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 40LL))(
         v7,
         *((unsigned int *)this + 9),
         v5,
         v6);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xA5D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v8,
      v10);
    __debugbreak();
  }
  return 0LL;
}
