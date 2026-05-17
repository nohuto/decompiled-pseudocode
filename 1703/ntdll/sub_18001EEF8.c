/*
 * XREFs of sub_18001EEF8 @ 0x18001EEF8
 * Callers:
 *     sub_180007F08 @ 0x180007F08 (sub_180007F08.c)
 *     sub_18001F10C @ 0x18001F10C (sub_18001F10C.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EEF8(__int64 a1, int a2)
{
  __int64 result; // rax
  char *v3; // r8
  char v4; // cl
  bool v5; // zf
  unsigned int v6; // ecx

  result = 0LL;
  if ( a2 )
  {
    v3 = (char *)(a1 + 24);
    do
    {
      v4 = *v3;
      v3 += 32;
      v5 = (v4 & 2) == 0;
      v6 = result + 1;
      if ( v5 )
        v6 = result;
      result = v6;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
