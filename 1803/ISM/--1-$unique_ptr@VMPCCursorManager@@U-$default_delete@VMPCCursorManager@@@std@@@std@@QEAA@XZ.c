/*
 * XREFs of ??1?$unique_ptr@VMPCCursorManager@@U?$default_delete@VMPCCursorManager@@@std@@@std@@QEAA@XZ @ 0x180050CE4
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$7 @ 0x1800E6262 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$7.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180058688 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<MPCCursorManager>::~unique_ptr<MPCCursorManager>(__int64 *a1)
{
  __int64 v1; // rbx
  const char *v2; // r9
  HMODULE v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_BYTE *)(v1 + 66) )
    {
      if ( !(unsigned int)MITDisableMouseIntercept(a1) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x39,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpccursormanager.cpp",
          v2);
        JUMPOUT(0x180050D6ALL);
      }
      *(_BYTE *)(v1 + 66) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v1, 1, 1, 1);
    }
    v3 = *(HMODULE *)(v1 + 40);
    if ( v3 )
      FreeLibrary(v3);
    operator delete((void *)v1);
  }
}
