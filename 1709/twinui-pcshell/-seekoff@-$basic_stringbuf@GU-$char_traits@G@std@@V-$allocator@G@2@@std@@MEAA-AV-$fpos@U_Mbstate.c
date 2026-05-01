/*
 * XREFs of ?seekoff@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@_JHH@Z @ 0x180115FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::basic_stringbuf<unsigned short>::seekoff(__int64 a1, __int64 *a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 *v7; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx

  v7 = *(unsigned __int64 **)(a1 + 64);
  v9 = *v7;
  if ( *v7 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  if ( (a5 & 1) != 0 )
  {
    v10 = **(_QWORD **)(a1 + 56);
    if ( v10 )
    {
      v11 = (__int64 *)std::_BADOFF;
      switch ( a4 )
      {
        case 2:
          v12 = *(_QWORD **)(a1 + 24);
          v13 = *(_QWORD *)(a1 + 104);
LABEL_11:
          a3 += (v13 - *v12) >> 1;
LABEL_14:
          if ( a3 >= 0 )
          {
            v14 = **(_QWORD **)(a1 + 24);
            if ( a3 <= (*(_QWORD *)(a1 + 104) - v14) >> 1 )
            {
              std::basic_streambuf<unsigned short>::gbump(a1, (unsigned int)a3 + (unsigned int)((v14 - v10) >> 1));
              if ( (a5 & 2) != 0 )
              {
                v15 = *(_QWORD **)(a1 + 64);
                if ( *v15 )
                {
                  v16 = *v15 + 2LL * **(int **)(a1 + 88);
                  v17 = **(_QWORD **)(a1 + 56);
                  *v15 = v17;
                  **(_DWORD **)(a1 + 88) = (v16 - v17) >> 1;
                }
              }
              goto LABEL_34;
            }
          }
LABEL_31:
          a3 = *v11;
          goto LABEL_34;
        case 1:
          if ( (a5 & 2) == 0 )
          {
            v12 = *(_QWORD **)(a1 + 24);
            v13 = **(_QWORD **)(a1 + 56);
            goto LABEL_11;
          }
          break;
        case 0:
          goto LABEL_14;
      }
      a3 = std::_BADOFF;
      goto LABEL_14;
    }
  }
  if ( (a5 & 2) != 0 && *v7 )
  {
    v11 = (__int64 *)std::_BADOFF;
    if ( a4 == 2 )
    {
      v18 = *(_QWORD **)(a1 + 24);
      v19 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
          a3 = std::_BADOFF;
LABEL_28:
        if ( a3 >= 0 )
        {
          v20 = **(_QWORD **)(a1 + 24);
          if ( a3 <= (*(_QWORD *)(a1 + 104) - v20) >> 1 )
          {
            std::basic_streambuf<unsigned short>::pbump(
              a1,
              (unsigned int)a3 + (unsigned int)((__int64)(v20 - *v7) >> 1));
            goto LABEL_34;
          }
        }
        goto LABEL_31;
      }
      v18 = *(_QWORD **)(a1 + 24);
      v19 = *v7;
    }
    a3 += (__int64)(v19 - *v18) >> 1;
    goto LABEL_28;
  }
  if ( a3 )
    a3 = std::_BADOFF;
LABEL_34:
  a2[1] = 0LL;
  *a2 = a3;
  a2[2] = 0LL;
  return a2;
}
