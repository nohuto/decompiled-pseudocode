/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x18008C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x18008E304 (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetScalarValue(
        BamoDataSourcePrincipal *this,
        unsigned int a2,
        float a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // edi
  __int64 i; // rdi
  unsigned int v9; // eax
  const char *v10; // r9
  unsigned int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
  {
    v5 = v6;
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 5); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_BYTE *)(i + 32) )
      {
        v9 = BamoImpl::BamoDataSourceStubImpl::SetScalarValue((BamoImpl::BamoDataSourceStubImpl *)i, a2, a3);
        if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2018375675 )
        {
          v12 = wil::verify_hresult<long>(v9);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x6DC,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
            (const char *)v12);
          JUMPOUT(0x18008C3E1LL);
        }
      }
    }
    v7 = 0;
  }
  else
  {
    v7 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x584,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
  }
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      __debugbreak();
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  return v7;
}
