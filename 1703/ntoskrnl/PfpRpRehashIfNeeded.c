/*
 * XREFs of PfpRpRehashIfNeeded @ 0x14043F7C0
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x140502050 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     PfpRpIsRehashNeeded @ 0x1400233F0 (PfpRpIsRehashNeeded.c)
 */

__int64 __fastcall PfpRpRehashIfNeeded(_DWORD *a1, void **a2)
{
  int IsRehashNeeded; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // r8d
  char *v8; // r11
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  void *v15; // rdx
  int v16; // ecx
  char i; // cl
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  IsRehashNeeded = PfpRpIsRehashNeeded(a1, &v18);
  v6 = 0;
  if ( IsRehashNeeded && (unsigned int)v18 <= (unsigned int)v4 )
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
    v9 = (unsigned __int64)(8 * v4 + 7) >> 3;
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
          v18 = v11 & v13[1];
          v14 = (37
               * (BYTE6(v18)
                + 37
                * (BYTE5(v18)
                 + 37
                 * (BYTE4(v18)
                  + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
               + HIBYTE(v18)) & (unsigned int)(v4 - 1);
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
