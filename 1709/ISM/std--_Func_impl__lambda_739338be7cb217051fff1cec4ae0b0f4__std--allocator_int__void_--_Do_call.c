/*
 * XREFs of std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x180055C44 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x1800596E0 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800611E4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  MPCCursorManager *v5; // rdi
  __int64 v6; // rax
  struct MPCGamepadInputHelper *Instance; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // r9
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v4 + 3384) = *(_DWORD *)(a1 + 8);
  v5 = *(MPCCursorManager **)(v4 + 3152);
  if ( v5 && *((_BYTE *)v5 + 64) )
  {
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)v5 + 56) = *(_DWORD *)(v6 + 3384) == 1;
    MPCCursorManager::UpdateMouseBinding(v5);
  }
  if ( *(_BYTE *)(v4 + 3128) )
  {
    Instance = MPCGamepadInputHelper::GetInstance(a1, a2, a3, a4);
    MPCHolographicInputManager::GetInstance();
    *((_BYTE *)Instance + 36) = *(_DWORD *)(v8 + 3384) == 1;
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v9 + 3128) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x479,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v10);
      JUMPOUT(0x180059D80LL);
    }
    *((_BYTE *)Instance + 37) = (*(_DWORD *)(v9 + 3400) & 2) != 0;
    MPCGamepadInputHelper::UpdateGamepadFocus(Instance);
  }
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v4);
  v14 = *(_DWORD *)(v4 + 3384) == 1;
  v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v11 )
  {
    if ( *v11 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v12, &v14);
    }
  }
}
