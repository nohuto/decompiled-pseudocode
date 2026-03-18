/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140825648
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140349288 = 100;
  byte_140349800 = 100;
  result = &unk_140349802;
  do
  {
    *(result - 1400) = 100;
    *result = 100;
    *(result - 1420) = 0;
    *(result - 20) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_14034927D = 0;
  word_1403497F5 = 0;
  dword_140349284 = 1;
  dword_1403497FC = 1;
  dword_140349280 = 1;
  dword_1403497F8 = 1;
  word_140349279 = 24902;
  word_1403497F1 = 24902;
  byte_14034927B = 20;
  byte_1403497F3 = 20;
  return result;
}
