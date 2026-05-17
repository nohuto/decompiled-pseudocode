/*
 * XREFs of sub_18005DEBC @ 0x18005DEBC
 * Callers:
 *     sub_18005DD3C @ 0x18005DD3C (sub_18005DD3C.c)
 *     sub_18005DE38 @ 0x18005DE38 (sub_18005DE38.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005DEBC(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  __int16 v7; // r9

  result = 0LL;
  if ( !a2 )
    goto LABEL_8;
  v5 = 2147483646LL;
  v6 = a4 - (_QWORD)a1;
  do
  {
    if ( !v5 )
      break;
    v7 = *(_WORD *)((char *)a1 + v6);
    if ( !v7 )
      break;
    *a1 = v7;
    --v5;
    ++a1;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
LABEL_8:
    --a1;
    result = 2147942522LL;
  }
  *a1 = 0;
  return result;
}
