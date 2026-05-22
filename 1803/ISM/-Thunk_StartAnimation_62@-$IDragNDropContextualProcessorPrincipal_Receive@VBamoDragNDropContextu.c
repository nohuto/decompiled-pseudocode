/*
 * XREFs of ?Thunk_StartAnimation_62@?$IDragNDropContextualProcessorPrincipal_Receive@VBamoDragNDropContextualProcessorPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180062EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDragNDropContextualProcessorPrincipal_Receive<BamoImpl::BamoDragNDropContextualProcessorPrincipalImpl>::Thunk_StartAnimation_62(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  _QWORD *i; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rbx
  const char *v12; // r9
  int v13; // eax
  __int64 v14; // r8
  wil::details::in1diag3 *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h]

  v3 = *a2[1];
  v4 = **a2;
  for ( i = *(_QWORD **)(a1 + 32);
        i && *(_DWORD *)(i[5] + 36LL) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
        i = (_QWORD *)i[6] )
  {
    ;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v7 = i[5];
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL);
  v9 = 0LL;
  v18 = 0LL;
  if ( v3 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v8 + 40) + 56LL))(
            *(_QWORD *)(v8 + 40),
            *(unsigned int *)(v7 + 36),
            v3,
            &v18);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v9 = v18;
  }
  v11 = 0LL;
  v19 = 0LL;
  if ( !*(_DWORD *)(v8 + 140) )
  {
    v11 = v8;
    v19 = v8;
    if ( *(_DWORD *)(v8 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v12);
      goto LABEL_19;
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(a1 - 16) + 88LL))(
          a1 - 16,
          v6,
          v4,
          (v9 - 16) & -(__int64)(v9 != 0));
  v15 = retaddr;
  if ( v13 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v15,
      (void *)0xEDC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800630A0LL);
  }
  if ( v11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
    *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
  }
  if ( v9 )
  {
    LOBYTE(v14) = *(_DWORD *)(v9 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v9 + 16) + 56LL))(
      *(_QWORD *)(v9 + 16),
      *(unsigned int *)(v9 + 24),
      v14);
  }
  return 0LL;
}
