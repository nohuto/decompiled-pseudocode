/*
 * XREFs of ?Thunk_DisableGamepadExclusivity_104@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800541E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerPrincipal_Receive<BamoImpl::BamoMPCManagerPrincipalImpl>::Thunk_DisableGamepadExclusivity_104(
        __int64 a1)
{
  int v2; // ecx
  _QWORD *i; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rbx
  const char *v7; // r9
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v2; i = (_QWORD *)i[6] )
    ;
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v5 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v6 = 0LL;
  if ( !*(_DWORD *)(v5 + 140) )
  {
    v6 = v5;
    if ( *(_DWORD *)(v5 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v7);
      goto LABEL_13;
    }
    *(_DWORD *)(v5 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 96));
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 - 16) + 104LL))(a1 - 16, v4);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x231F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800542F2LL);
  }
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
