/*
 * XREFs of sub_140633DCC @ 0x140633DCC
 * Callers:
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     BCryptOpenAlgorithmProvider @ 0x140634040 (BCryptOpenAlgorithmProvider.c)
 */

NTSTATUS sub_140633DCC()
{
  memset(&qword_1403D0F10, 0, 0x40uLL);
  dword_1403D0F40 = 54;
  dword_1403D0F18 = 0;
  qword_1403D0F20 = 0LL;
  qword_1403D0F38 = 0LL;
  qword_1403D0F10 = 8LL;
  dword_1403D0F28 = 10;
  qword_1403D0F30 = (__int64)sub_14050F650;
  return BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
}
