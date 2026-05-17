/*
 * XREFs of sub_18009F11C @ 0x18009F11C
 * Callers:
 *     sub_18009F290 @ 0x18009F290 (sub_18009F290.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18009F11C(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned __int8 v12; // bl
  unsigned __int8 *v13; // r8
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // r9
  unsigned __int8 v16; // al
  _BYTE v18[32]; // [rsp+40h] [rbp-58h] BYREF

  v12 = 0;
  memset(v18, 0, sizeof(v18));
  v13 = ++*a2;
  if ( **a2 == 94 )
  {
    ++v13;
    a1 |= 8u;
  }
  if ( *v13 == 93 )
  {
    v12 = 93;
    v18[11] = 32;
    ++v13;
  }
  while ( 1 )
  {
    v16 = *v13;
    if ( *v13 == 93 )
      break;
    ++v13;
    if ( v16 == 45 && v12 && (v14 = *v13, *v13 != 93) )
    {
      ++v13;
      if ( v12 >= v14 )
      {
        v15 = v12;
        v12 = v14;
      }
      else
      {
        v15 = v14;
      }
      while ( v12 <= v15 )
      {
        v18[(unsigned __int64)v12 >> 3] |= 1 << (v12 & 7);
        ++v12;
      }
      v12 = 0;
    }
    else
    {
      v12 = v16;
      v18[(unsigned __int64)v16 >> 3] |= 1 << (v16 & 7);
    }
  }
  *a2 = v13;
  return sub_18009EF60(a1, (__int64)v18, a3, a4, a5, a6, a7, a8);
}
