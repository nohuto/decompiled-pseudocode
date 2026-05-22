/*
 * XREFs of ?SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z @ 0x18008CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008E1AC (-UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 */

void __fastcall BamoDataSourcePrincipal::SetRestrictToProcessId(BamoDataSourcePrincipal *this, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
  {
    v4 = v5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  v6 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 12) = a2;
  while ( v6 )
  {
    if ( *(_BYTE *)(v6 + 32) )
      BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCache(
        (BamoDataSourcePrincipal *)((char *)this + 8),
        (struct Microsoft::BamoImpl::BamoStubImpl *)v6);
    v6 = *(_QWORD *)(v6 + 48);
  }
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      JUMPOUT(0x18008CE3CLL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
}
