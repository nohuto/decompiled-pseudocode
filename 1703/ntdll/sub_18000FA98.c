/*
 * XREFs of sub_18000FA98 @ 0x18000FA98
 * Callers:
 *     RtlSwitchedVVI @ 0x18000F670 (RtlSwitchedVVI.c)
 *     RtlVerifyVersionInfo @ 0x180086330 (RtlVerifyVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000FA98(unsigned __int64 a1, unsigned int a2)
{
  char v2; // al

  v2 = 0;
  do
  {
    ++v2;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * (v2 - 1))) & 7;
}
