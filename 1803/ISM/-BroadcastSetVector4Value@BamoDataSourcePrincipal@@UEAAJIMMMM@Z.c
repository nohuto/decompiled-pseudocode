/*
 * XREFs of ?BroadcastSetVector4Value@BamoDataSourcePrincipal@@UEAAJIMMMM@Z @ 0x18008C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM@ZIMMMM@Z @ 0x18008F5BC (--$EnumerateStubs@IMMMM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IMMMM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector4Value(
        BamoDataSourcePrincipal *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // r9d
  unsigned int v11; // edi
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v9 = 0LL;
  if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
  {
    v9 = v8;
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL) )
  {
    v11 = Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float,float,float,float>(
            (int)this + 8,
            (unsigned int)BamoImpl::BamoDataSourcePrincipalImpl::CallSetVector4ValueOnStub,
            a2,
            v10,
            LODWORD(a4),
            LODWORD(a5),
            LODWORD(a6));
  }
  else
  {
    v11 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5BA,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      JUMPOUT(0x18008C7D5LL);
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  return v11;
}
