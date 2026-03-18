/*
 * XREFs of LogFwInitialize @ 0x1407D44D8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *LogFwInitialize()
{
  dword_14035A1B0 |= 0x80u;
  qword_14038D888 = 0LL;
  qword_14038D8F8 = 0LL;
  qword_1403A3598 = 0LL;
  dword_14038D8E4 = 0;
  qword_14038D8B0 = 0LL;
  qword_14038D8D0 = 0LL;
  qword_14038D890 = 0LL;
  qword_14038D8C8 = 0LL;
  qword_14038D8A0 = 0LL;
  qword_14038D8B8 = 0LL;
  qword_14038D8A8 = 0LL;
  qword_14038D8F0 = 0LL;
  qword_14038D900 = 0LL;
  qword_14038D908 = 0LL;
  qword_14038D8D8 = 0LL;
  dword_14038D880 = 0;
  dword_14038D898 = 0;
  dword_14038D8C0 = 0;
  dword_14038D8EC = 0;
  dword_14038D8E8 = 0;
  dword_14038D884 = 0;
  qword_140358AA0 = 1LL;
  qword_1403583C8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_1403583D0 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(stru_14038D050, 0, 0x48uLL);
}
