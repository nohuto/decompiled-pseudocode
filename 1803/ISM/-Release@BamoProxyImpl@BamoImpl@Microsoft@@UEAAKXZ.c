/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000D760
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rdi
  const char *v8; // r9
  signed __int32 v9; // edi
  bool v10; // sf
  wil::details::in1diag3 *v11; // rcx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h]

  v5 = *((_QWORD *)this + 2);
  if ( !v5 )
  {
    v6 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( (v6 & 0x80000000) == 0 )
    {
      if ( !v6 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 16LL))(this);
      return v6;
    }
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      a4);
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 24LL);
  v15 = 0LL;
  if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
  {
    v15 = v7;
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
    *(_DWORD *)(v7 + 136) = GetCurrentThreadId();
  }
  v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v10 = v9 - 1 < 0;
  v6 = v9 - 1;
  v11 = retaddr;
  if ( v10 )
  {
LABEL_15:
    wil::details::in1diag3::_FailFast_Unexpected(
      v11,
      (void *)0x33,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
      v8);
    goto LABEL_16;
  }
  if ( !v6 )
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 16LL))(this);
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 136) == GetCurrentThreadId() )
    {
      *(_DWORD *)(v15 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v15 + 96));
      return v6;
    }
LABEL_16:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v12);
    JUMPOUT(0x18000D883LL);
  }
  return v6;
}
