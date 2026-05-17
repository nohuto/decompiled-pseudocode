/*
 * XREFs of sub_18009796C @ 0x18009796C
 * Callers:
 *     _wcstoi64 @ 0x180097910 (_wcstoi64.c)
 *     _wcstoui64 @ 0x180097940 (_wcstoui64.c)
 * Callees:
 *     _errno @ 0x180088F50 (_errno.c)
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_1800995EC @ 0x1800995EC (sub_1800995EC.c)
 *     sub_18009D788 @ 0x18009D788 (sub_18009D788.c)
 */

unsigned __int64 __fastcall sub_18009796C(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        int a4,
        int a5,
        int *a6)
{
  int v6; // r14d
  unsigned __int64 result; // rax
  unsigned __int16 v10; // si
  unsigned __int16 *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 i; // rcx
  int v14; // edi
  unsigned __int64 v15; // r13
  unsigned int v16; // r8d
  int v17; // r8d
  unsigned __int16 *v18; // rbx
  int *v19; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (unsigned int)(a4 - 2) > 0x22 )
  {
    sub_180095DE0();
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 1;
  v12 = 0LL;
  for ( i = *a2; (unsigned int)sub_1800995EC(i, 8LL, 0LL); v10 = i )
  {
    do
      i = *v11++;
    while ( (_WORD)i == v10 );
  }
  v14 = a5;
  if ( v10 == 45 )
  {
    v14 = a5 | 2;
LABEL_15:
    v10 = *v11++;
    goto LABEL_16;
  }
  if ( v10 == 43 )
    goto LABEL_15;
LABEL_16:
  if ( v6 && (unsigned int)(v6 - 2) > 0x22 )
  {
    if ( a3 )
      *a3 = a2;
    return 0LL;
  }
  if ( v6 )
    goto LABEL_26;
  if ( !(unsigned int)sub_18009D788(v10) )
  {
    if ( ((*v11 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_30;
    }
    v6 = 16;
LABEL_26:
    if ( v6 == 16 && !(unsigned int)sub_18009D788(v10) && ((*v11 - 88) & 0xFFDF) == 0 )
    {
      v10 = v11[1];
      v11 += 2;
    }
    goto LABEL_30;
  }
  v6 = 10;
LABEL_30:
  v15 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v16 = sub_18009D788(v10);
    if ( v16 != -1 )
      goto LABEL_37;
    if ( (unsigned __int16)(v10 - 65) > 0x19u && (unsigned __int16)(v10 - 97) > 0x19u )
      break;
    v17 = v10;
    if ( (unsigned __int16)(v10 - 97) <= 0x19u )
      v17 = v10 - 32;
    v16 = v17 - 55;
LABEL_37:
    if ( v16 >= v6 )
      break;
    v14 |= 8u;
    if ( v12 < v15 || v12 == v15 && v16 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
    {
      v12 = v12 * v6 + v16;
    }
    else
    {
      v14 |= 4u;
      if ( !a3 )
        break;
    }
    v10 = *v11++;
  }
  v18 = v11 - 1;
  if ( (v14 & 8) != 0 )
  {
    if ( (v14 & 4) == 0 )
    {
      if ( (v14 & 1) != 0 )
        goto LABEL_59;
      if ( (v14 & 2) != 0 )
      {
        if ( v12 <= 0x8000000000000000uLL )
          goto LABEL_59;
      }
      else if ( v12 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_59;
      }
    }
    v19 = a6;
    if ( !a6 )
      v19 = errno();
    *v19 = 34;
    if ( (v14 & 1) != 0 )
      v12 = -1LL;
    else
      v12 = ((v14 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v18 = a2;
    v12 = 0LL;
  }
LABEL_59:
  if ( a3 )
    *a3 = v18;
  result = -(__int64)v12;
  if ( (v14 & 2) == 0 )
    return v12;
  return result;
}
