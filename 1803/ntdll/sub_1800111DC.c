/*
 * XREFs of sub_1800111DC @ 0x1800111DC
 * Callers:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 *     sub_180105AB4 @ 0x180105AB4 (sub_180105AB4.c)
 * Callees:
 *     sub_18001130C @ 0x18001130C (sub_18001130C.c)
 *     sub_18006B2D8 @ 0x18006B2D8 (sub_18006B2D8.c)
 */

unsigned __int64 __fastcall sub_1800111DC(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v6; // r11
  unsigned int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  char v12; // cl
  unsigned __int64 v13; // r8
  int v14; // edx
  unsigned __int64 result; // rax
  int v16; // eax
  signed __int32 v17[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v6 )
  {
    if ( a5 )
    {
      v16 = *(_WORD *)(a2 + 8) & 1;
      if ( v16 )
        _InterlockedOr(v17, 0);
      *a5 = v16;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
    {
      v7 = qword_18015A448 ^ *(_DWORD *)(v6 + 40) ^ ((unsigned int)v6 >> 12);
      v8 = (unsigned __int16)v7;
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 80)
                     + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                     + 224);
      v10 = a3 - HIWORD(v7) - v6;
      v11 = *(_DWORD *)(v9 + 72);
      v12 = *(_BYTE *)(v9 + 76);
      if ( v11 )
      {
        v13 = (v10 * (unsigned __int64)v11) >> v12;
        v14 = v10 - v13 * v8;
      }
      else
      {
        v13 = v10 >> v12;
        v14 = ((1 << v12) - 1) & v10;
      }
      if ( v14
        || ((*(_QWORD *)(v6 + 8 * ((unsigned __int64)(unsigned int)(2 * v13) >> 6) + 48) >> ((2 * v13) & 0x3F)) & 1) == 0 )
      {
        LODWORD(result) = -1;
      }
      else
      {
        LODWORD(result) = sub_18001130C(v6, a3, v13, a5);
      }
    }
    else
    {
      LODWORD(result) = sub_18006B2D8(*(_QWORD *)(a1 + 88), a3, a3, a5);
    }
    return (unsigned int)result;
  }
}
