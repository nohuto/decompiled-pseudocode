/*
 * XREFs of sub_1800CC66C @ 0x1800CC66C
 * Callers:
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007D594 @ 0x18007D594 (sub_18007D594.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CC66C(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  LODWORD(v2) = 0;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
  }
  *(_DWORD *)(a1 + 12) = 0;
  if ( !a2 )
    a2 = &word_180114044;
  result = (unsigned int)(2 * v2 + 2);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
