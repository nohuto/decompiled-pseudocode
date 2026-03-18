/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C0111F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionComputeInjectorUIPI(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  *(_QWORD *)a1 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 832);
  v4 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 12) >> 31;
  *(_DWORD *)(a1 + 8) = v4;
  return UserSessionSwitchLeaveCrit(v5, v4);
}
