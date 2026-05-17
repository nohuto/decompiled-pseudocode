/*
 * XREFs of sub_1800FA060 @ 0x1800FA060
 * Callers:
 *     sub_1800F97B4 @ 0x1800F97B4 (sub_1800F97B4.c)
 * Callees:
 *     sub_1800FBEBC @ 0x1800FBEBC (sub_1800FBEBC.c)
 */

__int64 __fastcall sub_1800FA060(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  if ( !a1 )
    return 0LL;
  if ( v2 < *(unsigned __int16 *)(a1 + 4) )
    return 0LL;
  result = sub_1800FBEBC(a1, 64, v2, 6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 24) = result + 64;
  *(_WORD *)(result + 6) = v2;
  return result;
}
