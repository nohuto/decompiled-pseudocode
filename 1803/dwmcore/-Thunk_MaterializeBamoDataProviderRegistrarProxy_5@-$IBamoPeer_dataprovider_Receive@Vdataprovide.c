/*
 * XREFs of ?Thunk_MaterializeBamoDataProviderRegistrarProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_MaterializeBamoDataProviderRegistrarProxy_5(
        __int64 a1,
        __int64 a2)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v4,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 24LL));
  wil::details::in1diag3::_FailFast_Hr(
    retaddr,
    (void *)0x3E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
    (const char *)0x80004001LL,
    v2);
  JUMPOUT(0x180154CA7LL);
}
