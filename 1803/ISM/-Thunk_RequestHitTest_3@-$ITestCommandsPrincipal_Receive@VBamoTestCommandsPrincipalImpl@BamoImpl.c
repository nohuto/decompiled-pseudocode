/*
 * XREFs of ?Thunk_RequestHitTest_3@?$ITestCommandsPrincipal_Receive@VBamoTestCommandsPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180092B00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ITestCommandsPrincipal_Receive<BamoImpl::BamoTestCommandsPrincipalImpl>::Thunk_RequestHitTest_3(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // ecx
  _QWORD *i; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  const char *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = a2[2];
  v4 = *a2[1];
  v5 = **a2;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v6; i = (_QWORD *)i[6] )
    ;
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v9 = *(_QWORD *)(*(_QWORD *)(i[5] + 24LL) + 24LL);
  v10 = 0LL;
  if ( !*(_DWORD *)(v9 + 140) )
  {
    v10 = v9;
    if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v11);
      goto LABEL_13;
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)(a1 - 16) + 72LL))(
          a1 - 16,
          v8,
          v5,
          v4,
          v3);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      (void *)0x26EC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x180092C35LL);
  }
  if ( v10 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    *(_DWORD *)(v10 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
