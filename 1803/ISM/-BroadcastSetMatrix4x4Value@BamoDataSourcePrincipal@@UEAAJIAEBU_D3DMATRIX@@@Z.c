/*
 * XREFs of ?BroadcastSetMatrix4x4Value@BamoDataSourcePrincipal@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x18008EA04 (-SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetMatrix4x4Value(
        BamoDataSourcePrincipal *this,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // edi
  __int64 i; // rdi
  unsigned int v10; // eax
  const char *v11; // r9
  unsigned int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
  {
    v6 = v7;
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 40LL) )
  {
    for ( i = *((_QWORD *)this + 5); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_BYTE *)(i + 32) )
      {
        v10 = BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value((BamoImpl::BamoDataSourceStubImpl *)i, a2, a3);
        if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2018375675 )
        {
          v13 = wil::verify_hresult<long>(v10);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x79E,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
            (const char *)v13);
          JUMPOUT(0x18008CCD5LL);
        }
      }
    }
    v8 = 0;
  }
  else
  {
    v8 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x600,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B20814LL);
  }
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v11);
      __debugbreak();
    }
    *(_DWORD *)(v6 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
  }
  return v8;
}
