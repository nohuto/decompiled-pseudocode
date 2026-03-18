/*
 * XREFs of RaspAntiAlias @ 0x140141150
 * Callers:
 *     BgpRasPrintGlyph @ 0x140140DFC (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1401412B0 (BgpGxBlendColor.c)
 *     BgpGxFillRectangle @ 0x1401413A0 (BgpGxFillRectangle.c)
 */

__int64 __fastcall RaspAntiAlias(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // rdi
  unsigned int v10; // r12d
  __int64 result; // rax
  unsigned int v12; // r14d
  _BYTE *v13; // r13
  int v14; // r10d
  unsigned int i; // ebx
  __int64 v16; // r11
  unsigned int v17; // eax
  unsigned __int64 v18; // r9
  char v19; // cl
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v24; // [rsp+70h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v8 = a3;
  v10 = 0;
  v24 = a4 * a3;
  result = BgpGxFillRectangle(a2, *a5);
  if ( *(_DWORD *)v6 )
  {
    result = *(_DWORD *)(a1 + 4) / a4;
    do
    {
      v12 = 0;
      v13 = (_BYTE *)(*(_QWORD *)(v6 + 24) + 4 * v10 * *(_DWORD *)(v6 + 4));
      if ( (_DWORD)result )
      {
        do
        {
          v14 = 0;
          for ( i = 0; i < a4; ++i )
          {
            if ( (_DWORD)v8 )
            {
              v16 = v8;
              v17 = v8 * v12 + *(_DWORD *)(a1 + 4) * (i + a4 * v10);
              do
              {
                v18 = v17;
                v19 = v17++;
                v20 = 128 >> (v19 & 7);
                v21 = v14 + 1;
                if ( ((unsigned __int8)v20 & *(_BYTE *)((v18 >> 3) + v5)) == 0 )
                  v21 = v14;
                v14 = v21;
                --v16;
              }
              while ( v16 );
            }
          }
          v22 = BgpGxBlendColor(*a5, a5[1], 255 * v14 / v24);
          *v13 = v22;
          v13[2] = BYTE2(v22);
          ++v12;
          v13[3] = -1;
          v13[1] = BYTE1(v22);
          v13 += 4;
          result = *(_DWORD *)(a1 + 4) / a4;
        }
        while ( v12 < (unsigned int)result );
        v6 = a2;
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)v6 );
  }
  return result;
}
