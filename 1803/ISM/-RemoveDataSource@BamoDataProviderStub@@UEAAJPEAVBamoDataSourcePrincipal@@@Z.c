/*
 * XREFs of ?RemoveDataSource@BamoDataProviderStub@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18008DBE4 (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataProviderStub::RemoveDataSource(
        BamoDataProviderStub *this,
        struct BamoDataSourcePrincipal *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL);
  v5 = 0LL;
  if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
  {
    v5 = v4;
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  v6 = BamoImpl::BamoDataProviderStubImpl::RemoveDataSource((BamoDataProviderStub *)((char *)this + 8), a2);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      JUMPOUT(0x18008BCA0LL);
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  return v6;
}
