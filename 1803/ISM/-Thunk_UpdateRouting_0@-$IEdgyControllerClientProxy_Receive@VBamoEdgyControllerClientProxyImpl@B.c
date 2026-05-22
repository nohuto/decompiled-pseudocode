/*
 * XREFs of ?Thunk_UpdateRouting_0@?$IEdgyControllerClientProxy_Receive@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180066DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IEdgyControllerClientProxy_Receive<BamoImpl::BamoEdgyControllerClientProxyImpl>::Thunk_UpdateRouting_0(
        __int64 a1,
        _DWORD **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  const char *v5; // r9
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_DWORD *)(a1 + 56) = **a2;
  if ( !*(_BYTE *)(a1 + 28) )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
  v4 = 0LL;
  if ( !*(_DWORD *)(v3 + 140) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
    if ( *(_DWORD *)(v3 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v5);
LABEL_10:
      wil::details::in1diag3::FailFast_Hr(
        v7,
        (void *)0x147D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    *(_DWORD *)(v3 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 96));
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_10;
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 96));
    *(_DWORD *)(v4 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
