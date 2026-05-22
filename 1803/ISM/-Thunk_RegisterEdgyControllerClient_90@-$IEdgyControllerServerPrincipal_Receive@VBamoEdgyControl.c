/*
 * XREFs of ?Thunk_RegisterEdgyControllerClient_90@?$IEdgyControllerServerPrincipal_Receive@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800674E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IEdgyControllerServerPrincipal_Receive<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::Thunk_RegisterEdgyControllerClient_90(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // r15
  int v5; // ecx
  _QWORD *i; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rbx
  const char *v13; // r9
  int v14; // eax
  __int64 v15; // r8
  wil::details::in1diag3 *v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h]

  v3 = *(_DWORD *)a2[1];
  v4 = *a2;
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v5; i = (_QWORD *)i[6] )
    ;
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v8 = i[5];
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL);
  v10 = 0LL;
  v19 = 0LL;
  if ( v3 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v9 + 40) + 56LL))(
            *(_QWORD *)(v9 + 40),
            *(unsigned int *)(v8 + 36),
            v3,
            &v19);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v10 = v19;
  }
  v12 = 0LL;
  v20 = 0LL;
  if ( !*(_DWORD *)(v9 + 140) )
  {
    v12 = v9;
    v20 = v9;
    if ( *(_DWORD *)(v9 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v13);
      goto LABEL_19;
    }
    *(_DWORD *)(v9 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v9 + 96));
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 72LL))(
          a1 - 16,
          v7,
          v4,
          (v10 - 16) & -(__int64)(v10 != 0));
  v16 = retaddr;
  if ( v14 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v16,
      (void *)0x14E4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x18006768BLL);
  }
  if ( v12 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v12 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  if ( v10 )
  {
    LOBYTE(v15) = *(_DWORD *)(v10 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v10 + 16) + 56LL))(
      *(_QWORD *)(v10 + 16),
      *(unsigned int *)(v10 + 24),
      v15);
  }
  return 0LL;
}
