/*
 * XREFs of ?Thunk_OnRegisterError_5@?$IDataProviderRegistrarProxy_Receive@VBamoDataProviderRegistrarProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008FE50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDataProviderRegistrarProxy_Receive<BamoImpl::BamoDataProviderRegistrarProxyImpl>::Thunk_OnRegisterError_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rbx
  const char *v6; // r9
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = **a2;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
  v5 = 0LL;
  if ( !*(_DWORD *)(v4 + 140) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
    if ( *(_DWORD *)(v4 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v6);
      JUMPOUT(0x18008FF14LL);
    }
    *(_DWORD *)(v4 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 56LL))(a1 - 16, v3);
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
    *(_DWORD *)(v5 + 136) = GetCurrentThreadId();
  }
  return v7;
}
