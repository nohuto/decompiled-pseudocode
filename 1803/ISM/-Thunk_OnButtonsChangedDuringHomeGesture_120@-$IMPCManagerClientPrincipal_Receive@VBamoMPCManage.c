/*
 * XREFs of ?Thunk_OnButtonsChangedDuringHomeGesture_120@?$IMPCManagerClientPrincipal_Receive@VBamoMPCManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18002B070
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMPCManagerClientPrincipal_Receive<BamoImpl::BamoMPCManagerClientPrincipalImpl>::Thunk_OnButtonsChangedDuringHomeGesture_120(
        __int64 a1,
        unsigned int **a2)
{
  int v3; // r14d
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  _QWORD *i; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rbx
  const char *v10; // r9
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *a2[2];
  v4 = *a2[1];
  v5 = **a2;
  for ( i = *(_QWORD **)(a1 + 32);
        i && *(_DWORD *)(i[5] + 36LL) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
        i = (_QWORD *)i[6] )
  {
    ;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
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
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD *)(a1 - 16) + 128LL))(
          a1 - 16,
          v7,
          v5,
          v4,
          v3);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x2527,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ISMBamos.bamo.details.inl",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18002B1ADLL);
  }
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
    *(_DWORD *)(v9 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
