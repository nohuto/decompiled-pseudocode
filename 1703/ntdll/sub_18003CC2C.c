/*
 * XREFs of sub_18003CC2C @ 0x18003CC2C
 * Callers:
 *     sub_18003C6F4 @ 0x18003C6F4 (sub_18003C6F4.c)
 *     sub_18003CBC0 @ 0x18003CBC0 (sub_18003CBC0.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D7B0C @ 0x1800D7B0C (sub_1800D7B0C.c)
 */

__int64 __fastcall sub_18003CC2C(const void **a1, unsigned __int16 *a2)
{
  int v4; // edi
  unsigned int v5; // ebp
  unsigned int v7; // ebp
  __int64 v8; // rsi
  void *v9; // rax

  v4 = 0;
  if ( !*a2 )
    return (unsigned int)v4;
  v5 = *a2 + *(unsigned __int16 *)a1 + 2;
  if ( v5 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( v5 > 0xFFFE )
    {
      v4 = -1073741562;
      goto LABEL_3;
    }
    v7 = (v5 + 63) & 0xFFFFFFC0;
    if ( v7 > 0xFFFE )
      v7 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      v9 = (void *)sub_180043FE0(v7);
      v8 = (__int64)v9;
      if ( !v9 )
      {
LABEL_17:
        v4 = -1073741801;
        goto LABEL_3;
      }
      if ( *(_WORD *)a1 )
        memmove(v9, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      v8 = sub_1800D7B0C(v7);
    }
    if ( v8 )
    {
      a1[1] = (const void *)v8;
      *((_WORD *)a1 + 1) = v7;
      goto LABEL_3;
    }
    goto LABEL_17;
  }
LABEL_3:
  if ( v4 >= 0 )
  {
    memmove((char *)a1[1] + *(unsigned __int16 *)a1, *((const void **)a2 + 1), *a2);
    *(_WORD *)a1 += *a2;
    *((_WORD *)a1[1] + ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
  }
  return (unsigned int)v4;
}
