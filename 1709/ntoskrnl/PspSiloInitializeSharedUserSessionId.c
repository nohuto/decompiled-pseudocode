/*
 * XREFs of PspSiloInitializeSharedUserSessionId @ 0x14059F62C
 * Callers:
 *     PspInitializeSiloStructures @ 0x140843AC8 (PspInitializeSiloStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSiloInitializeSharedUserSessionId(__int64 a1)
{
  *(_DWORD *)(a1 + 24) = -1;
  return 0LL;
}
