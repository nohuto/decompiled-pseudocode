/*
 * XREFs of sub_18009AFFC @ 0x18009AFFC
 * Callers:
 *     strtol @ 0x18009B210 (strtol.c)
 *     sub_18009B238 @ 0x18009B238 (sub_18009B238.c)
 *     strtoul @ 0x18009B270 (strtoul.c)
 * Callees:
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C1BC @ 0x18009C1BC (sub_18009C1BC.c)
 */

__int64 __fastcall sub_18009AFFC(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 **a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned __int8 *v11; // rbx
  unsigned int v12; // edi
  int v13; // esi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int8 *v17; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    sub_180095DE0();
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 1;
  v12 = 0;
  while ( (*(_BYTE *)(sub_18009C1BC() + 2 * v10) & 8) != 0 )
    v10 = *v11++;
  v13 = a5;
  if ( (_BYTE)v10 == 45 )
  {
    v13 = a5 | 2;
  }
  else if ( (_BYTE)v10 != 43 )
  {
    goto LABEL_15;
  }
  LOBYTE(v10) = *v11++;
LABEL_15:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v10 == 48 )
      goto LABEL_27;
  }
  else if ( (_BYTE)v10 == 48 )
  {
    if ( ((*v11 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_27:
      if ( ((*v11 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v10) = v11[1];
        v11 += 2;
      }
      goto LABEL_29;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_29:
  v14 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (*(_BYTE *)(sub_18009C1BC() + 2LL * (unsigned __int8)v10) & 4) != 0 )
    {
      v15 = (char)v10 - 48;
    }
    else
    {
      if ( (*(_WORD *)(sub_18009C1BC() + 2LL * (unsigned __int8)v10) & 0x103) == 0 )
        break;
      v16 = (char)v10;
      if ( (unsigned __int8)(v10 - 97) <= 0x19u )
        v16 = (char)v10 - 32;
      v15 = v16 - 55;
    }
    if ( v15 >= v6 )
      break;
    v13 |= 8u;
    if ( a6 || v12 < v14 || v12 == v14 && v15 <= 0xFFFFFFFF % v6 )
    {
      v12 = v15 + v6 * v12;
    }
    else
    {
      v13 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v10) = *v11++;
  }
  v17 = v11 - 1;
  if ( (v13 & 8) == 0 )
  {
    if ( a3 )
      v17 = a2;
    v12 = 0;
    goto LABEL_58;
  }
  if ( (v13 & 4) != 0 )
    goto LABEL_54;
  if ( (v13 & 1) == 0 )
  {
    if ( (v13 & 2) != 0 )
    {
      if ( v12 <= 0x80000000 )
        goto LABEL_58;
LABEL_54:
      if ( !a6 )
      {
        *errno() = 34;
        if ( (v13 & 1) != 0 )
          v12 = -1;
        else
          v12 = ((v13 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_58;
    }
    if ( v12 > 0x7FFFFFFF )
      goto LABEL_54;
  }
LABEL_58:
  if ( a3 )
    *a3 = v17;
  result = -v12;
  if ( (v13 & 2) == 0 )
    return v12;
  return result;
}
