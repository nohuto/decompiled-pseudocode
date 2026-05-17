/*
 * XREFs of sub_1800FEB20 @ 0x1800FEB20
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800FE2D0 @ 0x1800FE2D0 (sub_1800FE2D0.c)
 *     sub_1800FE344 @ 0x1800FE344 (sub_1800FE344.c)
 */

__int64 __fastcall sub_1800FEB20(char *Src, __int64 a2, int *a3)
{
  unsigned int v6; // r14d
  bool v7; // zf
  unsigned int v8; // edi
  int v9; // r8d

  v6 = a2;
  while ( v6 )
  {
    v7 = a3[2] == 0x4000;
    if ( (unsigned int)a3[2] < 0x4000 )
    {
      v8 = v6;
      if ( 0x4000 - a3[2] < v6 )
        v8 = 0x4000 - a3[2];
      memmove((char *)a3 + (unsigned int)a3[2] + 16, Src, v8);
      a3[2] += v8;
      v6 -= v8;
      a3[3] += v8;
      Src += v8;
      v7 = a3[2] == 0x4000;
    }
    if ( v7 )
    {
      sub_1800FE344(*a3, a3[1]++, 0x4000, (__int64)(a3 + 4));
      a3[2] = 0;
      memset(a3 + 4, 0, 0x4000uLL);
    }
  }
  if ( !a2 )
  {
    v9 = a3[2];
    if ( v9 )
    {
      sub_1800FE344(*a3, a3[1]++, v9, (__int64)(a3 + 4));
      a3[2] = 0;
      memset(a3 + 4, 0, 0x4000uLL);
    }
    sub_1800FE2D0(*a3, a3[3]);
  }
  return 0LL;
}
