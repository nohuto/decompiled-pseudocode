/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  __int64 v2; // rbx
  const char *v3; // r9
  signed __int32 v4; // edi
  bool v5; // sf
  unsigned __int32 v6; // edi
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL);
  v10 = 0LL;
  if ( *(_DWORD *)(v2 + 136) != GetCurrentThreadId() )
  {
    v10 = v2;
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 96));
    *(_DWORD *)(v2 + 136) = GetCurrentThreadId();
  }
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v5 = v4 - 1 < 0;
  v6 = v4 - 1;
  if ( v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v3);
    goto LABEL_11;
  }
  if ( !v6 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 16LL))(this);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 136) == GetCurrentThreadId() )
    {
      *(_DWORD *)(v10 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
      return v6;
    }
LABEL_11:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v7);
    JUMPOUT(0x18000B1A0LL);
  }
  return v6;
}
