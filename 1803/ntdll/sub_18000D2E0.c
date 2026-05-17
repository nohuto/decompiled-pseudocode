/*
 * XREFs of sub_18000D2E0 @ 0x18000D2E0
 * Callers:
 *     sub_18000B108 @ 0x18000B108 (sub_18000B108.c)
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 * Callees:
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 */

__int64 __fastcall sub_18000D2E0(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int *v7; // r10
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax

  v4 = *(_QWORD *)(a2 + 8);
  if ( a1 < v4 || a1 >= v4 + *(unsigned int *)(a2 + 16) )
  {
    if ( a1 < *((_QWORD *)&xmmword_18016F4E0 + 1)
      || a1 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
    {
      v5 = sub_18000EF10(a1, a2);
    }
    else
    {
      *(_OWORD *)a2 = xmmword_18016F4E0;
      *(_QWORD *)(a2 + 16) = qword_18016F4F0;
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
      v8 = a1 - *(_QWORD *)(a2 + 8);
      v9 = (unsigned int *)(v5 + 12LL * (v6 - 1));
      if ( v8 < *v9 )
      {
        v10 = 0;
        v11 = v6 - 2;
        while ( v11 >= v10 )
        {
          v12 = (v11 + v10) >> 1;
          v9 = (unsigned int *)(v5 + 12LL * v12);
          if ( v8 < *v9 )
          {
            v11 = v12 - 1;
          }
          else
          {
            if ( v8 < v9[3] )
              break;
            v10 = v12 + 1;
          }
        }
      }
      if ( v8 >= *v9 && v8 < v9[1] )
        v7 = v9;
    }
    if ( v7 )
    {
      if ( (v7[2] & 1) != 0 )
        return *(_QWORD *)(a2 + 8) - 1LL + v7[2];
    }
    return (__int64)v7;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
