/*
 * XREFs of ?MapVGA@@YAEEEE@Z @ 0x1C027AB20
 * Callers:
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C027AAB0 (-MakeITableVGA@@YAHPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MapVGA(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // r9d
  char v6; // r10
  int v7; // r11d
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx
  int v13; // edx

  v3 = a2;
  v4 = a3;
  v5 = (unsigned __int16)word_1C02F3500[(2LL * (a1 & 0x18)) | ((a2 & 0x18 | ((unsigned __int64)a3 >> 2) & 6) >> 1)];
  if ( (v5 & 0xFFF0) == 0 )
    return v5 & 0xF;
  v6 = 0;
  v7 = 0x7FFFFFFF;
  if ( word_1C02F3500[(2LL * (a1 & 0x18)) | ((a2 & 0x18 | ((unsigned __int64)a3 >> 2) & 6) >> 1)] )
  {
    v8 = a1;
    do
    {
      v9 = v5 & 0xF;
      v10 = v9;
      v11 = (unsigned __int8)byte_1C0329C00[4 * v9];
      LODWORD(v9) = (unsigned __int8)byte_1C0329C01[4 * v9] - v3;
      v12 = (unsigned __int8)byte_1C0329C02[4 * v10] - v4;
      v13 = (v11 - v8) * (v11 - v8) + v9 * v9 + v12 * v12;
      if ( v13 < v7 )
        v6 = v10;
      v5 >>= 4;
      if ( v13 >= v7 )
        v13 = v7;
      v7 = v13;
    }
    while ( v5 );
  }
  return v6;
}
