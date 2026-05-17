/*
 * XREFs of sub_180097BEC @ 0x180097BEC
 * Callers:
 *     sub_180097DA0 @ 0x180097DA0 (sub_180097DA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_180097A38 @ 0x180097A38 (sub_180097A38.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180097BEC(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 *v13; // rcx
  char v14; // di
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r8
  unsigned __int8 v20; // r9
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // r11
  unsigned __int8 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // ecx
  _BYTE v28[32]; // [rsp+50h] [rbp-68h] BYREF

  memset(v28, 0, sizeof(v28));
  v13 = *a2;
  v14 = a1 | 8;
  v15 = *a2 + 1;
  *a2 = v15;
  if ( *v15 != 94 )
  {
    v15 = v13;
    v14 = a1;
  }
  v16 = v15 + 1;
  v17 = v15[1];
  v18 = v17;
  if ( v17 == 93 )
  {
    v18 = v15[2];
    v28[11] = 32;
  }
  else
  {
    v16 = v15;
  }
  v19 = v16 + 1;
  v20 = v17 != 93 ? 0 : 0x5D;
  while ( v18 != 93 )
  {
    if ( v18 == 45 && v20 && (v21 = v19[1], v21 != 93) )
    {
      v22 = v19[1];
      if ( v20 >= v21 )
        v22 = v20;
      v23 = v20;
      if ( v20 >= v21 )
        v23 = v19[1];
      while ( v23 <= v22 )
      {
        v28[(unsigned __int64)v23 >> 3] |= 1 << (v23 & 7);
        ++v23;
      }
      v20 = 0;
      v24 = 2LL;
    }
    else
    {
      v20 = v18;
      v25 = (unsigned __int64)v18 >> 3;
      v26 = (char)v28[v25] | (1 << (v18 & 7));
      v24 = 1LL;
      v28[v25] = v26;
    }
    v19 += v24;
    v18 = *v19;
  }
  *a2 = v19;
  return sub_180097A38(v14, (__int64)v28, a3, a4, a5, a6, a7, a8, a9);
}
