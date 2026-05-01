/*
 * XREFs of ?seekpos@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x180115E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::basic_stringbuf<unsigned short>::seekpos(__int64 a1, __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 *v5; // r9
  __int64 v7; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v5 = *(unsigned __int64 **)(a1 + 64);
  v7 = *a3 + a3[1];
  v9 = *v5;
  if ( *v5 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  if ( v7 != std::_BADOFF )
  {
    if ( (a4 & 1) != 0 && (v10 = **(_QWORD **)(a1 + 56)) != 0 )
    {
      if ( v7 >= 0 )
      {
        v11 = **(_QWORD **)(a1 + 24);
        if ( v7 <= (*(_QWORD *)(a1 + 104) - v11) >> 1 )
        {
          std::basic_streambuf<unsigned short>::gbump(a1, (unsigned int)v7 + (unsigned int)((v11 - v10) >> 1));
          if ( (a4 & 2) != 0 )
          {
            v12 = *(_QWORD **)(a1 + 64);
            if ( *v12 )
            {
              v13 = *v12 + 2LL * **(int **)(a1 + 88);
              v14 = **(_QWORD **)(a1 + 56);
              *v12 = v14;
              **(_DWORD **)(a1 + 88) = (v13 - v14) >> 1;
            }
          }
          goto LABEL_18;
        }
      }
    }
    else if ( (a4 & 2) != 0 )
    {
      if ( *v5 )
      {
        if ( v7 >= 0 )
        {
          v15 = **(_QWORD **)(a1 + 24);
          if ( v7 <= (*(_QWORD *)(a1 + 104) - v15) >> 1 )
          {
            std::basic_streambuf<unsigned short>::pbump(
              a1,
              (unsigned int)v7 + (unsigned int)((__int64)(v15 - *v5) >> 1));
            goto LABEL_18;
          }
        }
      }
    }
    v7 = std::_BADOFF;
  }
LABEL_18:
  a2[1] = 0LL;
  *a2 = v7;
  a2[2] = 0LL;
  return a2;
}
