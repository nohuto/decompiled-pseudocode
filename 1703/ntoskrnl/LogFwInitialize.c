/*
 * XREFs of LogFwInitialize @ 0x1407555A0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

void *LogFwInitialize()
{
  dword_140341A30 |= 0x80u;
  qword_14036F160 = 0LL;
  qword_14036F1D0 = 0LL;
  qword_14036F198 = 0LL;
  dword_14036F1B0 = 0;
  qword_14036F188 = 0LL;
  qword_14036F1C8 = 0LL;
  qword_14036F170 = 0LL;
  qword_14036F1A0 = 0LL;
  qword_14036F178 = 0LL;
  qword_14036F180 = 0LL;
  qword_14036F190 = 0LL;
  qword_14036F1D8 = 0LL;
  qword_14036F1F0 = 0LL;
  qword_14036F1E8 = 0LL;
  qword_14036F1B8 = 0LL;
  dword_14036F15C = 0;
  dword_14036F168 = 0;
  dword_14036F1A8 = 0;
  dword_14036F1E0 = 0;
  dword_14036F1AC = 0;
  dword_14036F16C = 0;
  PerformanceFrequency.QuadPart = 1LL;
  qword_14033FD38 = 0x7FFFFFFFFFFFFFFFLL;
  qword_14033FD48 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(&unk_14036EE00, 0, 0x48uLL);
}
