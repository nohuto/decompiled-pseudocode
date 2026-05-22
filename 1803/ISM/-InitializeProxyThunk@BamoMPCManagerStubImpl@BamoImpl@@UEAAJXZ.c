/*
 * XREFs of ?InitializeProxyThunk@BamoMPCManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18000B790
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerStubImpl::InitializeProxyThunk(BamoImpl::BamoMPCManagerStubImpl *this)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r9
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL);
  v4 = 0LL;
  if ( !*(_DWORD *)(v3 + 140) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL);
    if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
      JUMPOUT(0x18000B858LL);
    }
    *(_DWORD *)(v3 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
  }
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16, (char *)this - 16);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  return v6;
}
