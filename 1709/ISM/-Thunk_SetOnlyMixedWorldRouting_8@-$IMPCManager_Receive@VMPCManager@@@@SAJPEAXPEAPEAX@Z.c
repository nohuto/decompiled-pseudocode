/*
 * XREFs of ?Thunk_SetOnlyMixedWorldRouting_8@?$IMPCManager_Receive@VMPCManager@@@@SAJPEAXPEAPEAX@Z @ 0x18005E680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall IMPCManager_Receive<MPCManager>::Thunk_SetOnlyMixedWorldRouting_8(__int64 a1, char **a2)
{
  char v2; // bl
  __int64 v3; // rax

  v2 = **a2;
  MPCHolographicInputManager::GetInstance();
  *(_BYTE *)(v3 + 3129) = v2;
  return 0LL;
}
