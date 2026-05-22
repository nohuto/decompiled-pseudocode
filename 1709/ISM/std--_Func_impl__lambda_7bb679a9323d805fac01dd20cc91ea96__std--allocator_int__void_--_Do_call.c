/*
 * XREFs of std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call @ 0x180059B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180055834 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x180055CDC (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800611E4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl__lambda_7bb679a9323d805fac01dd20cc91ea96__std::allocator_int__void_::_Do_call(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edi
  struct MPCGamepadInputHelper *Instance; // rdi
  __int64 v8; // rax
  const char *v9; // r9
  _DWORD *v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v13; // [rsp+30h] [rbp+8h] BYREF
  bool v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(v4 + 3400);
  *(_DWORD *)(v4 + 3400) = v5;
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v5) & 1) != 0 )
  {
    a1 = *(_QWORD *)(v4 + 3152);
    if ( a1 )
    {
      if ( *(_BYTE *)(a1 + 64) )
        MPCCursorManager::UpdateMouseBinding((MPCCursorManager *)a1);
    }
  }
  if ( ((*(_BYTE *)(v4 + 3400) ^ (unsigned __int8)v6) & 2) != 0 && *(_BYTE *)(v4 + 3128) )
  {
    Instance = MPCGamepadInputHelper::GetInstance(a1, a2, a3, a4);
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v8 + 3128) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x479,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v9);
      JUMPOUT(0x180059C64LL);
    }
    *((_BYTE *)Instance + 37) = (*(_DWORD *)(v8 + 3400) & 2) != 0;
  }
  v13 = (*(_DWORD *)(v4 + 3400) & 2) != 0;
  v14 = *(_BYTE *)(v4 + 3400) & 1;
  v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v10 )
  {
    if ( *v10 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v11, &v14, &v13);
    }
  }
}
