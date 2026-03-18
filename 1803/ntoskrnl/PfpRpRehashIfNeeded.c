/*
 * XREFs of PfpRpRehashIfNeeded @ 0x14055A5E0
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1404A9210 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     PfpRpIsRehashNeeded @ 0x1400B6628 (PfpRpIsRehashNeeded.c)
 */

__int64 __fastcall PfpRpRehashIfNeeded(_DWORD *a1, void **a2)
{
  int IsRehashNeeded; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r8d
  char *v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // r11d
  __int64 v11; // rsi
  __int64 v12; // r12
  _QWORD *v13; // r15
  unsigned __int64 v14; // rcx
  void *v15; // rdx
  int v16; // ecx
  char i; // cl
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  IsRehashNeeded = PfpRpIsRehashNeeded(a1, (int *)&v18);
  v6 = 0;
  if ( IsRehashNeeded && v18 <= (unsigned int)v4 )
  {
    v8 = (char *)*a2;
    if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
    {
      for ( i = -1; (_DWORD)v4; LODWORD(v4) = (unsigned int)v4 >> 1 )
        ++i;
      v4 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v4 > 0x4000000 )
      v4 = 0x4000000LL;
    v9 = (unsigned int)v4;
    if ( v8 > &v8[8 * v4] )
      v9 = 0LL;
    if ( v9 )
      memset64(v8, v5 | 1, v9);
    v10 = 0;
    v11 = -1LL << (*(_BYTE *)(v5 + 4) & 0x1F);
    if ( (*(_DWORD *)(v5 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v12 = *(_QWORD *)(v5 + 8);
        while ( 1 )
        {
          v13 = *(_QWORD **)(v12 + 8LL * v10);
          if ( ((unsigned __int8)v13 & 1) != 0 )
            break;
          *(_QWORD *)(v12 + 8LL * v10) = *v13;
          v14 = ((((unsigned __int64)v11 & v13[1]) >> 56)
               + 37
               * ((unsigned __int8)(((unsigned __int64)v11 & v13[1]) >> 48)
                + 37
                * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v11 & v13[1]) >> 32) >> 8)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v11 & v13[1]) >> 32)
                  + 37
                  * ((((unsigned int)v11 & (_DWORD)v13[1]) >> 24)
                   + 37
                   * ((unsigned __int8)(((unsigned int)v11 & (_DWORD)v13[1]) >> 16)
                    + 37
                    * ((unsigned __int8)((unsigned __int16)(v11 & v13[1]) >> 8)
                     + 37 * ((unsigned __int8)(v11 & v13[1]) + 11623883)))))))) & (unsigned int)(v4 - 1);
          *v13 = *(_QWORD *)&v8[8 * v14];
          *(_QWORD *)&v8[8 * v14] = v13;
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v5 + 4) >> 5 );
    }
    v15 = *(void **)(v5 + 8);
    v16 = (32 * v4) | *(_DWORD *)(v5 + 4) & 0x1F;
    *(_QWORD *)(v5 + 8) = v8;
    *(_DWORD *)(v5 + 4) = v16;
    *a2 = v15;
  }
  LOBYTE(v6) = *(_DWORD *)(v5 + 4) >= 0x20u;
  return v6;
}
