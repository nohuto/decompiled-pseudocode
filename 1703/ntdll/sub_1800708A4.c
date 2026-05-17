/*
 * XREFs of sub_1800708A4 @ 0x1800708A4
 * Callers:
 *     sub_180070790 @ 0x180070790 (sub_180070790.c)
 *     sub_180070824 @ 0x180070824 (sub_180070824.c)
 *     sub_1800D4C18 @ 0x1800D4C18 (sub_1800D4C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800708A4(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4, __int64 a5)
{
  __int64 result; // rax
  _WORD *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // r9

  result = 0LL;
  v6 = a4;
  v7 = 0LL;
  if ( !a2 )
  {
    v9 = a5;
LABEL_9:
    if ( v9 && *v6 )
      result = 2147483653LL;
    goto LABEL_7;
  }
  v8 = a1 - (_QWORD)a4;
  v9 = a5;
  do
  {
    if ( !v9 )
      break;
    if ( !*v6 )
      break;
    *(_WORD *)((char *)v6 + v8) = *v6;
    --v9;
    ++v6;
    ++v7;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
    goto LABEL_9;
LABEL_7:
  *a3 = v7;
  return result;
}
