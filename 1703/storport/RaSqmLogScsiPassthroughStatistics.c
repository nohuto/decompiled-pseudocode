/*
 * XREFs of RaSqmLogScsiPassthroughStatistics @ 0x1C0030FA0
 * Callers:
 *     RaSqmLogStatistics @ 0x1C0031070 (RaSqmLogStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorSqmAddToStream @ 0x1C0047EF4 (StorSqmAddToStream.c)
 */

void *RaSqmLogScsiPassthroughStatistics()
{
  _DWORD v1[32]; // [rsp+20h] [rbp-39h] BYREF

  memset(&v1[2], 0, 0x78uLL);
  v1[2] = g_RaidSqmPassthroughCdbs[0];
  v1[6] = dword_1C00556EC;
  v1[10] = dword_1C00556F0;
  v1[14] = dword_1C00556F4;
  v1[18] = dword_1C00556F8;
  v1[22] = dword_1C00556FC;
  v1[26] = dword_1C0055700;
  v1[30] = dword_1C0055704;
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
