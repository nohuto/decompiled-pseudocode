/*
 * XREFs of sub_1800F0F1C @ 0x1800F0F1C
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F0F1C(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int16 v6; // dx
  unsigned __int16 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int16 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int16 v16; // r10
  __int64 v17; // r8
  unsigned __int16 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rcx

  v6 = 0;
  if ( !qword_18015C468 )
    return 0LL;
  if ( a5 < 2 )
  {
    if ( a2 )
    {
      if ( a2 < *(_WORD *)(a1 + 224) )
      {
        v17 = *(_QWORD *)(a1 + 232);
        if ( v17 )
        {
          v11 = v17 + 72LL * a2;
          goto LABEL_39;
        }
      }
    }
    if ( (a2 & 0x800) != 0 )
    {
      v18 = a2 & 0xF7FF;
      if ( v18 < *(_WORD *)(qword_18015C468 + 224) )
      {
        v19 = *(_QWORD *)(qword_18015C468 + 232);
        if ( v19 )
        {
          v20 = v18;
          a2 = v18 | 0x800;
          v11 = v19 + 72 * v20;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 328);
      if ( v21 )
      {
        if ( a4 >= 0x80 )
        {
          if ( a5 == 1 )
            v6 = 128;
          v16 = v6;
        }
        else
        {
          v16 = a4;
        }
        v11 = v21 + 16LL * v16;
        goto LABEL_38;
      }
    }
  }
  else if ( a2 )
  {
    if ( (a2 & 0x8000u) == 0 )
    {
      if ( (a2 & 0x800) != 0 )
      {
        v12 = a2 & 0xF7FF;
        if ( v12 >= *(_WORD *)(qword_18015C468 + 224) )
          return 0LL;
        v13 = *(_QWORD *)(qword_18015C468 + 232);
        if ( !v13 )
          return 0LL;
        v14 = v12;
        a2 = v12 | 0x800;
        v11 = v13 + 72 * v14;
      }
      else
      {
        if ( a2 >= *(_WORD *)(a1 + 224) )
          return 0LL;
        v15 = *(_QWORD *)(a1 + 232);
        if ( !v15 )
          return 0LL;
        v11 = v15 + 72LL * a2;
      }
LABEL_15:
      ++*(_DWORD *)(v11 + 4);
      *(_QWORD *)(v11 + 8) -= a3;
      if ( a5 < 4 )
        return a2;
      if ( (a2 & 0x8000u) != 0 )
      {
        if ( a4 >= 0x80 )
        {
          if ( a5 == 5 )
            v6 = 128;
          v16 = v6;
        }
        else
        {
          v16 = a4;
        }
        v11 = *(_QWORD *)(a1 + 328) + 16LL * v16;
LABEL_38:
        a2 = v16 | 0x8000;
      }
LABEL_39:
      ++*(_DWORD *)v11;
      *(_QWORD *)(v11 + 8) += a4;
      return a2;
    }
    v9 = a2 & 0x7FFF;
    if ( v9 < 0x81u )
    {
      v10 = *(_QWORD *)(a1 + 328);
      if ( v10 )
      {
        v11 = v10 + 16LL * v9;
        a2 = v9 | 0x8000;
        goto LABEL_15;
      }
    }
  }
  return 0LL;
}
