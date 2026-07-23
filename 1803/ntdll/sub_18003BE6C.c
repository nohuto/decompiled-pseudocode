/*
 * XREFs of sub_18003BE6C @ 0x18003BE6C
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_18003BE00 @ 0x18003BE00 (sub_18003BE00.c)
 * Callees:
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D0728 @ 0x1800D0728 (sub_1800D0728.c)
 */

__int64 __fastcall sub_18003BE6C(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // edi
  unsigned int v5; // ebp
  unsigned __int16 *v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rsi
  PVOID v10; // rax

  v4 = 0;
  if ( !*a2 )
    return (unsigned int)v4;
  v5 = *a2 + *a1 + 2;
  if ( v5 > a1[1] )
  {
    if ( v5 > 0xFFFE )
    {
      v4 = -1073741562;
      goto LABEL_3;
    }
    v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v8 = (v5 + 63) & 0xFFFFFFC0;
    if ( v8 > 0xFFFE )
      v8 = 65534;
    if ( v7 == a1 + 8 )
    {
      v10 = sub_18003B5E0(v8);
      v9 = (__int64)v10;
      if ( !v10 )
      {
LABEL_17:
        v4 = -1073741801;
        goto LABEL_3;
      }
      if ( *a1 )
        memmove(v10, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v9 = sub_1800D0728(v8, v7);
    }
    if ( v9 )
    {
      *((_QWORD *)a1 + 1) = v9;
      a1[1] = v8;
      goto LABEL_3;
    }
    goto LABEL_17;
  }
LABEL_3:
  if ( v4 >= 0 )
  {
    memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
    *a1 += *a2;
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
  }
  return (unsigned int)v4;
}
