/*
 * XREFs of cjComputeGLYPHSET_MSFT_GENERAL @ 0x1C022A8A4
 * Callers:
 *     bLoadGlyphSet @ 0x1C0228FB8 (bLoadGlyphSet.c)
 * Callees:
 *     CreateGlyphSetFromMITable @ 0x1C022711C (CreateGlyphSetFromMITable.c)
 */

__int64 __fastcall cjComputeGLYPHSET_MSFT_GENERAL(__int64 a1, unsigned int a2, ULONG **a3, __int64 a4)
{
  _WORD *v4; // rdi
  __int64 v6; // r11
  char *v7; // r15
  int v8; // edx
  unsigned __int16 v9; // r9
  char *v10; // r8
  char *v11; // r13
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  _DWORD *v14; // rdi
  int v15; // ecx
  signed __int64 v16; // r13
  unsigned __int16 v17; // r14
  unsigned __int16 v18; // bp
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // si
  unsigned __int16 v21; // r11
  __int16 v22; // ax
  int v23; // eax
  unsigned int GlyphSetFromMITable; // ebx
  char *v26; // [rsp+20h] [rbp-68h]
  char *v27; // [rsp+28h] [rbp-60h]
  signed __int64 v28; // [rsp+30h] [rbp-58h]
  int v29; // [rsp+90h] [rbp+8h]

  v4 = (_WORD *)(a1 + 14);
  v6 = __ROR2__(*(_WORD *)(a1 + 6), 8) >> 1;
  v7 = (char *)(a1 + 14);
  v8 = 0;
  v9 = 0;
  v10 = (char *)(a1 + 14 + 2LL * (unsigned int)(v6 + 1));
  v11 = v10;
  v29 = v6 - 1;
  v27 = &v10[2 * v6];
  v26 = &v10[2 * (unsigned int)(2 * v6)];
  if ( (int)v6 - 1 <= 0 )
    goto LABEL_24;
  do
  {
    v12 = __ROR2__(*(_WORD *)v10, 8);
    v13 = __ROR2__(*v4, 8);
    if ( v13 >= v12 && v12 != 0xFFFF )
      v8 += v13 - v12 + 1;
    ++v9;
    ++v4;
    v10 += 2;
  }
  while ( v9 < (int)v6 - 1 );
  if ( (unsigned int)(v8 - 1) <= 0xFFFE && (v14 = EngAllocMem(0, 8 * v8, 0x64667454u)) != 0LL )
  {
    v15 = v29;
    v16 = v11 - v7;
    v17 = 0;
    v28 = v16;
    v18 = 0;
    do
    {
      v19 = __ROR2__(*(_WORD *)&v7[v16], 8);
      v20 = __ROR2__(*(_WORD *)v7, 8);
      if ( v20 >= v19 && v19 != 0xFFFF )
      {
        v21 = v19;
        if ( v19 <= v20 )
        {
          do
          {
            v14[2 * v17] = 0;
            if ( v19 <= 0xFFu )
              LOWORD(v14[2 * v17]) = v21;
            else
              LOWORD(v14[2 * v17]) = __ROL2__(v21, 8);
            v22 = *(_WORD *)&v26[2 * v18];
            if ( v22 )
              v23 = (unsigned __int16)(__ROR2__(*(_WORD *)&v27[2 * v18], 8)
                                     + __ROR2__(
                                         *(_WORD *)&v26[2 * v18
                                                      + 2 * ((unsigned __int64)(unsigned __int16)__ROR2__(v22, 8) >> 1)
                                                      + 2 * (v21 - v19)],
                                         8));
            else
              v23 = (unsigned __int16)(v21 + __ROR2__(*(_WORD *)&v27[2 * v18], 8));
            v14[2 * v17 + 1] = v23;
            if ( v14[2 * v17 + 1] >= a2 )
              v14[2 * v17 + 1] = 0;
            ++v17;
            ++v21;
          }
          while ( v21 <= v20 );
          v16 = v28;
          v15 = v29;
        }
      }
      ++v18;
      v7 += 2;
    }
    while ( v18 < v15 );
    GlyphSetFromMITable = CreateGlyphSetFromMITable(a4, (__int64)v14, v17, a3);
    EngFreeMem(v14);
    return GlyphSetFromMITable;
  }
  else
  {
LABEL_24:
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
}
