/*
 * XREFs of sub_1800F97D4 @ 0x1800F97D4
 * Callers:
 *     sub_1800353C4 @ 0x1800353C4 (sub_1800353C4.c)
 * Callees:
 *     sub_1800FA128 @ 0x1800FA128 (sub_1800FA128.c)
 */

unsigned __int16 *__fastcall sub_1800F97D4(unsigned __int16 *BaseAddress, __int64 a2, int a3, char a4)
{
  unsigned __int16 *v5; // r10
  int v6; // r9d
  int v7; // edx
  int v8; // r9d
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // eax

  v5 = BaseAddress;
  if ( BaseAddress )
  {
    v6 = 16;
    v7 = BaseAddress[3] + 1;
    if ( a3 >= 0 )
      v6 = a3;
    v8 = BaseAddress[5] + v6;
    v9 = BaseAddress[2];
    v10 = BaseAddress[4];
    v11 = v9;
    if ( v7 >= v9 )
      v11 = v7;
    if ( a4 || v11 != v9 )
      return (unsigned __int16 *)sub_1800FA128(v5);
    v12 = v10;
    if ( v8 >= v10 )
      v12 = v8;
    if ( v12 != v10 )
      return (unsigned __int16 *)sub_1800FA128(v5);
  }
  return v5;
}
