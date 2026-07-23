/*
 * XREFs of sub_1800FBD34 @ 0x1800FBD34
 * Callers:
 *     sub_1800FB648 @ 0x1800FB648 (sub_1800FB648.c)
 * Callees:
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800FAA04 @ 0x1800FAA04 (sub_1800FAA04.c)
 */

_QWORD *__fastcall sub_1800FBD34(const void **BaseAddress, __int16 a2, __int16 a3, char a4)
{
  _QWORD *v4; // rdi
  __int16 v7; // ax
  __int16 v8; // cx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( BaseAddress )
  {
    if ( v7 >= (int)*((unsigned __int16 *)BaseAddress + 3) && v8 >= (int)*((unsigned __int16 *)BaseAddress + 5) )
    {
      v9 = 2LL * *((unsigned __int16 *)BaseAddress + 2);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 2LL * *((unsigned __int16 *)BaseAddress + 4);
        if ( v10 <= 0xFFFFFFFF )
        {
          v11 = sub_1800FAA04(v7, v8);
          v4 = v11;
          if ( v11 )
          {
            memmove((void *)v11[2], BaseAddress[2], (unsigned int)v9);
            memmove((void *)v4[3], BaseAddress[3], (unsigned int)v10);
            *((_WORD *)v4 + 3) = *((_WORD *)BaseAddress + 3);
            *((_WORD *)v4 + 5) = *((_WORD *)BaseAddress + 5);
            if ( !a4 )
              sub_18006EBF4(BaseAddress);
          }
        }
      }
    }
  }
  return v4;
}
