/*
 * XREFs of RaSqmLogScsiPassthroughStatistics @ 0x1C0031698
 * Callers:
 *     RaSqmLogStatistics @ 0x1C0031768 (RaSqmLogStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     StorSqmAddToStream @ 0x1C00488FC (StorSqmAddToStream.c)
 */

void *RaSqmLogScsiPassthroughStatistics()
{
  _DWORD v1[32]; // [rsp+20h] [rbp-39h] BYREF

  memset(&v1[2], 0, 0x78uLL);
  v1[2] = g_RaidSqmPassthroughCdbs[0];
  v1[6] = dword_1C00566FC;
  v1[10] = dword_1C0056700;
  v1[14] = dword_1C0056704;
  v1[18] = dword_1C0056708;
  v1[22] = dword_1C005670C;
  v1[26] = dword_1C0056710;
  v1[30] = dword_1C0056714;
  v1[0] = 1;
  v1[4] = 1;
  v1[8] = 1;
  v1[12] = 1;
  v1[16] = 1;
  v1[20] = 1;
  v1[24] = 1;
  v1[28] = 1;
  StorSqmAddToStream(1LL, 5464LL, 8LL, v1);
  return memset(g_RaidSqmPassthroughCdbs, 0, 0x20uLL);
}
