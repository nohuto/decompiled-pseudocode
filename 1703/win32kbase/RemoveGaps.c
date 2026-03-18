/*
 * XREFs of RemoveGaps @ 0x1C013E610
 * Callers:
 *     AlignRects @ 0x1C008B9BC (AlignRects.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     AddNextContiguousRectangle @ 0x1C013E33C (AddNextContiguousRectangle.c)
 *     CenterRectangles @ 0x1C013E568 (CenterRectangles.c)
 */

void __fastcall RemoveGaps(int *a1, unsigned int a2)
{
  int **v4; // rdi
  int **v5; // r9
  int *v6; // rbx
  unsigned int v7; // r11d
  int *v8; // r10
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int *v12; // rcx
  char *v13; // rsi
  int **v14; // rdi
  unsigned __int64 v15; // rbx
  int **v16; // rax
  int *v17; // rdx
  int *v18; // [rsp+20h] [rbp-A8h] BYREF
  char v19; // [rsp+28h] [rbp-A0h] BYREF

  CenterRectangles(a1, a2);
  v4 = &v18;
  v5 = &v18;
  v6 = &a1[4 * a2];
  v7 = -1;
  v8 = a1;
  if ( a1 < v6 )
  {
    do
    {
      v9 = *v8;
      v10 = v8[2] - *v8;
      *v4 = v8;
      v11 = abs32(v9 + v10 / 2) + abs32(v8[1] + (v8[3] - v8[1]) / 2);
      if ( v11 < v7 )
        v5 = v4;
      ++v4;
      v8 += 4;
      if ( v11 >= v7 )
        v11 = v7;
      v7 = v11;
    }
    while ( v8 < v6 );
    if ( v5 != &v18 )
    {
      v12 = *v5;
      *v5 = v18;
      v18 = v12;
    }
  }
  v13 = (char *)(a1 + 4);
  v14 = (int **)&v19;
  if ( v13 < (char *)v6 )
  {
    v15 = ((unsigned __int64)((char *)v6 - v13 - 1) >> 4) + 1;
    do
    {
      v16 = AddNextContiguousRectangle(&v18, v14, a2);
      if ( v16 != v14 )
      {
        v17 = *v16;
        *v16 = *v14;
        *v14 = v17;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
  }
}
