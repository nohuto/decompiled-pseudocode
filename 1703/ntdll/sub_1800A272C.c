/*
 * XREFs of sub_1800A272C @ 0x1800A272C
 * Callers:
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A2584 @ 0x1800A2584 (sub_1800A2584.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800A272C(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  unsigned __int8 v13; // bl
  unsigned __int8 *v14; // r8
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // al
  _BYTE v19[32]; // [rsp+50h] [rbp-68h] BYREF

  v13 = 0;
  memset(v19, 0, sizeof(v19));
  v14 = ++*a2;
  if ( **a2 == 94 )
  {
    ++v14;
    a1 |= 8u;
  }
  if ( *v14 == 93 )
  {
    v13 = 93;
    v19[11] = 32;
    ++v14;
  }
  while ( 1 )
  {
    v17 = *v14;
    if ( *v14 == 93 )
      break;
    ++v14;
    if ( v17 == 45 && v13 && (v15 = *v14, *v14 != 93) )
    {
      ++v14;
      if ( v13 >= v15 )
      {
        v16 = v13;
        v13 = v15;
      }
      else
      {
        v16 = v15;
      }
      while ( v13 <= v16 )
      {
        v19[(unsigned __int64)v13 >> 3] |= 1 << (v13 & 7);
        ++v13;
      }
      v13 = 0;
    }
    else
    {
      v13 = v17;
      v19[(unsigned __int64)v17 >> 3] |= 1 << (v17 & 7);
    }
  }
  *a2 = v14;
  return sub_1800A2584(a1, (__int64)v19, a3, a4, a5, a6, a7, a8, a9);
}
