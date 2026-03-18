/*
 * XREFs of adjustTrans @ 0x1C02BDDD8
 * Callers:
 *     scl_InitializeScaling @ 0x1C02BE930 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adjustTrans(int *a1)
{
  __int64 v2; // r11
  int *v3; // r9
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // edx
  int v7; // ecx

  v2 = 2LL;
  do
  {
    v3 = a1;
    v4 = 2LL;
    do
    {
      result = abs32(*v3);
      v6 = (1310 * WORD1(result)) & 0xFFFF0000;
      v7 = result - v6;
      if ( *v3 < 0 )
        v7 = v6 - result;
      *v3++ = v7;
      --v4;
    }
    while ( v4 );
    a1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
