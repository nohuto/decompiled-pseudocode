/*
 * XREFs of sub_18009EF60 @ 0x18009EF60
 * Callers:
 *     sub_18009F11C @ 0x18009F11C (sub_18009F11C.c)
 *     sub_18009F290 @ 0x18009F290 (sub_18009F290.c)
 * Callees:
 *     sub_180099530 @ 0x180099530 (sub_180099530.c)
 *     sub_18009F268 @ 0x18009F268 (sub_18009F268.c)
 *     sub_18009FC7C @ 0x18009FC7C (sub_18009FC7C.c)
 *     sub_18009FCF4 @ 0x18009FCF4 (sub_18009FCF4.c)
 */

__int64 __fastcall sub_18009EF60(char a1, __int64 a2, int *a3, _DWORD *a4, _QWORD *a5, int a6, __int64 a7, _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r15
  bool v13; // zf
  int v14; // r13d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edx
  int v21; // ecx
  _WORD *v22; // rax
  __int16 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+10h]
  int v26; // [rsp+70h] [rbp+18h]

  v25 = a2;
  v8 = (_WORD **)a5;
  v24 = 0;
  v11 = (_WORD *)*a5;
  --*a4;
  v13 = *a3 == -1;
  v26 = -((a1 & 8) != 0);
  if ( !v13 )
    sub_18009FCF4((unsigned int)*a3, a7);
  v14 = a6;
  while ( (a1 & 1) == 0 || v14-- )
  {
    v16 = a7;
    ++*a4;
    v17 = sub_18009F268(v16);
    *a3 = v17;
    v18 = v17;
    if ( v17 == -1
      || (a1 & 0x10) == 0
      && ((a1 & 0x20) == 0 || (unsigned int)(v17 - 9) <= 4 || v17 == 32)
      && ((a1 & 0x40) == 0
       || v17 < 0
       || (v19 = v17 >> 3, v18 < v19)
       || (v20 = v18 & 7, v21 = v26 ^ *(char *)(v19 + v25), !_bittest(&v21, v20))) )
    {
      --*a4;
      if ( *a3 != -1 )
        sub_18009FCF4((unsigned int)*a3, a7);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else if ( (a1 & 2) != 0 )
    {
      LOBYTE(a5) = *(_BYTE *)a3;
      if ( (unsigned int)sub_180099530((unsigned __int8)a5) )
      {
        ++*a4;
        BYTE1(a5) = sub_18009F268(a7);
      }
      v24 = 63;
      sub_18009FC7C(&v24, &a5, dword_180155E94);
      *(*v8)++ = v24;
    }
    else
    {
      *(_BYTE *)*v8 = *(_BYTE *)a3;
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
      v22 = *v8;
      if ( (a1 & 2) != 0 )
        *v22 = 0;
      else
        *(_BYTE *)v22 = 0;
    }
  }
  return 0LL;
}
