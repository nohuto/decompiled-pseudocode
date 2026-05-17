/*
 * XREFs of sub_1800941E0 @ 0x1800941E0
 * Callers:
 *     sub_1800943B4 @ 0x1800943B4 (sub_1800943B4.c)
 *     sub_180094560 @ 0x180094560 (sub_180094560.c)
 * Callees:
 *     sub_18008E990 @ 0x18008E990 (sub_18008E990.c)
 *     sub_18009452C @ 0x18009452C (sub_18009452C.c)
 *     sub_180094FA0 @ 0x180094FA0 (sub_180094FA0.c)
 *     sub_180095014 @ 0x180095014 (sub_180095014.c)
 */

__int64 __fastcall sub_1800941E0(char a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5, int a6, __int64 a7, _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r15
  bool v13; // zf
  int v14; // r13d
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // ecx
  _WORD *v20; // rax
  __int16 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h]
  int v24; // [rsp+70h] [rbp+18h]

  v23 = a2;
  v8 = (_WORD **)a5;
  v22 = 0;
  v11 = (_WORD *)*a5;
  --*a4;
  v13 = *a3 == -1;
  v24 = -((a1 & 8) != 0);
  if ( !v13 )
    sub_180095014((unsigned int)*a3, a7);
  v14 = a6;
  while ( (a1 & 1) == 0 || v14 )
  {
    v15 = a7;
    v16 = v14 - 1;
    if ( (a1 & 1) == 0 )
      v16 = v14;
    ++*a4;
    v14 = v16;
    v17 = sub_18009452C(v15);
    *a3 = v17;
    if ( v17 == -1
      || (v18 = v17, (a1 & 0x10) == 0)
      && ((a1 & 0x20) == 0 || v17 >= 9 && v17 <= 13 || (v18 = v17, v17 == 32))
      && ((a1 & 0x40) == 0
       || v17 < 0
       || v17 < v17 >> 3
       || (v18 = v17, v19 = v24 ^ *(char *)((v17 >> 3) + v23), !_bittest(&v19, v17 & 7))) )
    {
      --*a4;
      if ( *a3 != -1 )
        sub_180095014((unsigned int)*a3, a7);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else if ( (a1 & 2) != 0 )
    {
      LOBYTE(a5) = v18;
      if ( (unsigned int)sub_18008E990(v18) )
      {
        ++*a4;
        BYTE1(a5) = sub_18009452C(a7);
      }
      v22 = 63;
      sub_180094FA0(&v22, &a5, dword_180156EF4);
      *(*v8)++ = v22;
    }
    else
    {
      *(_BYTE *)*v8 = v18;
      *v8 = (_WORD *)((char *)*v8 + 1);
    }
  }
  if ( v11 == *v8 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a8;
    if ( (a1 & 0x10) == 0 )
    {
      v20 = *v8;
      if ( (a1 & 2) != 0 )
        *v20 = 0;
      else
        *(_BYTE *)v20 = 0;
    }
  }
  return 0LL;
}
