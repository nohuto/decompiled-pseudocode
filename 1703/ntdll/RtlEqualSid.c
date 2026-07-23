/*
 * XREFs of RtlEqualSid @ 0x18004A290
 * Callers:
 *     sub_180047C5C @ 0x180047C5C (sub_180047C5C.c)
 *     sub_18004A1C4 @ 0x18004A1C4 (sub_18004A1C4.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180057AA0 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     RtlSidDominates @ 0x180081CB0 (RtlSidDominates.c)
 *     sub_18008C9A4 @ 0x18008C9A4 (sub_18008C9A4.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D42C0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     sub_1800E5B10 @ 0x1800E5B10 (sub_1800E5B10.c)
 *     sub_1800E7FA8 @ 0x1800E7FA8 (sub_1800E7FA8.c)
 * Callees:
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
