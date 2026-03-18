/*
 * XREFs of adjustTrans @ 0x1C02B7BD0
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B8724 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall adjustTrans(int *a1)
{
  __int64 v2; // r10
  int *v3; // r11
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx

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
      v8 = v6 - result;
      if ( *v3 >= 0 )
        v8 = v7;
      *v3++ = v8;
      --v4;
    }
    while ( v4 );
    a1 += 3;
    --v2;
  }
  while ( v2 );
  return result;
}
