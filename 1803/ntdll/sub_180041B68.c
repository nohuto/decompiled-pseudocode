/*
 * XREFs of sub_180041B68 @ 0x180041B68
 * Callers:
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0728 @ 0x1800D0728 (sub_1800D0728.c)
 */

__int64 __fastcall sub_180041B68(unsigned __int16 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  unsigned __int16 *v6; // rdx
  unsigned int v7; // ebp
  __int64 v8; // rsi
  PVOID v9; // rax

  v2 = 0;
  if ( a2 > a1[1] )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v5 = a2 + 63;
    v6 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v7 = v5 & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( v6 == a1 + 8 )
    {
      v9 = sub_18003B5E0(v7);
      v8 = (__int64)v9;
      if ( !v9 )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(v9, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v8 = sub_1800D0728(v7, v6);
    }
    if ( v8 )
    {
      *((_QWORD *)a1 + 1) = v8;
      a1[1] = v7;
      return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
