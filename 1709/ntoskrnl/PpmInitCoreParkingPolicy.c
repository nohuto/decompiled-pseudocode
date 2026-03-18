/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140856B64
 * Callers:
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140362E68 = 100;
  byte_1403638E8 = 100;
  result = &unk_1403638EA;
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
  word_140362E5D = 0;
  word_1403638DD = 0;
  dword_140362E64 = 1;
  dword_1403638E4 = 1;
  dword_140362E60 = 1;
  dword_1403638E0 = 1;
  word_140362E59 = 24902;
  word_1403638D9 = 24902;
  byte_140362E5B = 20;
  byte_1403638DB = 20;
  return result;
}
