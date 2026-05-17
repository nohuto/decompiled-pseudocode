/*
 * XREFs of sub_180090F98 @ 0x180090F98
 * Callers:
 *     wcstol @ 0x1800911B0 (wcstol.c)
 *     sub_1800911D8 @ 0x1800911D8 (sub_1800911D8.c)
 *     wcstoul @ 0x180091210 (wcstoul.c)
 * Callees:
 *     _errno @ 0x180083380 (_errno.c)
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_18008EA4C @ 0x18008EA4C (sub_18008EA4C.c)
 *     sub_180092A04 @ 0x180092A04 (sub_180092A04.c)
 */

__int64 __fastcall sub_180090F98(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 **a3,
        unsigned int a4,
        int a5,
        int a6)
{
  unsigned int v6; // r14d
  __int64 result; // rax
  unsigned __int16 v9; // bp
  unsigned __int16 *v10; // rbx
  unsigned int v11; // edi
  int v12; // esi
  unsigned int v13; // r13d
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int16 *v16; // rbx

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    sub_18008B020();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0;
  while ( (unsigned int)sub_18008EA4C(v9, 8) )
    v9 = *v10++;
  v12 = a5;
  if ( v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( v9 != 43 )
  {
    goto LABEL_14;
  }
  v9 = *v10++;
LABEL_14:
  if ( v6 )
    goto LABEL_20;
  if ( !(unsigned int)sub_180092A04(v9) )
  {
    if ( ((*v10 - 88) & 0xFFDF) != 0 )
    {
      v6 = 8;
      goto LABEL_24;
    }
    v6 = 16;
LABEL_20:
    if ( v6 == 16 && !(unsigned int)sub_180092A04(v9) && ((*v10 - 88) & 0xFFDF) == 0 )
    {
      v9 = v10[1];
      v10 += 2;
    }
    goto LABEL_24;
  }
  v6 = 10;
LABEL_24:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    v14 = sub_180092A04(v9);
    if ( v14 != -1 )
      goto LABEL_31;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u )
      break;
    v15 = v9 - 32;
    if ( (unsigned __int16)(v9 - 97) > 0x19u )
      v15 = v9;
    v14 = v15 - 55;
LABEL_31:
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || v11 < v13 || v11 == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      v11 = v14 + v6 * v11;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    v9 = *v10++;
  }
  v16 = v10 - 1;
  if ( (v12 & 8) != 0 )
  {
    if ( (v12 & 4) == 0 )
    {
      if ( (v12 & 1) != 0 )
        goto LABEL_53;
      if ( (v12 & 2) != 0 )
      {
        if ( v11 <= 0x80000000 )
          goto LABEL_53;
      }
      else if ( v11 <= 0x7FFFFFFF )
      {
        goto LABEL_53;
      }
    }
    if ( !a6 )
    {
      *errno() = 34;
      if ( (v12 & 1) != 0 )
        v11 = -1;
      else
        v11 = ((v12 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( a3 )
      v16 = a2;
    v11 = 0;
  }
LABEL_53:
  if ( a3 )
    *a3 = v16;
  result = -v11;
  if ( (v12 & 2) == 0 )
    return v11;
  return result;
}
