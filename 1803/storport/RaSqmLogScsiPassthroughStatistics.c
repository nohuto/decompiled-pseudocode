/*
 * XREFs of RaSqmLogScsiPassthroughStatistics @ 0x1C002D2B4
 * Callers:
 *     RaSqmLogStatistics @ 0x1C002D388 (RaSqmLogStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     StorSqmAddToStream @ 0x1C004949C (StorSqmAddToStream.c)
 */

void *RaSqmLogScsiPassthroughStatistics()
{
  _DWORD v1[32]; // [rsp+20h] [rbp-39h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[2] = g_RaidSqmPassthroughCdbs[0];
  v1[6] = dword_1C00566DC;
  v1[10] = dword_1C00566E0;
  v1[14] = dword_1C00566E4;
  v1[18] = dword_1C00566E8;
  v1[22] = dword_1C00566EC;
  v1[26] = dword_1C00566F0;
  v1[30] = dword_1C00566F4;
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
