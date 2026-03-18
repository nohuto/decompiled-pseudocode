/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x1408C8C30
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_1403A6608 = 100;
  byte_1403A7088 = 100;
  result = &unk_1403A708A;
  do
  {
    *(result - 2688) = 100;
    *result = 100;
    *(result - 2708) = 0;
    *(result - 20) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_1403A65FD = 0;
  word_1403A707D = 0;
  dword_1403A6604 = 1;
  dword_1403A7084 = 1;
  dword_1403A6600 = 1;
  dword_1403A7080 = 1;
  word_1403A65F9 = 24902;
  word_1403A7079 = 24902;
  byte_1403A65FB = 20;
  byte_1403A707B = 20;
  return result;
}
