/*
 * XREFs of ?Thunk_UpdateActivationConfigurationInputObject_0@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteElementProxy_Receive<BamoImpl::BamoInputSiteElementProxyImpl>::Thunk_UpdateActivationConfigurationInputObject_0(
        __int64 a1,
        unsigned int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  void (__fastcall ***v8)(_QWORD); // rcx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  const char *v12; // r9
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h]

  v3 = **a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  v6 = 0LL;
  v17 = 0LL;
  if ( (_DWORD)v3 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v5 + 40) + 56LL))(
           *(_QWORD *)(v5 + 40),
           *(unsigned int *)(v4 + 36),
           v3,
           &v17);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v6 = v17;
  }
  v8 = (void (__fastcall ***)(_QWORD))((v6 - 16) & -(__int64)(v6 != 0));
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v6 )
  {
    LOBYTE(v3) = *(_DWORD *)(v6 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 16) + 56LL))(
      *(_QWORD *)(v6 + 16),
      *(unsigned int *)(v6 + 24),
      v3);
  }
  if ( *(_BYTE *)(a1 + 28) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 24LL);
    v11 = 0LL;
    v18 = 0LL;
    if ( !*(_DWORD *)(v10 + 140) )
    {
      v11 = v10;
      v18 = v10;
      if ( *(_DWORD *)(v10 + 136) != GetCurrentThreadId() )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x574,
          (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
          v12);
        goto LABEL_20;
      }
      *(_DWORD *)(v10 + 136) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(v10 + 96));
    }
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 72LL))(a1 - 16);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v11 + 96));
        *(_DWORD *)(v11 + 136) = GetCurrentThreadId();
      }
      return 0LL;
    }
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x1D14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x18000EA7ELL);
  }
  return 0LL;
}
