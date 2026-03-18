/*
 * XREFs of QueryRegistryFontIntensityCorrectionTableRoutine @ 0x1C02523F0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

__int64 __fastcall QueryRegistryFontIntensityCorrectionTableRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  float *v13; // r8
  __int64 v14; // rcx
  int v15; // eax

  v5 = 0;
  v7 = a4 / 0x14;
  if ( !(unsigned __int8)(a4 / 0x14) )
    return 3221225485LL;
  v9 = (unsigned __int8 *)PALLOCMEM2(80 * ((unsigned int)(unsigned __int8)v7 - 1) + 84, 1128875591LL, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225632LL;
  *v9 = v7;
  if ( (_BYTE)v7 )
  {
    do
    {
      v11 = 80LL * v5;
      v10[v11 + 4] = *a3;
      v12 = a3[1];
      a3 += 2;
      v13 = (float *)&v10[v11 + 12];
      *(float *)&v10[v11 + 8] = (float)v12 * 0.0625;
      v14 = 18LL;
      do
      {
        v15 = *a3++;
        *v13++ = (float)v15 / 100.0;
        --v14;
      }
      while ( v14 );
      ++v5;
    }
    while ( v5 < *v10 );
  }
  *a5 = v10;
  return 0LL;
}
