/*
 * XREFs of sub_1405CB2A4 @ 0x1405CB2A4
 * Callers:
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405CB520 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_1405CB2A4()
{
  memset(&qword_14038CC50, 0, 0x40uLL);
  dword_14038CC80 = 54;
  dword_14038CC58 = 0;
  qword_14038CC60 = 0LL;
  qword_14038CC78 = 0LL;
  qword_14038CC50 = 8LL;
  dword_14038CC68 = 10;
  qword_14038CC70 = (__int64)sub_140501FA0;
  return BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
}
