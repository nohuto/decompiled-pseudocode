/*
 * XREFs of RtlEqualSid @ 0x1800442A0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438B0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlSidDominates @ 0x180043C60 (RtlSidDominates.c)
 *     sub_180043FA0 @ 0x180043FA0 (sub_180043FA0.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8960 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     sub_1800E03C0 @ 0x1800E03C0 (sub_1800E03C0.c)
 *     sub_1800E2CE8 @ 0x1800E2CE8 (sub_1800E2CE8.c)
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2
      && memcmp(Sid1, Sid2, 4 * (unsigned int)(unsigned __int8)HIBYTE(*(_WORD *)Sid1) + 8) == 0;
}
