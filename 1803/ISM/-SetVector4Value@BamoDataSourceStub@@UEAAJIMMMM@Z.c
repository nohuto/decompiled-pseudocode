/*
 * XREFs of ?SetVector4Value@BamoDataSourceStub@@UEAAJIMMMM@Z @ 0x18008D270
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z @ 0x18008E5CC (-SetVector4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIMMMM@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetVector4Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // edi
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL);
  if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
  {
    v8 = v9;
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  v10 = BamoImpl::BamoDataSourceStubImpl::SetVector4Value((BamoDataSourceStub *)((char *)this + 8), a2, a3, a4, a5, a6);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v11);
      JUMPOUT(0x18008D358LL);
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  return v10;
}
