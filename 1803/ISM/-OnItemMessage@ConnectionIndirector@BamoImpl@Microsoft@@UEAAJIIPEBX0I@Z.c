/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x18001B080
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // esi
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = *((_QWORD *)this + 1);
  v10 = 0LL;
  if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
  {
    v10 = v9;
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  v11 = *((_QWORD *)this + 1);
  *(_DWORD *)(v11 + 32) = a2;
  v12 = (*(__int64 (__fastcall **)(const void *, const void *, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, a5, a6);
  *(_DWORD *)(v11 + 32) = 0;
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v13);
      __debugbreak();
    }
    *(_DWORD *)(v10 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
  }
  return v12;
}
