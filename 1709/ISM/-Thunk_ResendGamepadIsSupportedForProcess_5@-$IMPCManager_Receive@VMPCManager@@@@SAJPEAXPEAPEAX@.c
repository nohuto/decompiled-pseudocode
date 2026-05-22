/*
 * XREFs of ?Thunk_ResendGamepadIsSupportedForProcess_5@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IMPCManager_Receive<MPCManager>::Thunk_ResendGamepadIsSupportedForProcess_5(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = **a2;
  MPCHolographicInputManager::GetInstance();
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 3064) + 24LL))(*(_QWORD *)(v3 + 3064), v2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return 0LL;
}
