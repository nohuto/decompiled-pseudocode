/*
 * XREFs of ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x18008D000
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x18008E304 (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetScalarValue(BamoDataSourceStub *this, unsigned int a2, float a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // edi
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL);
  if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
  {
    v5 = v6;
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  v7 = BamoImpl::BamoDataSourceStubImpl::SetScalarValue((BamoDataSourceStub *)((char *)this + 8), a2, a3);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v8);
      JUMPOUT(0x18008D0BBLL);
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  return v7;
}
