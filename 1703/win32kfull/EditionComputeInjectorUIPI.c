/*
 * XREFs of EditionComputeInjectorUIPI @ 0x1C0107F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionComputeInjectorUIPI(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2) + 824);
  *(_QWORD *)a1 = v4;
  v6 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4) + 12) >> 31;
  *(_DWORD *)(a1 + 8) = v6;
  return UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
}
