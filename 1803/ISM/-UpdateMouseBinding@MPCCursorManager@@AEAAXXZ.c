/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x180050B54 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180050EB0 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180050FE0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800589A0 (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  const char *v4; // r9
  _BYTE *v5; // rsi
  char v6; // bl
  bool v7; // al
  bool v8; // zf
  char v9; // al
  const char *v10; // r9
  const char *v11; // r9
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  unsigned __int8 v14; // dl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v2 + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4A7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    __debugbreak();
  }
  v5 = (char *)this + 66;
  v6 = *((_BYTE *)this + 66);
  v7 = (*(_BYTE *)(v2 + 2288) & 1) == 0;
  v8 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v7;
  if ( v8 || !v7 )
  {
    v9 = v6;
    if ( v6 )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(v3) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x138,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v11);
        JUMPOUT(0x1800588D1LL);
      }
      *v5 = 0;
      v9 = 0;
    }
  }
  else
  {
    v9 = v6;
    if ( !v6 )
    {
      if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x132,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        __debugbreak();
      }
      *v5 = 1;
      v9 = 1;
    }
  }
  if ( v6 != v9 )
  {
    v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v12 )
    {
      if ( *v12 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
          v13,
          (const bool *)this + 66,
          (const bool *)this + 56,
          (const bool *)this + 65);
      }
    }
  }
  *((_DWORD *)this + 8) = 0;
  v14 = *v5 == 0;
  *(_OWORD *)this = 0uLL;
  *((_OWORD *)this + 1) = 0u;
  MPCCursorManager::UpdateCursorVisibility(this, v14, 1u, 1);
}
