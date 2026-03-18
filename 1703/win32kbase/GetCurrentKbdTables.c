/*
 * XREFs of GetCurrentKbdTables @ 0x1C012F920
 * Callers:
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F878 (-SendKeyUpDown@@YAXEE@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetCurrentKbdTables()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rax

  result = gpqForeground;
  if ( gpqForeground )
  {
    v1 = *(_QWORD *)(gpqForeground + 88);
    if ( v1 )
      v2 = *(_QWORD *)(v1 + 16);
    else
      v2 = *(_QWORD *)(gpqForeground + 64);
    v3 = *(_QWORD *)(v2 + 392);
    if ( v3 )
      return *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
    else
      return gpKbdTbl;
  }
  return result;
}
