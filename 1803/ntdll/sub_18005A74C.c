/*
 * XREFs of sub_18005A74C @ 0x18005A74C
 * Callers:
 *     RtlSwitchedVVI @ 0x18005A320 (RtlSwitchedVVI.c)
 *     RtlVerifyVersionInfo @ 0x180081850 (RtlVerifyVersionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005A74C(unsigned __int64 a1, unsigned int a2)
{
  int v3; // ecx
  char v4; // r8

  v3 = 0;
  do
  {
    v4 = v3++;
    a2 >>= 1;
  }
  while ( a2 );
  return (a1 >> (3 * v4)) & 7;
}
