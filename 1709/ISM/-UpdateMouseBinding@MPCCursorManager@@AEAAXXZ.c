/*
 * XREFs of ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800611E4
 * Callers:
 *     std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x180059B90 (std--_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std--allocator_int__void_--_Do_call.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x180060C8C (-MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z.c)
 */

void __fastcall MPCCursorManager::UpdateMouseBinding(MPCCursorManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  const char *v4; // r9
  _BYTE *v5; // rbx
  char v6; // si
  bool v7; // al
  bool v8; // zf
  const char *v9; // r9
  const char *v10; // r9
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  unsigned __int8 v13; // dl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v2 + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x479,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v4);
    __debugbreak();
  }
  v5 = (char *)this + 66;
  v6 = *((_BYTE *)this + 66);
  v7 = (*(_BYTE *)(v2 + 3400) & 1) == 0;
  v8 = *((_BYTE *)this + 56) == 0;
  *((_BYTE *)this + 65) = v7;
  if ( v8 || !v7 )
  {
    if ( v6 )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(v3) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x13F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v10);
        JUMPOUT(0x18006132DLL);
      }
      *v5 = 0;
    }
  }
  else if ( !v6 )
  {
    if ( !(unsigned int)MITEnableMouseIntercept(1LL) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x139,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
        v9);
      __debugbreak();
    }
    *v5 = 1;
  }
  if ( v6 != *v5 )
  {
    v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v11 )
    {
      if ( *v11 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
          v12,
          (const bool *)this + 66,
          (const bool *)this + 56,
          (const bool *)this + 65);
      }
    }
  }
  *((_DWORD *)this + 8) = 0;
  v13 = *v5 == 0;
  *(_OWORD *)this = 0uLL;
  *((_OWORD *)this + 1) = 0u;
  MPCCursorManager::UpdateCursorVisibility(this, v13, 1u, 1);
}
