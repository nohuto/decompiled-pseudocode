/*
 * XREFs of sub_1800FA128 @ 0x1800FA128
 * Callers:
 *     sub_1800F97D4 @ 0x1800F97D4 (sub_1800F97D4.c)
 * Callees:
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800F8C94 @ 0x1800F8C94 (sub_1800F8C94.c)
 */

__int64 __fastcall sub_1800FA128(unsigned __int64 a1, __int16 a2, __int16 a3, char a4)
{
  __int64 v4; // rdi
  __int16 v7; // ax
  __int16 v8; // cx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  __int64 v11; // rax

  v4 = 0LL;
  v7 = 4;
  if ( a2 >= 1 )
    v7 = a2;
  v8 = 40;
  if ( a3 >= 1 )
    v8 = a3;
  if ( a1 )
  {
    if ( v7 >= (int)*(unsigned __int16 *)(a1 + 6)
      && v8 >= (int)*(unsigned __int16 *)(a1 + 10)
      && 2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 4) <= 0xFFFFFFFF )
    {
      v9 = 2 * *(unsigned __int16 *)(a1 + 4);
      if ( 2 * (unsigned __int64)*(unsigned __int16 *)(a1 + 8) <= 0xFFFFFFFF )
      {
        v10 = 2 * *(unsigned __int16 *)(a1 + 8);
        v11 = sub_1800F8C94(v7, v8);
        v4 = v11;
        if ( v11 )
        {
          memmove(*(void **)(v11 + 16), *(const void **)(a1 + 16), v9);
          memmove(*(void **)(v4 + 24), *(const void **)(a1 + 24), v10);
          *(_WORD *)(v4 + 6) = *(_WORD *)(a1 + 6);
          *(_WORD *)(v4 + 10) = *(_WORD *)(a1 + 10);
          if ( !a4 )
            sub_1800700D8(a1);
        }
      }
    }
  }
  return v4;
}
