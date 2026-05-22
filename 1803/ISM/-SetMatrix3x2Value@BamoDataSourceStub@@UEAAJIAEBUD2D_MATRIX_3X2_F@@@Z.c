/*
 * XREFs of ?SetMatrix3x2Value@BamoDataSourceStub@@UEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008D540
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008E910 (-SetMatrix3x2Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetMatrix3x2Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // edi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 24LL);
  if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
  {
    v6 = v7;
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  v8 = BamoImpl::BamoDataSourceStubImpl::SetMatrix3x2Value((BamoDataSourceStub *)((char *)this + 8), a2, a3);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    *(_DWORD *)(v6 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
  }
  return v8;
}
