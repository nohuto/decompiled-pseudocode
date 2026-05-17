/*
 * XREFs of sub_1800D9314 @ 0x1800D9314
 * Callers:
 *     sub_1800D9270 @ 0x1800D9270 (sub_1800D9270.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D9314(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  const WCHAR *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11

  result = 0LL;
  v4 = "\\";
  v5 = 0x7FFFLL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_12;
  do
  {
    if ( !v5 )
      break;
    if ( !*v4 )
      break;
    *(const WCHAR *)((char *)v4 + a1 - (_QWORD)"\\") = *v4;
    --v5;
    ++v4;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 && v5 )
  {
LABEL_12:
    if ( *v4 )
      result = 2147483653LL;
  }
  *a3 = v6;
  return result;
}
