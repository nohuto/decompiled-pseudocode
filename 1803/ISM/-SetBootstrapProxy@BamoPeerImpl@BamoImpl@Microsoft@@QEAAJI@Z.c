/*
 * XREFs of ?SetBootstrapProxy@BamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001B988
 * Callers:
 *     ?Thunk_SetBootstrapProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800200A0 (-Thunk_SetBootstrapProxy_0@-$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPeerImpl::SetBootstrapProxy(
        Microsoft::BamoImpl::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v2; // r14
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  const char *v9; // r9
  int v10; // edi
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v2 + 40) + 56LL))(
         *(_QWORD *)(v2 + 40),
         *((unsigned int *)this + 9),
         a2,
         &v14);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3B2,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = v14;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v6 = *(_QWORD *)(v2 + 16);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  v8 = 0LL;
  v15 = 0LL;
  if ( !*(_DWORD *)(v7 + 140) )
  {
    v8 = v7;
    v15 = v7;
    if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    *(_DWORD *)(v8 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v5);
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3BB,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18001BAEALL);
  }
  LOBYTE(v11) = *(_DWORD *)(v4 + 8) > 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v4 + 16) + 56LL))(
    *(_QWORD *)(v4 + 16),
    *(unsigned int *)(v4 + 24),
    v11);
  return 0LL;
}
