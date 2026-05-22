/*
 * XREFs of ?BroadcastSetVector3Value@BamoDataSourcePrincipal@@UEAAJIMMM@Z @ 0x18008C540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z @ 0x18008E4D0 (-SetVector3Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetVector3Value(
        BamoDataSourcePrincipal *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // edi
  __int64 i; // rdi
  unsigned int v11; // eax
  const char *v12; // r9
  unsigned int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
  {
    v7 = v8;
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 5); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_BYTE *)(i + 32) )
      {
        v11 = BamoImpl::BamoDataSourceStubImpl::SetVector3Value((BamoImpl::BamoDataSourceStubImpl *)i, a2, a3, a4, a5);
        if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -2018375675 )
        {
          v14 = wil::verify_hresult<long>(v11);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x713,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
            (const char *)v14);
          JUMPOUT(0x18008C69CLL);
        }
      }
    }
    v9 = 0;
  }
  else
  {
    v9 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A7,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      __debugbreak();
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  return v9;
}
