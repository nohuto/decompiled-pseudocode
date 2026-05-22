/*
 * XREFs of ?Thunk_SetOnlyMixedWorldRouting_8@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180053E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerPrincipal_Receive<BamoImpl::BamoMPCManagerPrincipalImpl>::Thunk_SetOnlyMixedWorldRouting_8(
        __int64 a1,
        char **a2)
{
  char v3; // r14
  int v4; // ecx
  _QWORD *i; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  const char *v10; // r9
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = **a2;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v4; i = (_QWORD *)i[6] )
    ;
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v8 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v9 = 0LL;
  if ( !*(_DWORD *)(v8 + 140) )
  {
    v9 = v8;
    if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v10);
      goto LABEL_13;
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  LOBYTE(v7) = v3;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, v6, v7);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x22E7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180053F99LL);
  }
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
