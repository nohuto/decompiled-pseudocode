/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x1405F2FE4
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     <none>
 */

void EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 7u;
  dword_1404015D4 |= 0x206u;
  dword_1404015D8 |= 0x10000u;
  dword_1404015E8 |= 0x1FFFFFFFu;
}
