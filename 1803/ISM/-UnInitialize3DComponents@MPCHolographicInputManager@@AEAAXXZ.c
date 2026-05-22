/*
 * XREFs of ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x18004D8F4
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800503A0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180058688 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::UnInitialize3DComponents(MPCHolographicInputManager *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rsi
  DWORD LastError; // ebx
  __int64 v7; // rsi
  DWORD v8; // ebx
  __int64 v9; // rbx
  const char *v10; // r9
  HMODULE v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 2008) )
    return;
  v2 = (__int64 *)*((_QWORD *)this + 246);
  v3 = (__int64 *)*((_QWORD *)this + 247);
  while ( v2 != v3 )
  {
    v4 = *v2;
    if ( *v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 296LL))(v4);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    ++v2;
  }
  v5 = *((_QWORD *)this + 282);
  if ( v5 )
  {
    LastError = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 282) = 0LL;
  v7 = *((_QWORD *)this + 283);
  if ( v7 )
  {
    v8 = GetLastError();
    RtlUnsubscribeWnfNotificationWaitForCompletion(v7);
    SetLastError(v8);
  }
  *((_QWORD *)this + 283) = 0LL;
  v9 = *((_QWORD *)this + 254);
  *((_QWORD *)this + 254) = 0LL;
  if ( v9 )
  {
    if ( *(_BYTE *)(v9 + 66) )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(this) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x39,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
LABEL_24:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      *(_BYTE *)(v9 + 66) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v9, 1, 1, 1);
    }
    v11 = *(HMODULE *)(v9 + 40);
    if ( v11 )
      FreeLibrary(v11);
    operator delete((void *)v9);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 253) + 112LL))(*((_QWORD *)this + 253));
  if ( v12 < 0 )
    goto LABEL_24;
  v13 = *((_QWORD *)this + 250);
  if ( v13 )
  {
    *((_QWORD *)this + 250) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  *((_BYTE *)this + 2008) = 0;
}
