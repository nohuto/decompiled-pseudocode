/*
 * XREFs of sub_180020FD8 @ 0x180020FD8
 * Callers:
 *     sub_180007288 @ 0x180007288 (sub_180007288.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_180100DA8 @ 0x180100DA8 (sub_180100DA8.c)
 * Callees:
 *     sub_180021E9C @ 0x180021E9C (sub_180021E9C.c)
 */

unsigned __int64 __fastcall sub_180020FD8(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // r8
  unsigned int v14; // edx
  unsigned int v15; // r8d
  int v16; // r8d
  unsigned __int64 result; // rax
  char v18; // cl

  v6 = (a2 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a3 <= v6 )
  {
    result = ((unsigned __int64)*(unsigned __int8 *)(a2 + 27) << 12) - *(unsigned __int16 *)(a2 + 6);
    if ( a5 )
      *a5 = *(_WORD *)(a2 + 4) & 1;
  }
  else if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
  {
    v7 = (unsigned int)v6 >> 12;
    v8 = qword_18015BFE8 ^ *(_DWORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12);
    v9 = *(_QWORD *)(a1
                   + 8LL
                   * (unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12))
                                                    + 15) >> 4]
                   + 480);
    v10 = a3 - HIWORD(v8) - v6;
    if ( *(_DWORD *)(v9 + 72) )
    {
      v11 = (v10 * (unsigned __int64)*(unsigned int *)(v9 + 72)) >> *(_BYTE *)(v9 + 76);
      v12 = v10 - v11 * (unsigned __int16)v8;
    }
    else
    {
      v18 = *(_BYTE *)(v9 + 76);
      LODWORD(v11) = v10 >> v18;
      v12 = ((1 << v18) - 1) & v10;
    }
    if ( v12 )
      return (unsigned int)-1;
    v13 = *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL)
                    + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                    + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6)
                    + 0x30) >> ((2 * v11) & 0x3F);
    if ( (v13 & 1) == 0 )
    {
      return (unsigned int)-1;
    }
    else
    {
      v14 = (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(v7 ^ *(_WORD *)((a2 & 0xFFFFFFFFFFF00000uLL)
                                                                                 + ((unsigned int)((__int64)(a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                                 + 0x28));
      if ( (v13 & 2) != 0 )
      {
        v15 = *(unsigned __int16 *)(((unsigned __int16)qword_18015BFE8 ^ (unsigned __int64)(unsigned __int16)(v7 ^ *(_WORD *)(v6 + 40)))
                                  + a3
                                  - 2);
        if ( (unsigned __int16)v15 >= 0x8000u )
          --v14;
        else
          v14 -= v15 & 0x3FFF;
        v16 = (v15 >> 14) & 1;
      }
      else
      {
        v16 = 0;
      }
      if ( a5 )
        *a5 = v16;
    }
    return v14;
  }
  else
  {
    return (unsigned int)sub_180021E9C(a3, a2, a5);
  }
  return result;
}
