/*
 * XREFs of ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x18008D718
 * Callers:
 *     ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18008EB1C (-MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::CreateDataProviderProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BamoConnectionImpl *a2,
        struct Microsoft::Bamo::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a3 = 0LL;
  if ( !*((_DWORD *)this + 35) )
  {
    if ( *((_DWORD *)this + 34) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
      __debugbreak();
    }
    *((_DWORD *)this + 34) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  wil::details::in1diag3::FailFast_Hr(
    retaddr,
    (void *)0x28,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
    (const char *)0x80004001LL);
  JUMPOUT(0x18008D780LL);
}
