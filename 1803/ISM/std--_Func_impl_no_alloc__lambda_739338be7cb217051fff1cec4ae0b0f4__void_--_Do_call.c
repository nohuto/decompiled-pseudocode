/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180050FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800509F4 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x180051808 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  MPCCursorManager *v2; // rdi
  __int64 v3; // rax
  struct MPCGamepadInputHelper *Instance; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // r9
  _DWORD *v8; // rcx
  ISMTracing *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v1 + 2272) = *(_DWORD *)(a1 + 8);
  v2 = *(MPCCursorManager **)(v1 + 2032);
  if ( v2 && *((_BYTE *)v2 + 64) )
  {
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)v2 + 56) = *(_DWORD *)(v3 + 2272) == 1;
    MPCCursorManager::UpdateMouseBinding(v2);
  }
  if ( *(_BYTE *)(v1 + 2008) )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)Instance + 36) = *(_DWORD *)(v5 + 2272) == 1;
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v6 + 2008) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4A7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v7);
      JUMPOUT(0x1800510C0LL);
    }
    *((_BYTE *)Instance + 37) = (*(_DWORD *)(v6 + 2288) & 2) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
  }
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v11 = *(_DWORD *)(v1 + 2272) == 1;
  v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v8 )
  {
    if ( *v8 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v9, &v11);
    }
  }
}
