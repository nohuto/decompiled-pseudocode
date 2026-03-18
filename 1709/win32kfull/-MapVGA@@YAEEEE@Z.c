/*
 * XREFs of ?MapVGA@@YAEEEE@Z @ 0x1C0277514
 * Callers:
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C02774A4 (-MakeITableVGA@@YAHPEAE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MapVGA(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  int v6; // r9d
  char v7; // r10
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // edx
  int v13; // edx

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (unsigned __int16)word_1C02F00B0[(2 * (a1 & 0x18u)) | ((a2 & 0x18 | ((unsigned __int64)a3 >> 2) & 6) >> 1)];
  if ( (v6 & 0xFFF0) == 0 )
    return v6 & 0xF;
  v7 = 0;
  v8 = 0x7FFFFFFF;
  while ( v6 )
  {
    v9 = v6 & 0xF;
    v10 = v9;
    v11 = (unsigned __int8)byte_1C0325C00[4 * v9];
    LODWORD(v9) = (unsigned __int8)byte_1C0325C01[4 * v9] - v5;
    v12 = (unsigned __int8)byte_1C0325C02[4 * v10] - v4;
    v13 = (v11 - v3) * (v11 - v3) + v9 * v9 + v12 * v12;
    if ( v13 < v8 )
      v7 = v10;
    v6 >>= 4;
    if ( v13 >= v8 )
      v13 = v8;
    v8 = v13;
  }
  return v7;
}
