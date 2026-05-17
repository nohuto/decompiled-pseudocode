/*
 * XREFs of sub_180061F8C @ 0x180061F8C
 * Callers:
 *     sub_180061F40 @ 0x180061F40 (sub_180061F40.c)
 * Callees:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 *     sub_180062330 @ 0x180062330 (sub_180062330.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 */

__int64 __fastcall sub_180061F8C(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rdx
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = a3;
  v5 = *a2;
  if ( v5 )
  {
    if ( v5 == a1 )
    {
      *a2 = 0LL;
      v7 = 0;
      goto LABEL_6;
    }
    if ( (_WORD)v5 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    v9 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)(v5 - qword_18015D878) >> 20));
    if ( v9 )
    {
      v7 = v9 - 1;
LABEL_5:
      while ( v7 < 2 )
      {
LABEL_6:
        LOBYTE(a3) = v4;
        result = sub_18006206C(a1 + 120LL * v7 + 112, a2, a3);
        if ( (_DWORD)result != -2147483622 )
          return result;
        *a2 = 0LL;
        ++v7;
      }
    }
    return sub_180062330(a1, a2);
  }
  else
  {
    *((_DWORD *)a2 + 7) = 0;
    *((_WORD *)a2 + 9) = -32766;
    result = 0LL;
    *a2 = a1;
    a2[1] = 4096LL;
    *((_BYTE *)a2 + 17) = 0;
    *((_DWORD *)a2 + 6) = 4096;
    a2[4] = a1;
    a2[5] = a1;
  }
  return result;
}
