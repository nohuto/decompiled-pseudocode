/*
 * XREFs of ?MarkProxyReady@BamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x18001B600
 * Callers:
 *     ?Thunk_MarkProxyReady_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180020050 (-Thunk_MarkProxyReady_0@-$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::BamoPeerImpl::MarkProxyReady(
        Microsoft::BamoImpl::BamoPeerImpl *this,
        __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d
  _BYTE *v4; // rcx
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _BYTE *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = *((_DWORD *)this + 9);
  v4 = 0LL;
  v12 = 0LL;
  if ( (_DWORD)a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE **))(**(_QWORD **)(v2 + 40) + 56LL))(
           *(_QWORD *)(v2 + 40),
           v3,
           (unsigned int)a2,
           &v12);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v4 = v12;
  }
  v4[28] = 1;
  v6 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a2, v2);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6) + 16) + 24LL)
                 + 24LL);
  v8 = 0LL;
  v13 = 0LL;
  if ( !*(_DWORD *)(v7 + 140) )
  {
    v8 = v7;
    v13 = v7;
    if ( *(_DWORD *)(v7 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v9);
      __debugbreak();
    }
    *(_DWORD *)(v7 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v8 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
