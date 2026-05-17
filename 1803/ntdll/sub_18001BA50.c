/*
 * XREFs of sub_18001BA50 @ 0x18001BA50
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 * Callees:
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_18006B2D8 @ 0x18006B2D8 (sub_18006B2D8.c)
 *     RtlCompareMemory @ 0x18009F080 (RtlCompareMemory.c)
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 */

__int64 __fastcall sub_18001BA50(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  int v6; // edx
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rsi
  char v12; // cl
  unsigned __int64 v13; // r10
  __int64 v14; // r8
  int v15; // r9d
  unsigned int v16; // edx
  int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // eax
  char v21; // cl
  unsigned __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // r8
  unsigned __int16 v25; // r9
  unsigned int v26; // edx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  unsigned __int64 v29; // rsi
  __int64 v31; // rax
  signed __int32 v32[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = 0LL;
  v6 = a3 | *(_DWORD *)(a1 + 20);
  v7 = *(unsigned int *)(a1 + 64);
  v8 = 0;
  if ( (_DWORD)v7 )
    LOBYTE(v8) = (_DWORD)v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v9 = v6 | 1;
  if ( !v8 )
    v9 = v6;
  if ( a2 && (a2 & 0xF) == 0 )
  {
    if ( (_WORD)a2 )
    {
      v10 = 0;
    }
    else
    {
      v31 = sub_18006316C(&unk_18015D838, 2 * ((a2 - qword_18015D878) >> 20));
      if ( !v31 || (v10 = v31 - 1, v10 == 2) )
      {
        v29 = sub_180063438(a1, a2, v9, 0LL);
        goto LABEL_31;
      }
    }
    v11 = 120LL * v10 + a1 + 112;
    if ( (dword_180159760 & 1) != 0 )
    {
      v4 = sub_180105970(v11, a2);
    }
    else if ( (v11 ^ qword_18015A440 ^ *(_QWORD *)v11 & a2 ^ *(_QWORD *)((*(_QWORD *)v11 & a2) + 0x10)) == 0xA2E64EADA2E64EADuLL )
    {
      v4 = (*(_QWORD *)v11 & a2)
         + 32 * ((unsigned __int64)((unsigned int)a2 - (*(_DWORD *)v11 & (unsigned int)a2)) >> *(_BYTE *)(v11 + 8));
    }
    if ( v4 && (*(_BYTE *)(v4 + 24) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v4 + 24) & 2) != 0 )
      {
        if ( (*(_BYTE *)(v4 + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(v11 + 8)) - 1) & a2) != 0 )
          return -1LL;
      }
      else
      {
        v4 += -32LL * *(unsigned __int8 *)(v4 + 31);
        if ( (*(_BYTE *)(v4 + 24) & 1) == 0 || (*(_BYTE *)(v4 + 24) & 2) == 0 || (*(_BYTE *)(v4 + 24) & 0xCu) < 8 )
          return -1LL;
      }
      if ( v4 )
      {
        v12 = *(_BYTE *)(v11 + 8);
        v13 = (*(_QWORD *)v11 & v4) + ((__int64)(v4 - (*(_QWORD *)v11 & v4)) >> 5 << v12);
        if ( a2 <= v13 )
        {
          v29 = ((unsigned __int64)*(unsigned __int8 *)(v4 + 31) << v12) - *(unsigned int *)(v4 + 4);
        }
        else if ( (*(_BYTE *)(v4 + 24) & 0xC) == 8 )
        {
          v14 = *(_QWORD *)(v11 + 80);
          v15 = *(_DWORD *)((*(_QWORD *)v11 & v4) + ((__int64)(v4 - (*(_QWORD *)v11 & v4)) >> 5 << v12) + 0x28);
          v16 = qword_18015A448 ^ ((unsigned int)v13 >> 12) ^ *(_DWORD *)(v13 + 40);
          v17 = (unsigned __int16)v16;
          v18 = *(_QWORD *)(v14
                          + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v16 + 15) >> 4]
                          + 224);
          v19 = a2 - HIWORD(v16) - v13;
          v20 = *(_DWORD *)(v18 + 72);
          v21 = *(_BYTE *)(v18 + 76);
          if ( v20 )
          {
            v22 = (v19 * (unsigned __int64)v20) >> v21;
            v23 = v19 - v22 * v17;
          }
          else
          {
            LODWORD(v22) = v19 >> v21;
            v23 = ((1 << v21) - 1) & v19;
          }
          if ( v23 )
          {
            v26 = -1;
          }
          else
          {
            v24 = *(_QWORD *)(v13 + 8 * ((unsigned __int64)(unsigned int)(2 * v22) >> 6) + 48) >> ((2 * v22) & 0x3F);
            if ( (v24 & 1) != 0 )
            {
              v25 = ((unsigned int)v13 >> 12) ^ v15;
              v26 = (unsigned __int16)qword_18015A448 ^ v25;
              if ( (v24 & 2) != 0 )
              {
                v27 = (unsigned __int16)qword_18015A448 ^ (unsigned __int64)v25;
                v28 = *(_WORD *)(v27 + a2 - 2);
                if ( (v28 & 0x4000) != 0 )
                {
                  _InterlockedOr(v32, 0);
                  v28 = *(_WORD *)(v27 + a2 - 2);
                }
                if ( v28 < 0 )
                  --v26;
                else
                  v26 -= v28 & 0x3FFF;
              }
            }
            else
            {
              v26 = -1;
            }
          }
          v29 = v26;
        }
        else
        {
          v29 = (unsigned int)sub_18006B2D8(*(_QWORD *)(v11 + 88), a2, v7, 0LL);
        }
LABEL_31:
        if ( v29 == -1LL
          || (v9 & 0x10000000) == 0
          || RtlCompareMemory((const void *)(v29 + a2), &unk_180118EF8, 0x10uLL) == 16 )
        {
          return v29;
        }
      }
    }
    return -1LL;
  }
  return -1LL;
}
