/*
 * XREFs of cComputeGlyphSet @ 0x1C00DE93C
 * Callers:
 *     EngComputeGlyphSet @ 0x1C00DE690 (EngComputeGlyphSet.c)
 *     cUnicodeRangesSupported @ 0x1C00DE754 (cUnicodeRangesSupported.c)
 *     pcpComputeGlyphset @ 0x1C02B8298 (pcpComputeGlyphset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cComputeGlyphSet(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // r10
  _DWORD *v10; // r11
  _DWORD *v11; // rsi
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // r9d
  __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned __int16 v20; // dx
  _DWORD *v21; // rax
  unsigned __int64 v22; // rdi
  unsigned __int8 *v23; // rdx
  unsigned __int64 i; // rcx

  v5 = a5;
  v10 = 0LL;
  v11 = 0LL;
  if ( a5 )
  {
    a5[3] = a4;
    a5[2] = 0;
    v12 = a3 + 4 + 4 * a4;
    v13 = 2;
    *a5 = v12 * 4;
    v11 = &a5[v12];
    if ( a3 == 256 )
      v13 = 4;
    v10 = &a5[4 * a4 + 4];
    a5[1] = v13;
  }
  v14 = 0;
  v15 = 0;
  if ( a3 )
  {
    do
    {
      v16 = v14 + 1;
      if ( (unsigned int)v16 < a3 )
      {
        v17 = (unsigned __int16 *)(a1 + 2 * v16);
        do
        {
          if ( *v17 - *(unsigned __int16 *)(a1 + 2LL * (unsigned int)(v16 - 1)) > 1 )
            break;
          LODWORD(v16) = v16 + 1;
          ++v17;
        }
        while ( (unsigned int)v16 < a3 );
      }
      if ( v5 )
      {
        if ( v15 < a4 )
        {
          v18 = v14;
          v19 = 2LL * v15;
          LOWORD(v5[2 * v19 + 4]) = *(_WORD *)(a1 + 2LL * v14);
          v20 = *(_WORD *)(a1 + 2LL * (unsigned int)(v16 - 1)) - *(_WORD *)(a1 + 2LL * v14) + 1;
          *(_QWORD *)&v5[2 * v19 + 6] = v10;
          HIWORD(v5[2 * v19 + 4]) = v20;
          v21 = &v10[v20];
          if ( v21 <= v11 )
          {
            v22 = (4 * (unsigned __int64)v20 + 3) >> 2;
            v23 = (unsigned __int8 *)(v18 + a2);
            if ( v10 > v21 )
              v22 = 0LL;
            if ( v22 )
            {
              for ( i = 0LL; i < v22; ++i )
                *v10++ = *v23++;
              v5 = a5;
            }
            v5[2] += HIWORD(v5[4 * v15 + 4]);
          }
        }
      }
      ++v15;
      v14 = v16;
    }
    while ( (unsigned int)v16 < a3 );
  }
  return v15;
}
