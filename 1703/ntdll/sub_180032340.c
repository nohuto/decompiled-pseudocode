/*
 * XREFs of sub_180032340 @ 0x180032340
 * Callers:
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     sub_18008DF80 @ 0x18008DF80 (sub_18008DF80.c)
 * Callees:
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 */

unsigned int *__fastcall sub_180032340(char *BaseAddress, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int *v7; // r10
  char *v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax

  v4 = *(_QWORD *)(a2 + 8);
  if ( (unsigned __int64)BaseAddress < v4 || (unsigned __int64)BaseAddress >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18016B4C0 + 1)
      || (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_18016B4C0 + 1)
                                        + (unsigned __int64)(unsigned int)qword_18016B4D0 )
    {
      v5 = sub_180034A40(BaseAddress);
    }
    else
    {
      *(_OWORD *)a2 = xmmword_18016B4C0;
      *(_QWORD *)(a2 + 16) = qword_18016B4D0;
      v5 = *(_QWORD *)a2;
    }
  }
  else
  {
    v5 = *(_QWORD *)a2;
  }
  if ( v5 )
  {
    v6 = *(_DWORD *)(a2 + 20) / 0xCu;
    v7 = 0LL;
    if ( v6 )
    {
      v8 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( (unsigned __int64)v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( (unsigned __int64)v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( (unsigned __int64)v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( (unsigned __int64)v8 >= *v9 && (unsigned __int64)v8 < v9[1] )
        v7 = v9;
    }
    if ( v7 )
    {
      if ( (v7[2] & 1) != 0 )
        return (unsigned int *)(*(_QWORD *)(a2 + 8) - 1LL + v7[2]);
    }
    return v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
