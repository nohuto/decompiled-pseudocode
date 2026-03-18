/*
 * XREFs of EtwpInitializeSiloAllowedGroupMask @ 0x1406289E0
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     EtwpMapEnableFlags @ 0x1406290D4 (EtwpMapEnableFlags.c)
 */

__int64 EtwpInitializeSiloAllowedGroupMask()
{
  EtwpSiloAllowedGroupMask |= 0x600370Fu;
  dword_14044C59C |= 0x8206u;
  dword_14044C5A0 |= 0x10040u;
  dword_14044C5B0 |= 0x1FFFFFFFu;
  return EtwpMapEnableFlags(&EtwpSiloAllowedGroupMask, 0LL);
}
