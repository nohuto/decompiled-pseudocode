/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x140584D84
 * Callers:
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
