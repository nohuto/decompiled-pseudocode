/*
 * XREFs of sub_180023990 @ 0x180023990
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 * Callees:
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180021E9C @ 0x180021E9C (sub_180021E9C.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

__int64 __fastcall sub_180023990(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // esi
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rcx
  char v15; // cl
  unsigned __int64 v16; // rbx
  int v17; // r9d
  __int64 v18; // r9
  unsigned __int16 v19; // r10
  unsigned int v20; // edx
  unsigned __int16 v21; // ax
  __int64 v22; // r14

  v4 = 0LL;
  v6 = a3 | *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
    LOBYTE(v8) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v9 = v6 | 1;
  if ( !v8 )
    v9 = v6;
  if ( a2 && (a2 & 0xF) == 0 )
  {
    if ( !(_WORD)a2 && (unsigned int)sub_1800588D4(&stru_180159600) )
    {
      v22 = sub_180008F9C((_RTL_SRWLOCK *)a1, a2, v9, 0LL);
      goto LABEL_28;
    }
    if ( (dword_180158684 & 1) != 0 )
    {
      v4 = sub_180100D30(a1, a2);
    }
    else
    {
      v10 = 0xA2E64EADA2E64EADuLL;
      if ( (a1 ^ qword_18015BFA8 ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
        v4 = (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    if ( v4 && (*(_BYTE *)(v4 + 24) & 4) != 0 )
    {
      if ( (*(_BYTE *)(v4 + 24) & 8) != 0 )
      {
        if ( (*(_BYTE *)(v4 + 24) & 0x21) == 0
          && a2 != (v4 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v4 >> 5) & 0x7FFF) << 12) )
        {
          return -1LL;
        }
      }
      else
      {
        v4 += -32LL * *(unsigned __int8 *)(v4 + 27);
        if ( (*(_BYTE *)(v4 + 24) & 4) == 0 || (*(_BYTE *)(v4 + 24) & 8) == 0 || (*(_BYTE *)(v4 + 24) & 0x21) == 0 )
          return -1LL;
      }
      if ( v4 )
      {
        v11 = (v4 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v4 - (v4 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
        if ( a2 <= v11 )
        {
          v22 = ((unsigned __int64)*(unsigned __int8 *)(v4 + 27) << 12) - *(unsigned __int16 *)(v4 + 6);
        }
        else if ( (*(_BYTE *)(v4 + 24) & 1) != 0 )
        {
          v12 = *(_DWORD *)(v11 + 40) ^ qword_18015BFE8 ^ ((unsigned int)v11 >> 12);
          v13 = a2 - HIWORD(v12) - v11;
          v14 = *(_QWORD *)(a1
                          + 8LL
                          * (unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)(*(_WORD *)(v11 + 40) ^ qword_18015BFE8 ^ ((unsigned int)v11 >> 12))
                                                           + 15) >> 4]
                          + 480);
          if ( *(_DWORD *)(v14 + 72) )
          {
            v16 = (v13 * (unsigned __int64)*(unsigned int *)(v14 + 72)) >> *(_BYTE *)(v14 + 76);
            v17 = v13 - v16 * (unsigned __int16)v12;
          }
          else
          {
            v15 = *(_BYTE *)(v14 + 76);
            LODWORD(v16) = v13 >> v15;
            v17 = ((1 << v15) - 1) & v13;
          }
          if ( v17 )
          {
            v20 = -1;
          }
          else
          {
            v18 = *(_QWORD *)(v11 + 8 * ((unsigned __int64)(unsigned int)(2 * v16) >> 6) + 48) >> ((2 * v16) & 0x3F);
            if ( (v18 & 1) != 0 )
            {
              v19 = *(_WORD *)(v11 + 40) ^ ((unsigned int)v11 >> 12);
              v20 = (unsigned __int16)qword_18015BFE8 ^ v19;
              if ( (v18 & 2) != 0 )
              {
                v21 = *(_WORD *)(((unsigned __int16)qword_18015BFE8 ^ (unsigned __int64)v19) + a2 - 2);
                if ( v21 >= 0x8000u )
                  --v20;
                else
                  v20 -= v21 & 0x3FFF;
              }
            }
            else
            {
              v20 = -1;
            }
          }
          v22 = v20;
        }
        else
        {
          v22 = (unsigned int)sub_180021E9C(a2, v10, 0LL);
        }
LABEL_28:
        if ( v22 == -1
          || (v9 & 0x10000000) == 0
          || RtlCompareMemory((const void *)(v22 + a2), &unk_1801152B0, 0x10uLL) == 16 )
        {
          return v22;
        }
      }
    }
    return -1LL;
  }
  return -1LL;
}
