/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x180050EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x18005174C (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180058084 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // esi
  MPCCursorManager *v4; // rdi
  __int64 v5; // rax
  struct MPCGamepadInputHelper *Instance; // rdi
  __int64 v7; // rax
  const char *v8; // r9
  _DWORD *v9; // rcx
  ISMTracing *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v12; // [rsp+30h] [rbp+8h] BYREF
  bool v13; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 2288);
  *(_DWORD *)(v1 + 2288) = v2;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v2) & 1) != 0 )
  {
    v4 = *(MPCCursorManager **)(v1 + 2032);
    if ( v4 )
    {
      if ( *((_BYTE *)v4 + 64) )
      {
        MPCHolographicInputManager::GetInstance();
        *((_BYTE *)v4 + 56) = *(_DWORD *)(v5 + 2272) == 1;
        MPCCursorManager::UpdateMouseBinding(v4);
        v2 = *(_DWORD *)(v1 + 2288);
      }
    }
  }
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v2) & 2) != 0 && *(_BYTE *)(v1 + 2008) )
  {
    Instance = MPCGamepadInputHelper::GetInstance();
    MPCHolographicInputManager::GetInstance();
    if ( !*(_BYTE *)(v7 + 2008) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x4A7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v8);
      JUMPOUT(0x180050FA6LL);
    }
    *((_BYTE *)Instance + 37) = (*(_DWORD *)(v7 + 2288) & 2) != 0;
    v2 = *(_DWORD *)(v1 + 2288);
  }
  v13 = v2 & 1;
  v12 = (v2 & 2) != 0;
  v9 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v9 )
  {
    if ( *v9 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v10, &v13, &v12);
    }
  }
}
