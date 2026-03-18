/*
 * XREFs of LogFwInitialize @ 0x14083C7B0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *LogFwInitialize()
{
  dword_14039D7F0 |= 0x80u;
  qword_1403D1818 = 0LL;
  qword_1403D1878 = 0LL;
  qword_1403D1850 = 0LL;
  dword_1403D1868 = 0;
  qword_1403D1860 = 0LL;
  qword_1403D1880 = 0LL;
  qword_1403D1830 = 0LL;
  qword_1403D1848 = 0LL;
  qword_1403D1828 = 0LL;
  qword_1403D1840 = 0LL;
  qword_1403D1858 = 0LL;
  qword_1403D18A8 = 0LL;
  qword_1403D18B0 = 0LL;
  qword_1403D1898 = 0LL;
  qword_1403D1888 = 0LL;
  dword_1403D1820 = 0;
  dword_1403D183C = 0;
  dword_1403D1870 = 0;
  dword_1403D18A0 = 0;
  dword_1403D186C = 0;
  dword_1403D1838 = 0;
  qword_14039B980 = 1LL;
  qword_14039B978 = 0x7FFFFFFFFFFFFFFFLL;
  qword_14039B988 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_1403D1320, 0, sizeof(stru_1403D1320));
}
