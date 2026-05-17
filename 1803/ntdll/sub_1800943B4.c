/*
 * XREFs of sub_1800943B4 @ 0x1800943B4
 * Callers:
 *     sub_180094560 @ 0x180094560 (sub_180094560.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800941E0 @ 0x1800941E0 (sub_1800941E0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800943B4(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int8 *v12; // rax
  char v13; // di
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // r8
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // r8
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // cl
  unsigned __int8 v21; // r11
  unsigned __int8 v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // ecx
  _BYTE v27[32]; // [rsp+40h] [rbp-68h] BYREF

  memset(v27, 0, sizeof(v27));
  v12 = *a2;
  v13 = a1 | 8;
  v14 = *a2 + 1;
  *a2 = v14;
  if ( *v14 != 94 )
  {
    v14 = v12;
    v13 = a1;
  }
  v15 = v14 + 1;
  v16 = v14[1];
  v17 = v16;
  if ( v16 == 93 )
  {
    v17 = v14[2];
    v27[11] = 32;
  }
  else
  {
    v15 = v14;
  }
  v18 = v15 + 1;
  v19 = v16 != 93 ? 0 : 0x5D;
  while ( v17 != 93 )
  {
    if ( v17 == 45 && v19 && (v20 = v18[1], v20 != 93) )
    {
      v21 = v18[1];
      if ( v19 >= v20 )
        v21 = v19;
      v22 = v19;
      if ( v19 >= v20 )
        v22 = v18[1];
      while ( v22 <= v21 )
      {
        v27[(unsigned __int64)v22 >> 3] |= 1 << (v22 & 7);
        ++v22;
      }
      v19 = 0;
      v23 = 2LL;
    }
    else
    {
      v19 = v17;
      v24 = (unsigned __int64)v17 >> 3;
      v25 = (char)v27[v24] | (1 << (v17 & 7));
      v23 = 1LL;
      v27[v24] = v25;
    }
    v18 += v23;
    v17 = *v18;
  }
  *a2 = v18;
  return sub_1800941E0(v13, (__int64)v27, a3, a4, a5, a6, a7, a8);
}
